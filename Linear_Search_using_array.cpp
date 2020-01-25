#include<iostream>
using namespace std;

int linear_Search(int *arr,int n , int item) {

    for (int i=0; i<n; i++) {

        if (arr[i]==item) {
            return i;
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

    cout<<"\nItem found at index : "<<linear_Search(arr, n, item);

    return 0;
}
