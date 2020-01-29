#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{
    private:
        int *data;
        int size;
        int **new_data; //for third task
    public:

        dynArr();
        dynArr(int);
        ~dynArr();
        void setValue(int, int);
        int getValue(int);
        void allocate(int); //for second task

        //for third task
        void allocate_2d(int,int);
        void setValue_2d(int,int,int);
        int getValue_2d(int,int);
        void deallocate_2d(int);

};

#endif // DYNARR_H_INCLUDED
