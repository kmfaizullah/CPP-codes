#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
#include"StackType.cpp"

class FullQueue
{};
class EmptyQueue
{};
template<class ItemType>
class QueType
{
    public:
        QueType();
        QueType(int max);
        ~QueType();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        void Enqueue(ItemType);
        void Dequeue(ItemType&);
    private:
        StackType<ItemType> in;
        StackType<ItemType> out;

};

#endif // QUETYPE_H_INCLUDED
