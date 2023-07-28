#include "DynArr.cpp"
#include <iostream>

using namespace std;

int main(){
    DynArr<int> d1(5);
    for(int i=0;i<5;i++){
        int x; cin >> x;
        d1.setValue(i,x);
    }
    for(int i=0;i<5;i++){
        cout << d1.getValue(i) << " ";
    }
    return 0;
}
