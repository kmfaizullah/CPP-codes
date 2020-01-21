# include <iostream>

using namespace std;

int main(){
//--------------------Task 1 ----------------------
    int n;
    int val;
    cout << "Enter the size of an array : " <<endl;
    cin >> n;
    cout << "Entered value is : " << n <<endl;

    //declaring a dynamic array using pointer

    int *arr = new int [n];

    // assigning values to array

    int flag =1;
    for (int i=0; i <n; i++){
        cout << "Enter the " << flag << " values : " <<endl;
        cin >> val;
        arr[i]= val;
        flag= flag+1;
    }

    // Showing the inserted values

    cout<< "Entered values are : " <<endl;
    for (int i=0; i <n; i++){
        cout << arr[i] << " " <<endl;
    }

    delete[] arr;

    //-------------End of task 1 -------------

    // ------------Task 2---------------------

    int r,c;
    cout << "Enter row and column : " <<endl;
    cin >> r>>c;
    cout << "Entered row : "<<r <<", column : " <<c <<endl;

    // Dynamically memory Allocation
    char **arr_char = new char*[r];
    for (int i=0; i<r; i++){
        arr_char[i]= new char[c];
    }
    // Inserting values
    int flag_r=0;
    for (int i=0; i <r; i++){
        int flag_c=0;
        for (int k=0; k<c; k++){
            cout << "Enter the " << flag_r << flag_c << " values" <<endl;
            cin>>arr_char[i][k];
            flag_c=flag_c+1;
        }
        flag_r=flag_r+1;
    }

    // Showing the values

    for (int i=0; i <r; i++){
        for (int k=0; k<c; k++){
            cout << arr_char[i][k] << " ";
        }
        cout<< endl;
    }

    // Deallocating memory
    for (int i=0; i<r; i++){
        delete [] arr_char[i];
    }
    delete [] arr_char;
   // ------------End Task 2---------------------

   // ------------Task 3-------------------------

    int row;
    cout << "Enter row : " <<endl;
    cin >> row;
    cout << "Entered row : "<<row <<endl;

    // Dynamically memory Allocation
    char **arr_int = new char*[row];
    for (int i=0; i<row; i++){
        cout << "Enter the value of column " <<endl;
        int col;
        cin>>col;
        arr_int[i]= new char[col];

        for (int j=0; j <col; j++){
            cout << "enter the values :" <<endl;
            cin >> arr_int[i][j];
        }
    }

    for (int i=0; i<row; i++){
        for (int j=0; arr_int[i][j]!= NULL ; j++){
            cout<< arr_int[i][j] << " ";
        }
        cout<<endl;
    }



}
