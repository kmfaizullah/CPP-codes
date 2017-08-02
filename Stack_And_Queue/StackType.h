#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int MAX_ITEMS=5;
class fullstack{
};
class emptystack{
};

template<class itemType>

class StackType{
public:
    StackType();
    bool isFull();
    bool isEmpty();
    void makeEmpty();
    void push(itemType);
    void pop();
    itemType tops();
private:
    int top;
    itemType items[MAX_ITEMS];
};

#endif // STACKTYPE_H_INCLUDED
