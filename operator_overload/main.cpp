#include <iostream>
#include "complex.cpp"
using namespace std;

int main()
{
    Complex cm1 ( 5,10);
    Complex cm2 ( 5,10);
    //cm1.Print();

    Complex k= cm1 * cm2;
    bool z = cm1 != cm2;
    cout << (cm1 != cm2) <<endl;
}
