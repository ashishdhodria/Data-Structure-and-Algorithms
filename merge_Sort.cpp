#include<iostream>
using namespace std;

void merge(int *arr, int p, int q, int r) {

    int n1 = q-p+1;
    int n2 = r-q;

    int L[n1], R[n2];

    for (int i=0; i<n1; i++) {
        L[i] = arr[p+i];
    }

    for (int i=0; i<n2; i++) {
        R[i] = arr[q+i+1];
    }

    int i = 0;
    int j =0;

    for (int k=p; k<=r; k++) {

        if (L[i]<=R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }

}

void merge_Sort(int *arr, int p, int r) {

    int q = (p+r)/2;

    if (p<r) {

        merge_Sort(arr, p, q);
        merge_Sort(arr, q+1, r);
        merge(arr, p, q, r);
    }
}

void show(int *arr, int n) {
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    merge_Sort(arr, 0, n-1);
    show(arr, n);
    return 0;
}
