#include<iostream>
using namespace std;

int partition(int *arr, int p, int r) {

    int i = p-1;

    int key = arr[r];

    for (int j=p; j<r; j++) {

        if (arr[j]<=key) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}
void quick_Sort(int *arr, int p, int r) {

    if (p<r) {

        int q = partition(arr, p, r);
        quick_Sort(arr, p, q-1);
        quick_Sort(arr, q+1, r);
    }
}

void show(int *arr, int n) {
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    quick_Sort(arr, 0, n-1);
    show(arr, n);
    return 0;
}
