#include"StackType.h"
#include<iostream>
using namespace std;

template <class itemType>
StackType<itemType>:: StackType(){
  top = -1;
}

template <class itemType>
bool StackType<itemType>:: isEmpty(){
 return (top == -1);
}

template <class itemType>
void StackType<itemType>:: makeEmpty(){
    top = -1;
}

template <class itemType>
bool StackType<itemType>:: isFull(){
return (top == MAX_ITEMS-1);
}

template <class itemType>
void StackType<itemType>:: push(itemType nitem){
if(isFull()){
    throw fullstack();
}
else {
    top++;
    items[top]=nitem;
    }
}

template <class itemType>
void StackType<itemType>:: pop(){
if(isEmpty()){
    throw emptystack();
}

    top--;

}

template <class itemType>
itemType StackType<itemType>:: tops(){
if(isEmpty()){
    throw emptystack();
}

    return items[top];

}





