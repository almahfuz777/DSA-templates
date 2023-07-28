#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

class FullStack
// Exception class thrown by Push when stack is full.
{
};
class EmptyStack
// Exception class thrown by Pop and Top when stack is empty.
{
};

template <class T>
class StackType{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(T);
    void Pop();
    T Top();

private:
    int top;
    T items[MAX_ITEMS];
};

#endif // STACKTYPE_H_INCLUDED
