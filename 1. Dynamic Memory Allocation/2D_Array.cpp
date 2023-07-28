// allocating and deallocating integ
#include <iostream>
using namespace std;

int main() {
    int row,col;
    cin >> row >> col;
    int** arr = new int*[row];

    // allocating column for every row
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }
    // taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> arr[i][j];
            //cin >> *(*(arr2+i)+j);
        }
    }
    // printing array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // deallocating column for every row
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }
    // deallocating row
    delete[] arr;
    arr = NULL;
    return 0;
}