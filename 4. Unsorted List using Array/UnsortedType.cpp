#include "UnsortedType.h"

template <class T>
UnsortedType<T>::UnsortedType(){
    length = 0;
    currentPos = -1;
}
template <class T>
void UnsortedType<T>::MakeEmpty(){
    length = 0;
}
template <class T>
bool UnsortedType<T>::IsFull(){
    return (length == MAX_ITEMS);
}
template <class T>
int UnsortedType<T>::LengthIs(){
    return length;
}
template <class T>
void UnsortedType<T>::ResetList(){
    currentPos = -1;
}
template <class T>
void UnsortedType<T>::GetNextItem(T &item){
    currentPos++;
    item = info[currentPos];
}
template<class T> 
void UnsortedType<T>::RetrieveItem(T &item, bool &found){
    found = false;
    for(int i=0;i<length;i++){
        if(item==info[i]){
            found = true;
            break;
        }
    }
}
template <class T>
void UnsortedType<T>::InsertItem(T item){
    info[length] = item;
    length++;
}
template<class T>
void UnsortedType<T>::DeleteItem(T item){
    int location = 0;
    while(info[location]!=item){
        location++;
    }
    info[location] = info[length-1]; // filling with the last element
    length--;
}