#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

template <class T>
class UnsortedType{
public:
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(T);
    void DeleteItem(T);
    void RetrieveItem(T &, bool &);
    void ResetList();
    void GetNextItem(T &);

private:
    int length;
    T info[MAX_ITEMS];
    int currentPos;
};

#endif // UNSORTEDTYPE_H_INCLUDED
