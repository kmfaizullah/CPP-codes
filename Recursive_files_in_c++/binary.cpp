#include <iostream>

using namespace std;

int dec(int n){
    if(n==0){
        return 0;
    }

    else{
         return (n % 2 + 10 * dec(n/ 2));
    }
}

/*int main()
{
    int n;
    cout<<"enter the desire number: "<<endl;
    cin>>n;
   int z= dec(n);
   cout<<"Decimal number is: "<<z<<endl;
}*/

