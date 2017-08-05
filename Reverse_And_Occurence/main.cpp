#include <iostream>
#include"stacktype.cpp"
using namespace std;
//2 4 5 5 5 6 7 8 9 9
int main()
{

   StackType<int> s,s1,s2,s3;
   int a,n;
   cout<<"How many numbers you want to input: "<<endl;
   cin>>n;
   cout<<"Enter the values: "<<endl;
   for(int i=0;i<n;i++){
        cin>>a;
        s.Push(a);
   }

    while(s.IsEmpty()!=true){
       int z= s.Top();
       if(s1.IsEmpty()){
        s1.Push(z);
       }
       else if(z==s1.Top()){
            s2.Push(z);
       }
       else{
        s1.Push(z);
       }

       s.Pop();
    }

    while(s1.IsEmpty()!=true){
        int z= s1.Top();
        s3.Push(z);
        s1.Pop();
    }
    cout<<"The values are: "<<endl;
     while(s3.IsEmpty()!=true){
        int z= s3.Top();
        cout<<z<<endl;
        s3.Pop();
    }


}
