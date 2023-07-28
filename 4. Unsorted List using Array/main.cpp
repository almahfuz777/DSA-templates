#include "UnsortedType.cpp"
#include <iostream>
using namespace std;

int main(){
    UnsortedType<int> list; // creating a list of integers
    // inserting elements
    list.InsertItem(3);
    list.InsertItem(6);
    list.InsertItem(2);
    list.InsertItem(8);

    // resetting cursor location
    list.ResetList();

    // printing elements
    for(int i=0;i<list.LengthIs();i++){
        int x;
        list.GetNextItem(x);
        cout << x << " ";
    } cout << endl;

    // checking if the list is full
    cout << list.IsFull() << endl;

    list.InsertItem(1);

    // deleting element
    list.DeleteItem(6);

    list.ResetList();
    for(int i=0;i<list.LengthIs();i++){
        int x;
        list.GetNextItem(x);
        cout << x << " ";
    } cout << endl;

    return 0;
}
