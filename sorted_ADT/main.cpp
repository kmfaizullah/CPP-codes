#include <iostream>
#include "sortedtype.cpp"
# include "timeStamp.cpp"
using namespace std;

int main()
{
    SortedType <int> obj1;
    int length = obj1.LengthIs();
    cout<< "Length is : " << length <<endl;

    cout<< "Insert five items : " <<endl;
    for (int i=0;i<5;i++){
        int val;
        cin>> val;
        obj1.InsertItem(val);
    }

    int length1 = obj1.LengthIs();
    cout<< "Length is : " << length1 <<endl;


    cout<< "Inserted values are : " <<endl;
    int k;
    for ( int i=0;i <length1;i++){
        obj1.GetNextItem(k);
        cout << k << " " ;
    }

   obj1.ResetList();

    bool check;
    int p;
    cout<<endl;
    cout<<"enter the number to retrive: "<<endl;
    cin>>p;
    obj1.RetrieveItem(p,check);
    if(check){
        cout<<"found"<<endl<<endl;
    }
    else {
        cout<<"not found"<<endl<<endl;
    }

    cout<<"enter another number to retrive: "<<endl;
    cin>>p;
    obj1.RetrieveItem(p,check);
    if(check){
        cout<<"found"<<endl<<endl;
    }
    else {
        cout<<"not found"<<endl<<endl;
    }

    if(obj1.IsFull()){
        cout<<" List is full"<<endl;
        }
    else {
            cout<<" List is not full"<<endl;
        }

    int o;
    cout<<"enter the delete item: "<<endl;
    cin>>o;
    obj1.DeleteItem(o);

    cout<<"after deleting the values are: "<<endl;
    for(int i=0;i<obj1.LengthIs();i++){
        obj1.GetNextItem(k);
        cout<<k<<endl;
    }

    cout<<"after deleting list is: "<<obj1.LengthIs()<<endl<<endl;
    if(obj1.IsFull()){
        cout<<" List is full"<<endl;
    }
    else {
        cout<<" List is not full"<<endl;
    }

    timeStamp tObj;

    timeStamp arr [5];

    for (int i=0; i<5;i++){
        cout << "enter time of " << i+1 << " second : " <<endl;
        int s;
        cin>>s;
        cout << "enter time of " << i+1 << " minutes : " <<endl;
        int m;
        cin>>m;
        cout << "enter time of " << i+1 << " Hours : " <<endl;
        int h;
        cin>>h;
        timeStamp tObj1(s,m,h);

        arr[i]= tObj1;
    }

    cout<< "Entered values are : " <<endl;
    for (int i=0;i<5;i++){
        arr[i].Print();
    }

}
