#include <iostream>
#include"QueType.cpp"
using namespace std;

int main()
{
    QueType<int> q(5);
    int item,j;
    cout<<"enter the values: "<<endl;
    for(int i=0;i<5;i++){
            cin>>j;
        q.Enqueue(j);
    }
     if(q.IsEmpty())
        cout<< "empty" << endl;
    else
        cout << "not empty" << endl;

    if(q.IsFull())
        cout<< "Full" << endl;
    else
        cout << "not Full" << endl;
    q.Dequeue(item);

    q.MakeEmpty();

      if(q.IsEmpty())
        cout<< "empty" << endl;
    else
        cout << "not empty" << endl;

    if(q.IsFull())
        cout<< "Full" << endl;
    else
        cout << "not Full" << endl;

    return 0;
}
