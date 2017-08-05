#ifndef PQTYPE_H_INCLUDED
#define PQTYPE_H_INCLUDED
class FullPQ {};
class EmptyPQ {};
#include "heaptype.cpp"
template<class ItemType>
class PQType
{
public:
    PQType(int);
    ~PQType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType newItem);
    void Dequeue(ItemType& item);
private:
    int length;
    HeapType<ItemType> items;
    int maxItems;
};
#endif // PQTYPE_H_INCLUDED
