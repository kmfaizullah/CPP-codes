#include"Quetype.h"
#include<iostream>
using namespace std;
template<class ItemType>
QueType<ItemType>::QueType(int max){
    in;
    out;
}
template<class ItemType>
QueType<ItemType>::QueType(){
    in;
    out;
}
template<class ItemType>
QueType<ItemType>::~QueType(){

}
template<class ItemType>
void QueType<ItemType>::MakeEmpty(){
    in.makeEmpty();
}
template<class ItemType>
bool QueType<ItemType>::IsEmpty(){
    return(in.isEmpty());
}
template<class ItemType>
bool QueType<ItemType>::IsFull(){
    return(in.isFull());
}
template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem){
    if(IsFull())
        throw FullQueue();
    else{
        in.push(newItem);
    }
}
template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& Item){
    if(IsEmpty())
        throw EmptyQueue();
    else{
    int item;
    while(in.isEmpty()!=true)
    {
        item=in.tops();
        out.push(item);
        in.pop();
    }
    cout<<"The values are: "<<endl;
    while(out.isEmpty()!=true)
    {
        item=out.tops();
        in.push(item);
        cout<<item<<" " ;
        out.pop();
    }
    }
}
