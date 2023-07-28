#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

template<class T>
class SortedType{
private:
    int length;
    T info[MAX_ITEMS];
    int currentPos;
public:
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(T);
    void DeleteItem(T);
    void RetrieveItem(T&, bool&);
    void ResetList();
    void GetNextItem(T&);
};
#endif // SORTEDTYPE_H_INCLUDED
