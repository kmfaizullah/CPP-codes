#include <iostream>

using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10+sum(n/10);
    }
}

/*int main()
{
    int n;
    cout<<"enter the desire number: "<<endl;
    cin>>n;
   int z= sum(n);
   cout<<"of entered number is: "<<z<<endl;
}*/

