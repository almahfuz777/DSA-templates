#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

template <class T>
class UnsortedType{
    struct Node{
        T info;
        Node *next;
    };

public:
    UnsortedType();
    ~UnsortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(T &, bool &);
    void InsertItem(T);
    void DeleteItem(T);
    void ResetList();
    void GetNextItem(T &);

private:
    Node *head;
    int length;
    Node *currentPos;
};

#endif // UNSORTEDTYPE_H_INCLUDED
