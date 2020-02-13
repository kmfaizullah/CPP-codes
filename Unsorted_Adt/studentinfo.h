#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

class studentInfo{
public:
    studentInfo();
    studentInfo(string, int , double );
    string Name();
    int  Id();
    double Cgpa();
    void InsertItem(studentInfo item);
    void GetNextItem(studentInfo&);
    void print();
    bool operator ==(studentInfo);

private:
    string name;
    int id;
    double cgpa;
    int length;
    int currentPos;
    int info_id[5];
    double info_cgpa[5];
    string info_name[5];
};


#endif // STUDENTINFO_H_INCLUDED
