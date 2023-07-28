#include "SortedType.h"
#include <iostream>
using namespace std;

template<class T>
SortedType<T>::SortedType(){
    length = 0;
}
template <class T>
void SortedType<T>::MakeEmpty(){
    length = 0;
}
template <class T>
bool SortedType<T>::IsFull(){
    return(length==MAX_ITEMS);
}
template <class T>
int SortedType<T>::LengthIs(){
    return length;
}
template<class T>
void SortedType<T>::InsertItem(T item){
    int i;
    for(i=length-1;i>=0;i--){
        if(info[i]>item) info[i+1] = info[i];
        else break;
    }
    info[i+1] = item;
    length++;
}
template<class T>
void SortedType<T>::DeleteItem(T item){
    int location = 0;
    while(info[location]!=item) location++; // looking for the index of the item

    if(location==length){
        cout << "Item not found" << endl;
        return;
    }
    for(int i=location;i<length-1;i++){  // filling up the vacant spaces
        info[i] = info[i+1];
    }
    length--;
    cout << item << " is deleted" << endl;
}
template <class T>
void SortedType<T>::RetrieveItem(T& item, bool& found){
    // Binary Search Algorithm
    int mid, first = 0, last = length-1;
    found = false;

    while(first<=last){
        mid = (first + last) / 2;
        if(info[mid] == item){
            found = true;
            item = info[mid];
            return;
        }
        else if(item > info[mid]){
            first = mid+1;
        }
        else if(item < info[mid]){
            last = mid-1;
        }
    }
}
template <class T>
void SortedType<T>::ResetList(){
    currentPos = -1;
}
template<class T>
void SortedType<T>::GetNextItem(T& item){
    currentPos++;
    item = info[currentPos];
}
