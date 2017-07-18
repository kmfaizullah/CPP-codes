#include <iostream>

using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

/*int main()
{
    int n;
    cout<<"enter the desire number: "<<endl;
    cin>>n;
   int z= fact(n);
   cout<<"factorial of entered number is: "<<z<<endl;
}*/
