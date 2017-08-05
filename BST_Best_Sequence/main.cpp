#include <iostream>
#include"Binarysearchtree.cpp"
using namespace std;
//11  9 4  2  7  3  17  0  5  1
void BinarySearch(int arr[], int first,
                  int last)
{
    if(first<=last)
    {
        int midpoint=(last+first)/2;
        cout<<arr[midpoint]<<" ";
        BinarySearch(arr,first,midpoint-1);
        BinarySearch(arr, midpoint+1,last);
    }

}
int main()
{
    TreeType <int> t;
    int a,b,z;
    bool finish;
    cout<<"How much nodes you want to input: "<<endl;
    cin>>a;
    cout<<"enter the Nodes:" <<endl;
    for(int i=0;i<a;i++){
        cin>>b;
        t.InsertItem(b);
    }

    cout<<"The length of the tree is: "<<t.LengthIs()<<endl;

    t.ResetTree(IN_ORDER);
    cout<<"The items IN_ORDER is: "<<endl;
    int x;
    for(int i=0;i<a;i++){

        t.GetNextItem(x, IN_ORDER, finish);
        cout<<x<<" ";

    }
    cout<<endl;
     t.ResetTree(PRE_ORDER);
     cout<<"The items in PRE_ORDER is: "<<endl;
    for(int i=0;i<a;i++){

        t.GetNextItem(x, PRE_ORDER, finish);
        cout<<x<<" ";

    }
    cout<<endl;
     t.ResetTree(POST_ORDER);
     cout<<"The items in POST_ORDER is: "<<endl;
    for(int i=0;i<a;i++){

        t.GetNextItem(x, POST_ORDER, finish);
        cout<<x<<" ";
    }
    cout<<endl;

    //--------------------------------------------------------
    TreeType <int> bt;
    int bb;
    int arr[10];
    cout<<"enter the values: "<<endl;
    for(int i=0;i<10;i++){
        cin>>bb;
       bt.InsertItem(bb);
    }
    bt.ResetTree(IN_ORDER);

    cout<<"The items in order is: "<<endl;
    int xx;
    bool finished;
    for(int i=0;i<10;i++){

        bt.GetNextItem(xx, IN_ORDER, finished);
        cout<<xx<<" ";
        arr[i]=xx;

    }
    cout<<endl<<endl;
    cout<<"Best order sequence is: "<<endl;
    BinarySearch(arr,0,9);
}
