#include "SortedType.cpp"
using namespace std;

int main(){
    SortedType<int> list;
    // length of the list
    cout << "Length: " << list.LengthIs() << endl;

    // Inserting elements
    for(int i=0;i<5;i++){
        int x; cin >> x;
        list.InsertItem(x);
    }

    // printing the list
    list.ResetList();
    for(int i=0;i<list.LengthIs();i++){
        int x;
        list.GetNextItem(x);
        cout << x << " ";
    } cout << endl;

    // Retrieve item
    int x;
    for(int i=0;i<2;i++){
        int x; cin >> x;
        bool found;
        list.RetrieveItem(x,found);
        if(found == true) cout << "Item is found" << endl;
        else cout << "Item is not found" << endl;
    }

    // isFull
    if(list.IsFull()==true) cout << "List is full" << endl;
    else cout << "List is not full" << endl;

    // delete item
    list.DeleteItem(1);

   // printing the list
   list.ResetList();
    for(int i=0;i<list.LengthIs();i++){
        int x;
        list.GetNextItem(x);
        cout << x << " ";
    } cout << endl;

    return 0;
}
