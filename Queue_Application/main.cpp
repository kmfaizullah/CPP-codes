#include <iostream>
#include "quetype.cpp"

using namespace std;

int main()
{

    QueType <int> q(500);
    int i,j,k;
    cout<<"How much you want to insert: "<<endl;
    cin>>j;
    cout<<"enter the values: "<<endl;
    for(i=0; i<j; i++)
    {
        cin>>k;
        q.Enqueue(k);
    }

    if(q.IsEmpty())
        cout<< "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    if(q.IsFull())
        cout<< " Queue is Full" << endl;
    else
        cout << "Queue not Full" << endl;

    QueType <int> q1;
    int item;
    while(q.IsEmpty()!=true)
    {
        q.Dequeue(item);
        cout << item << " ";
        q1.Enqueue(item);
    }
    cout << endl;
    QueType<string> binary;

    string temp;
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;

    binary.Enqueue("1");
    for(int i=0; i<num; i++)
    {
        binary.Dequeue(temp);
        cout<<temp<<endl;
        binary.Enqueue(temp+"0");
        binary.Enqueue(temp+"1");
    }


}
