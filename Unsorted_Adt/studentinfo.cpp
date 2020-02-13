#include"studentinfo.h"

studentInfo::studentInfo(){

    length=0;
    currentPos=-1;
    cgpa=0;
    id=0;
}
studentInfo::studentInfo(string name_val, int id_val, double cgpa_val){
    name= name_val;
    id=id_val;
    cgpa=cgpa_val;
}
string studentInfo::Name(){
    return name;
}
int studentInfo::Id(){
    return id;
}
double studentInfo::Cgpa(){
    return cgpa;
}

void studentInfo::print(){
    cout << id <<", " << name << ", " << cgpa << endl;
}


