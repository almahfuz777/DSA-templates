#include "TreeType.cpp"

int main(){
    TreeType<int> tree;

    // checking if tree is empty
    if(tree.IsEmpty()) cout << "Tree is empty" << endl;
    else cout << "Tree is not empty" << endl;

    // inserting 10 items
    for(int i=0;i<10;i++){
        int x; cin >> x;
        tree.InsertItem(x);
    }

    // checking if tree is empty
    if(tree.IsEmpty()) cout << "Tree is empty" << endl;
    else cout << "Tree is not empty" << endl;

    // printing tree length
    cout << tree.LengthIs() << endl;

    // retrieve 2 items
    for(int i=0;i<2;i++){
        int x; bool found;
        cin >> x;
        tree.RetrieveItem(x, found);
        if(found) cout << "Item is found" << endl;
        else cout << "Item is not found" << endl;
    }

    // printing tree in 'inorder'
    tree.ResetTree(IN_ORDER);
    int item;
    bool finished = false;
    while(!finished){
        tree.GetNextItem(item, IN_ORDER, finished);
        cout << item << " ";
    } cout << endl;

    // printing tree in 'preorder'
    tree.ResetTree(PRE_ORDER);
    finished = false;
    while(!finished){
        tree.GetNextItem(item, PRE_ORDER, finished);
        cout << item << " ";
    } cout << endl;

    // printing tree in 'postorder'
    tree.ResetTree(POST_ORDER);
    finished = false;
    while(!finished){
        tree.GetNextItem(item, POST_ORDER, finished);
        cout << item << " ";
    } cout << endl;

    // emptying the tree
    tree.MakeEmpty();
    return 0;
}
