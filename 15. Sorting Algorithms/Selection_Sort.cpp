#include <iostream>
using namespace std;

// O(n^2)
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
        
    }
}

int main() {
    int n = 10;
    int arr[n] = {3,4,1,5,0,9,6,2,7,8};

    selectionSort(arr, n);

    for (auto i : arr){
        cout << i << " ";
    } cout << endl;

    return 0;
}