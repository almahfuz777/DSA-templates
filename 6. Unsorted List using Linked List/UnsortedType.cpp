#include "UnsortedType.h"
#include <iostream>

template <class T>
UnsortedType<T>::UnsortedType(){
    length = 0;
    head = nullptr;
    currentPos = nullptr;
}
template <class T>
int UnsortedType<T>::LengthIs(){
    return length;
}
template <class T>
bool UnsortedType<T>::IsFull(){
    Node *location;
    try{
        location = new Node;
        delete location;
        return false;
    }
    catch (std::bad_alloc &exception){
        return true;
    }
}
template <class T>
void UnsortedType<T>::InsertItem(T item){
    Node *newNode = new Node;
    newNode->info = item;
    newNode->next = head;   // insert at the beginning
    head = newNode;
    length++;
}
template <class T>
void UnsortedType<T>::DeleteItem(T item){
    Node *location = head;
    Node *tempLocation = new Node;
    if (item == head->info){
        tempLocation = location;
        head = head->next;
    }
    else{
        //traverse
        while (location->next!=nullptr && !(item == (location->next)->info))
            location = location->next;

        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}
template <class T>
void UnsortedType<T>::RetrieveItem(T& item, bool& found){
    Node *location = head;
    found = false;
    while (location!=nullptr){
        if (item == location->info){
            found = true;
            return;
        }
        else{
            location = location->next;
        }
    }
}
template <class T>
void UnsortedType<T>::MakeEmpty(){
    Node *tempPtr;
    while (head != nullptr){
        tempPtr = head;
        head = head->next;
        delete tempPtr;
    }
    length = 0;
}
template <class T>
UnsortedType<T>::~UnsortedType(){
    MakeEmpty();
}
template <class T>
void UnsortedType<T>::ResetList(){
    currentPos = nullptr;
}
template <class T>
void UnsortedType<T>::GetNextItem(T & item){
    if (currentPos == nullptr)
        currentPos = head;
    else
        currentPos = currentPos->next;
    item = currentPos->info;
}
