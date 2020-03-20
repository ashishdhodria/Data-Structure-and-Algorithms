#include<iostream>
using namespace std;

void selection(int arr[], int n) {

    int temp;

for (int j=0; j<n; j++) {
    int p = 0;
    for (int i=j+1; i<n; i++) {
        if (arr[j]>arr[i]) {
            p = i;
        }
        swap(arr[j], arr[p]);
    }
    }
}

void show(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
} 

int main() {
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3 , 2, 1};
    selection(arr, 10);
    show(arr, 10);
    return 0;
}