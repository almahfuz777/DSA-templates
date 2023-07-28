// O(n)
#include <iostream>
using namespace std;

template<class T> 
int linearSearch(T arr[], int n, T item){
    for(int i=0;i<n;i++){
        if(arr[i]==item) return i+1;
    }
    return -1;
}

int main() {
    char arr[5]={'a','b','c','d','e'};
    int res = linearSearch<char>(arr, 5, 'c'); 
    cout << res << endl;
    return 0;
}