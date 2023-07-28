#include <iostream>
using namespace std;

// O(log(N))
int binarySearch(int data[], int n, int value){
    int lb=0, ub=n-1;
    
    while(ub>lb){
        int mid = (ub+lb) / 2;

        if(data[mid] == value) return mid;
        else if(value>data[mid]){
            lb = mid+1;
        }
        else if(value<data[mid]){
            ub = mid-1;
        }
    }
    return -1;
}

int main() {
    int arr[10] = {0,10,20,30,40,50,60,70,80,90};
    int res = binarySearch(arr, 10, 40);
    cout << res << endl;
    return 0;
}