#include<iostream>
using namespace std;

int binary_Search(int *arr,int l , int r, int item) {

    int m = l + (r-l)/2;

    if (l<=r){

        if (arr[m]==item) {
            return m;
        } else if (arr[m]>item) {
            r = m-1;
            binary_Search(arr, l, r, item);
        } else if (arr[m]<item) {
            l = m+1;
            binary_Search(arr, l, r, item);
        }
    }
    return -1;
}
int main() {

    int n, item;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cin>>item;

    cout<<"\nItem found at index : "<<binary_Search(arr, 0, n-1, item);

    return 0;
}

