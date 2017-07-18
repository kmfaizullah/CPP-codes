#include <iostream>

using namespace std;

int min(int arr[], int size){
    if(size==1){
        return arr[0];
    }
    else{
        return (arr[size]<min(arr,size-1))?arr[size]:min(arr, size-1);
    }
}

int main()
{
    int n,b;
    cout<<"enter the size of an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the values of an array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>b;
        arr[i]=b;
    }
    int z= min(arr,n);
    cout<<"minimum number is: "<<z<<endl;

}

