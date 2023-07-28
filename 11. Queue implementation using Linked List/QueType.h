#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

class FullQueue
{};
class EmptyQueue
{};

template <class T>
class QueType{
    struct Node{
        T info;
        Node* next;
    };
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(T);
    void Dequeue(T&);
    bool IsEmpty();
    bool IsFull();
private:
    Node *front, *rear;
};

#endif // QUETYPE_H_INCLUDED
