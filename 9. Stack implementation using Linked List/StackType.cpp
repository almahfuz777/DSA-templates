#include "StackType.h"

template <class T>
StackType<T>::StackType(){
    topPtr = nullptr;
}
template<class T>
StackType<T>::~StackType(){
    Node* current = topPtr;
    while(current!=nullptr){
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}
template <class T>
bool StackType<T>::IsEmpty(){
    return (topPtr==nullptr);
}
template <class T>
bool StackType<T>::IsFull(){
    Node* location;
    try{
        location = new Node;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}
template <class T>
void StackType<T>::Push(T item){
    if(IsFull())
        throw FullStack();
    else{
        Node* newNode = new Node;
        newNode->info = item;
        newNode->next = topPtr;
        topPtr = newNode;
    }
}
template <class T>
void StackType<T>::Pop(){
    if(IsEmpty())
        throw EmptyStack();
    else{
        Node* temp = topPtr;
        topPtr = topPtr->next;
        delete temp;
    }
}
template <class T>
T StackType<T>::Top(){
    if(IsEmpty())
        throw EmptyStack();
    else
        return topPtr->info;
}