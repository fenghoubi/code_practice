#include"time0.h"
#include<iostream>
Time::Time():h_(0),min_(0),num_(0),practice_(nullptr){}
Time::Time(int h,int min,int num,int* practice)
{
    h_ = h+(min/60);
    min_ = (min%60);
    num_ = num;
    practice_ = new int[num];
    for(int i = 0;i<num;i++)
    practice_[i] = practice[i];
}
Time Time::operator+(const Time& t) const
{
    Time temp;
    temp.min_ = t.min_+min_;
    temp.h_ = t.h_ + h_ +temp.min_%60;
    temp.min_ %=60;
    return temp;
}
Time::Time(const Time& t)
{
    h_ = t.h_;
    min_ = t.min_;
    num_ = t.num_;
    if(t.practice_ ==nullptr && num_ <=0)
    return;
    practice_ = new int[num_];
    for(int i = 0;i<num_;i++)
    practice_[i] = t.practice_[i];
}
Time& Time::operator = (const Time& t)
    {
        h_ = t.h_;
        min_ = t.min_;
        num_ = t.num_;
        if(practice_ != nullptr)
        delete[] practice_;
        if(t.practice_ == nullptr && num_<=0)
        return *this;
        practice_ = new int[num_];
        for(int i = 0;i<num_;i++)
        practice_[i] = t.practice_[i];
        return *this;
    }
    //friend void operator<<(ostream& os,Time& t);
    std::ostream& operator<<(std::ostream& os,Time& t)
    {
        os<<"time is "<<t.h_<<" h, "<<t.min_<<" min."<<std::endl;
        return os;
    }
    Time::~Time()
    {
        if(practice_ != nullptr)
        delete[] practice_;
    }
