// allocating and deallocating integer array using new and delete operator
#include <iostream>
using namespace std;

int main() {
    int size; cin >> size;
    // allocating memory for array
    int* arr = new int[size];
    // taking input
    for(int i=0;i<size;i++){
        cin >> *(arr+i);
        // cin >> arr[i];
    }
    // printing array
    for(int i=0;i<size;i++){
        cout << *(arr+i) << " ";
    }
    // deallocating memory
    delete[] arr;
    arr = NULL;
    return 0;
}