#include "DynArr.h"

template<class T>
DynArr<T>::DynArr(){
    data = nullptr;
    size = 0;
}
template<class T>
DynArr<T>::DynArr(int s){
    data = new T[s];
    size = s;
}
template<class T>
DynArr<T>::~DynArr(){
    delete [] data;
}
template<class T>
void DynArr<T>::allocate(int s){
    if(data!=nullptr) delete [] data;
    data = new T[s];
    size = s;
}
template<class T>
void DynArr<T>::setValue(int index, T value){
    data[index] = value;
}
template<class T>
T DynArr<T>::getValue(int index){
    return data[index];
}