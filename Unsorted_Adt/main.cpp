#include <iostream>
# include "unsortedtype.cpp"
# include "studentinfo.cpp"

using namespace std;

int main(){
    UnsortedType <int> obj;
    cout<<"inserting 4 values :  "<<endl;
    for (int i=0;i<4;i++){
        int val;
        cin>>val;
        obj.InsertItem(val);
    }

    cout<<"Printing the values :  "<<endl;
    for (int i=0;i<4;i++){
        int k;
        obj.GetNextItem(k);
        cout << k << " ";
    }
   cout <<endl;

   cout<< "The length is : " << obj.LengthIs()<<endl;

   cout<< "Enter a value to insert : "<<endl;
   int value_in;
   cin>>value_in;
   obj.InsertItem(value_in);

   cout<< "Enter a value to retrive : " <<endl;
   int ret;
   bool check;
   cin>>ret;

   obj.RetrieveItem(ret,check);
   if(check){
        cout<<"Item is found"<<endl;
     }
   else{
        cout<<"Item is not found"<<endl;;
     }

   cout<< "Enter another value to retrive : " <<endl;
   cin>>ret;
   obj.RetrieveItem(ret,check);
   if(check){
        cout<<"Item is found"<<endl;
     }
   else{
        cout<<"Item is not found"<<endl;;
     }

   cout<< "Enter another value to retrive : " <<endl;
   cin>>ret;
   obj.RetrieveItem(ret,check);
   if(check){
        cout<<"Item is found"<<endl;
     }
   else{
        cout<<"Item is not found"<<endl;;
     }

   cout<< "Enter another value to retrive : " <<endl;
   cin>>ret;
   obj.RetrieveItem(ret,check);
   if(check){
        cout<<"Item is found"<<endl;
     }
   else{
        cout<<"Item is not found"<<endl;
     }

   int len=obj.LengthIs();
   if(len==5){
    cout<<"List is full" <<endl;
   }
   else{
    cout<<"List is not full"<<endl;
   }

    cout<<"enter a value to delete" <<endl;
    int c;
    cin>>c;
    obj.DeleteItem(c);

    if(obj.LengthIs()==5){
        cout<<"the length is full" <<endl;
    }
    else{
        cout<<"Length is not full" <<endl;
    }

    cout<<"enter another value to delete" <<endl;
    cin>>c;
    obj.DeleteItem(c);

    cout<<"enter another value to delete" <<endl;
    cin>>c;
    obj.DeleteItem(c);

   obj.ResetList();
   cout<<"After deleting the values :  "<<endl;
    for (int i=0;i<obj.LengthIs();i++){
        int k;
        obj.GetNextItem(k);
        cout << k << " ";
    }

    cout<<endl;


    cout <<"Enter a length of object for student record :" <<endl;
    int len_new;
    cin>>len_new;

    studentInfo info [len_new];

    int flag=1;
    for (int i=0;i<len_new;i++){
         cout<< "Enter name of " << flag << " student" <<endl;
         string n;
         cin>>n;
         cout<< "Enter id of " << flag << " student" <<endl;
         int s_id;
         cin>>s_id;
         cout<< "Enter cgpa of " << flag << " student" <<endl;
         double c;
         cin>>c;
         studentInfo ob1 (n,s_id,c);
         info[i]=ob1;
         flag=flag+1;
    }

    cout<<"Entered values are : "<<endl;
    for (int i=0;i<len_new;i++){
        studentInfo info_obj= info[i];
        info_obj.print();
    }


    cout<< "Enter an id number to delete : " <<endl;
    int dlt_id;
    cin>>dlt_id;

       int location = 0;
       while (dlt_id != info[location].Id()){
          location++;
       }
          info[location] = info[len_new - 1];
          len_new--;

    cout<< "Enter an id number to retrive : " <<endl;
    int ret_id;
    cin>>ret_id;

    int count_val=0;
    for(int i=0;i<len_new;i++){
        if(info[i].Id()==ret_id){
            cout<< "record is found"<<endl;
            info[i].print();
        }
    }


    cout<<"the value are values are : "<<endl;
    for (int i=0;i<len_new;i++){
        studentInfo info_obj= info[i];
        info_obj.print();
    }




}
