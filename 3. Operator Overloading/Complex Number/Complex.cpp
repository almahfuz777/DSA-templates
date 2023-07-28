#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(){
    Real = 0;
    Imaginary = 0;
}
Complex::Complex(double r, double i){
    Real = r;
    Imaginary = i;
}
Complex Complex::operator+(Complex a){
    Complex sum;
    sum.Real = Real + a.Real;
    sum.Imaginary = Imaginary + a.Imaginary;
    return sum;
}
void Complex::Print(){
    cout << Real << " + " << Imaginary << "i" << endl;
}
