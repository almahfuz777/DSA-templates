#include <iostream>
using namespace std;

// O(n^2)
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
int main() {
    int n = 10;
    int arr[n] = {3,4,1,5,0,9,6,2,7,8};

    bubbleSort(arr, n);

    for (auto i : arr){
        cout << i << " ";
    } cout << endl;

    return 0;
}