#include "QueType.cpp"
#include <iostream>
using namespace std;

int main(){
    // creating a queue of 5 integers
    QueType<int> queue(5);

    // checking if it's empty
    (queue.IsEmpty())? cout << "Queue is Empty" << endl :
        cout << "Queue is not Empty" << endl;

    // inserting 4 elements
    for(int i=0;i<4;i++){
        int x; cin >> x;
        try{
            queue.Enqueue(x);
        } catch(FullQueue ex){
            cout << "Queue Overflow" << endl;
        }
    }

    (queue.IsEmpty())? cout << "Queue is Empty" << endl :
        cout << "Queue is not Empty" << endl;

    // checking if it's full
    (queue.IsFull())? cout << "Queue is Full" << endl :
        cout << "Queue is not Full" << endl;

    queue.Enqueue(6);

    // printing queue
    QueType<int> temp;
    while(!queue.IsEmpty()){
        int x;
        queue.Dequeue(x);
        temp.Enqueue(x);
        cout << x << " ";
    } cout << endl;
    while(!temp.IsEmpty()){
        int x;
        temp.Dequeue(x);
        queue.Enqueue(x);
    }

    (queue.IsFull())? cout << "Queue is Full" << endl :
        cout << "Queue is not Full" << endl;

    try{
        queue.Enqueue(8);
    } catch(FullQueue ex){
        cout << "Queue Overflow" << endl;
    }

    // dequeue items
    int item;

    queue.Dequeue(item);
    queue.Dequeue(item);

    // printing queue
    while(!queue.IsEmpty()){
        int x;
        queue.Dequeue(x);
        temp.Enqueue(x);
        cout << x << " ";
    } cout << endl;
    while(!temp.IsEmpty()){
        int x;
        temp.Dequeue(x);
        queue.Enqueue(x);
    }

    // dequeue 3 items
    for(int i=0;i<3;i++){
        try{
            queue.Dequeue(item);
        }catch(EmptyQueue ex){
            cout << "Queue Underflow" << endl;
        }
    }

    (queue.IsEmpty())? cout << "Queue is Empty" << endl :
        cout << "Queue is not Empty" << endl;

    try{
        queue.Dequeue(item);
    }catch(EmptyQueue ex){
        cout << "Queue Underflow" << endl;
    }

    return 0;
}
