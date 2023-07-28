#include "quetype.h"

template <class T>
QueType<T>::QueType(){
    maxQue = 10;
    front = -1;
    rear = -1;
    items = new T[maxQue];
}
template <class T>
QueType<T>::QueType(int max){
    maxQue = max;
    front = -1;
    rear = -1;
    items = new T[maxQue];
}
template <class T>
QueType<T>::~QueType(){
    delete[] items;
}
template <class T>
bool QueType<T>::IsEmpty(){
    return (front == -1 && rear == -1);
}
template <class T>
bool QueType<T>::IsFull(){
    return ((rear + 1) % maxQue == front);
}
template <class T>
void QueType<T>::MakeEmpty(){
    front = -1;
    rear = -1;
}
template <class T>
void QueType<T>::Enqueue(T newItem){
    if (IsFull())
        throw FullQueue();
    else{
        rear = (rear + 1) % maxQue;
        items[rear] = newItem;

        if(front == -1) front = rear;
    }
}
template <class T>
void QueType<T>::Dequeue(T &item){
    if (IsEmpty())
        throw EmptyQueue();
    else if(front == rear){
        item  = items[front];
        front = -1;
        rear = -1;
    }
    else{
        item = items[front];
        front = (front + 1) % maxQue;
    }
}
