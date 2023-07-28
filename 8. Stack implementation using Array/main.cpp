#include "StackType.cpp"
#include <iostream>
using namespace std;

int main(){
    // Creating a stack of integer
    StackType<int> stack;

    // Checking if it's empty
    (stack.IsEmpty())? cout << "Stack is Empty" << endl :
        cout << "Stack is not Empty" << endl;

    // Pushing 4 items
    for(int i=0;i<4;i++){
        int x; cin >> x;
        stack.Push(x);
    }

    (stack.IsEmpty())? cout << "Stack is Empty" << endl :
        cout << "Stack is not Empty" << endl;

    // Checking if it's full
    (stack.IsFull())? cout << "Stack is full" << endl :
        cout << "Stack is not full" << endl;

    // Printing the stack
    StackType<int> temp;
    while(!stack.IsEmpty()){
        int x = stack.Top();
        temp.Push(x);
        stack.Pop();
    }
    while(!temp.IsEmpty()){
        int x = temp.Top();
        cout << x << " ";
        stack.Push(x);
        temp.Pop();
    } cout << endl;

    stack.Push(3);

    // print
    while(!stack.IsEmpty()){
        int x = stack.Top();
        temp.Push(x);
        stack.Pop();
    }
    while(!temp.IsEmpty()){
        int x = temp.Top();
        cout << x << " ";
        stack.Push(x);
        temp.Pop();
    } cout << endl;

    // Checking if it's full
    (stack.IsFull())? cout << "Stack is full" << endl :
        cout << "Stack is not full" << endl;

    // removing items from stack
    stack.Pop();
    stack.Pop();

    // top item
    cout << stack.Top() << endl;

    return 0;
}
