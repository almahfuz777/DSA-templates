#include "SortedType.h"
#include <iostream>

template <class T>
SortedType<T>::SortedType(){
    length = 0;
    head = nullptr;
    currentPos = nullptr;
}
template <class T>
int SortedType<T>::LengthIs(){
    return length;
}
template <class T>
bool SortedType<T>::IsFull(){
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
void SortedType<T>::InsertItem(T item){
    Node *newNode = new Node;
    newNode->info = item;
    newNode->next = nullptr;

    if(head==nullptr || item<head->info){
        newNode->next = head;
        head = newNode;
    }
    else{
        Node *prev = head;
        Node *current = head->next;

        while (current!=nullptr && item>current->info){
            prev = current;
            current = current->next;
        }
        newNode->next = current;
        prev->next = newNode;
    }
    length++;
}
template <class T>
void SortedType<T>::DeleteItem(T item){
    Node *location = head;
    Node *tempLocation;
    if (item == head->info){
        tempLocation = head;
        head = head->next;
    }
    else{
        while (!(item == (location->next)->info))
            location = location->next;
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}
template <class T>
void SortedType<T>::RetrieveItem(T &item, bool &found){
    Node *location = head;
    found = false;
    while (location!=nullptr && !found){
        if(item == location->info)
            found = true;
        else if(item < location->info){
            break;
        }
        else{
            location = location->next;
        }
    }
}
template <class T>
void SortedType<T>::MakeEmpty(){
    Node *tempPtr;
    while(head != nullptr){
        tempPtr = head;
        head = head->next;
        delete tempPtr;
    }
    length = 0;
}
template <class T>
SortedType<T>::~SortedType(){
    MakeEmpty();
}
template <class T>
void SortedType<T>::ResetList(){
    currentPos = nullptr;
}
template <class T>
void SortedType<T>::GetNextItem(T &item){
    if (currentPos == nullptr)
        currentPos = head;
    else
        currentPos = currentPos->next;
    item = currentPos->info;
}
