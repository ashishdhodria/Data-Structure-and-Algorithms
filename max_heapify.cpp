#include<iostream>
using namespace std;

void max_Heapify(int *arr, int n, int i) {

    int l = 2*i;
    int r = 2*i+1;
    int largest;

    if (l<n && arr[l]>arr[i])
        largest = l;
    else
        largest = i;

    if (r<n && arr[r]>arr[largest])
        largest =r;

    if(i!=n) {
        swap(arr[i], arr[largest]);
        max_Heapify(arr, n, largest);
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

    show(arr, n);
    max_Heapify(arr, n, 0);
    show(arr, n);

    return 0;

}
