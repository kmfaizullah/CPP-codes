#include <iostream>
#include "timeStamp.h"

using namespace std;

timeStamp::timeStamp(){
    Hour = 0;
    Minute = 0;
    Second = 0;
}

timeStamp::timeStamp(int s, int m, int h){
    Hour = h;
    Minute = m;
    Second = s;
}

int timeStamp::getHour(){
    return Hour;
}

int timeStamp::getMinute(){
    return Minute;
}

int timeStamp::getSecond(){
    return Second;
}

void timeStamp::Print(){
    cout << Second << ":"<<" " << Minute << ":"<<" " << Hour << endl;
}

bool timeStamp::operator!=(timeStamp t){
    if(t.Hour == Hour && t.Minute == Minute && t.Second == Second)
        return false;
    else
        return true;
}

bool timeStamp::operator<(timeStamp t){
    int x = Hour*10000 + Minute*1000; + Second;
    int p = t.Hour*10000 + t.Minute*1000; + t.Second;

    if(p < x)
        return true;
    else
        return false;
}

bool timeStamp::operator>(timeStamp t){
    int x = Hour*10000 + Minute*1000; + Second;
    int p = t.Hour*10000 + t.Minute*1000; + t.Second;

    if(p > x)
        return true;
    else
        return false;
}


