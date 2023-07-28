#include <iostream>
using namespace std;

// O(n^2)
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n = 10;
    int arr[n] = {3,4,1,5,0,9,6,2,7,8};

    insertionSort(arr, n);

    for (auto i : arr){
        cout << i << " ";
    } cout << endl;

    return 0;
}