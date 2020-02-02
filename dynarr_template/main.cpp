#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
  dynArr <double> obj1;
  dynArr <double> obj2(5);

  int val=1;
  int n;

  // inserting values using set value
  for (int i=0;i<5;i++){
    cout<< "enter the " << val << " value : " <<endl;
    cin>>n;
    obj2.setValue(i,n);
    val=val+1;
  }

  //printing inserted values using get method
  cout<<"entered values are : " <<endl;
  for (int i=0;i<5;i++){
     cout<< obj2.getValue(i) << " ";
  }

  obj2.allocate(6);
  obj2.setValue(5,12);

  cout<<endl;
 cout<<"Newly entered values are : " <<endl;
  for (int i=0;i<6;i++){
     cout<< obj2.getValue(i) << " ";
  }
  // calling deconstructor to delete the memory space
  obj2.~dynArr();
  cout <<endl;
}
