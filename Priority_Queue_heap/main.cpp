#include <iostream>
#include"pqtype.cpp"
using namespace std;
//4 9 2 7 3 11 17 0 5 4
int main()
{
    PQType<int> p(500),q(500);
    int n,k;
    cout<<"How much you want to insert: "<<endl;
    cin>>n;
    cout<<"Input the values: "<<endl;
    for(int i=0;i<n;i++){
            cin>>k;
        p.Enqueue(k);
    }
    //----------------------
    int l,m;
    cout<<"Enter the number of Bags and Minutes: "<<endl;
    cin>>l>>m;
    int y;
    cout<<"input the values of Bags: "<<endl;
    for(int i=0;i<l;i++){
        cin>>y;
        q.Enqueue(y);
    }
    int xx;
    cout<<"Maximum number candy is: "<<endl;
    int sum=0;
     for(int i=0;i<m;i++){
        q.Dequeue(xx);
        q.Enqueue(xx/2);
        sum=sum+xx;

    }
    cout<<sum<<endl;
}
