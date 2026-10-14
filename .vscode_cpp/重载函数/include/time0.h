#pragma once
#include<iostream>

class Time
{
    int h_;
    int min_;
    int num_;
    int* practice_;
    public:
    Time();
    Time(int h,int min,int num,int* practice);
    ~Time();
    Time operator+(const Time& t) const;
    Time(const Time&);
    Time& operator = (const Time&);
    //friend void operator<<(ostream& os,Time& t);
    friend std::ostream& operator<<(std::ostream& os,Time& t);
};