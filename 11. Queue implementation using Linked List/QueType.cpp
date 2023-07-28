#include "QueType.h"
#include <iostream>
using namespace std;

template <class T>
QueType<T>::QueType(){
    front = NULL;
    rear = NULL;
}
template <class T>
bool QueType<T>::IsEmpty(){
    return (front == NULL);
}
template <class T>
bool QueType<T>::IsFull(){
    Node* temp;
    try{
        temp = new Node;
        delete temp;
        return false;
    } catch(bad_alloc& exception){
        return true;
    }
}
template <class T>
void QueType<T>::Enqueue(T item){
    if (IsFull())
        throw FullQueue();
    else{
        Node *newNode = new Node;
        newNode->info = item;
        newNode->next = NULL;
        if (rear == NULL)
            front = newNode;
        else
            rear->next = newNode;
        rear = newNode;
    }
}
template <class T>
void QueType<T>::Dequeue(T &item){
    if (IsEmpty())
        throw EmptyQueue();
    else{
        Node *temp = front;
        item = front->info;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete temp;
    }
}
template <class T>
void QueType<T>::MakeEmpty(){
    Node *temp;
    while (front != NULL){
        temp = front;
        front = front->next;
        delete temp;
    }
    rear = NULL;
}
template <class T>
QueType<T>::~QueType(){
    MakeEmpty();
}
