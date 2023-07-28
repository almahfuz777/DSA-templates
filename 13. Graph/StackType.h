#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

#include <iostream>
using namespace std;

class FullStack{};
class EmptyStack{};

template <class T>
class StackType{
    struct Node{
        T info;
        Node* next;
    };
public:
    StackType();
    ~StackType();
    void Push(T);
    void Pop();
    T Top();
    bool IsEmpty();
    bool IsFull();

private:
    Node* topPtr;
};

#endif // STACKTYPE_H_INCLUDED
