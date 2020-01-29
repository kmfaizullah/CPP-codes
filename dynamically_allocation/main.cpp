#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
  //-------------------first task------------------------
  // creating two objects
  dynArr obj1;
  dynArr obj2(5);

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

  // calling deconstructor to delete the memory space
  obj2.~dynArr();
  cout <<endl;

  //-------------------first task ends here-----------------

  //-------------------second task--------------------------

  val=1;
  //allocating values using new method

  int s;
  cout<<" entered the size of array" <<endl;
  cin>>s;
  obj2.allocate(s);

  //inserting values values on newly allocated memory
  for (int i=0;i<s;i++){
    cout<< "enter the " << val << " value : " <<endl;
    cin>>n;
    obj2.setValue(i,n);
    val=val+1;
  }

  // printing the values
  cout<<"entered values are : " <<endl;
  for (int i=0;i<s;i++){
     cout<< obj2.getValue(i) << " ";
  }

  obj2.~dynArr();
  cout<<endl;
  //-------------------second task end here --------------------------

  //-------------------Third Task --------------------------
  int row, col;
  cout<< "enter the row and column size " <<endl;
  cin>>row>>col;

  obj1.allocate_2d(row,col);

      // Inserting values
  int flag_r=0;
  for (int i=0; i <row; i++){
    int flag_c=0;
    for (int k=0; k<col; k++){
        int val;
        cout << "Enter the " << flag_r << flag_c << " values" <<endl;
        cin>> val;
        obj1.setValue_2d(i,k,val);
        flag_c=flag_c+1;
    }
    flag_r=flag_r+1;
  }


  for (int i=0; i <row; i++){
     for (int k=0; k<col; k++){
        cout << obj1.getValue_2d(i,k) << " ";
     }
     cout<< endl;
  }

  obj1.deallocate_2d(row);

}
