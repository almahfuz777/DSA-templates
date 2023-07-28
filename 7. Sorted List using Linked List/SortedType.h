#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

template <class T>
class SortedType{
    struct Node{
        T info;
        Node *next;
    };

public:
    SortedType();
    ~SortedType();
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

#endif // SORTEDTYPE_H_INCLUDED
