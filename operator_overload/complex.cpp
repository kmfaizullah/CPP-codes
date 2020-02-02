#include "complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
    Real = 0;
    Imaginary = 0;
}
Complex::Complex(double r, double i)
{
    Real = r;
    Imaginary = i;
}
Complex Complex::operator+(Complex a)
{
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}

Complex Complex::operator*(Complex a)
{
    Complex d;
    d.Real = Real * a.Real;
    d.Imaginary = Imaginary * a.Imaginary;
    return d;
}

bool Complex::operator!=(Complex a)
{

    if(( Real == a.Real) && (Imaginary == a.Imaginary)){
        return false;
    }
    else{
        return true;
    }
}

void Complex::Print()
{
    cout << Real << endl;
    cout << Imaginary << endl;
}
