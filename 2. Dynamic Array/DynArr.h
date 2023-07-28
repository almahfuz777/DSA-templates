#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T>
class DynArr{
private:
    T* data;
    int size;
public:
    DynArr();
    DynArr(int);
    ~DynArr();
    void allocate(int);
    void setValue(int,T);
    T getValue(int);
};

#endif // DYNARR_H_INCLUDED
