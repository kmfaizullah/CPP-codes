#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr(){
    data = NULL;
    size = 0;
}

dynArr::dynArr(int s){
    data = new int[s];
    size = s;
}

dynArr::~dynArr(){
    delete [] data;
}

int dynArr::getValue(int index){
    return data[index];
}

void dynArr::allocate(int s){
    delete [] data;
    data = new int[s];
    size = s;
}

void dynArr::setValue(int index, int value){
    data[index] = value;
}

void dynArr::allocate_2d(int row, int col){
    new_data = new int*[row];

    for (int i=0; i<row; i++){
        new_data[i]= new int[col];
    }
}

void dynArr::setValue_2d(int row, int col,int value){
    new_data[row][col]=value;
}

int dynArr::getValue_2d(int row_index, int col_index){
    return new_data[row_index][row_index];
}

void dynArr::deallocate_2d(int row){

    for (int i=0; i<row; i++){
        delete [] new_data[i];
    }
    delete [] new_data;

}

