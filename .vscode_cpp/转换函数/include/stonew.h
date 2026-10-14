#pragma once
#include<iostream>
class Stonew
{
    const static int stone = 14;
    double pounds_;
    int beishu_;
    double yvshu_;
    public:
        Stonew();
        Stonew(int,double);
        explicit operator int()const;
        explicit operator double()const;
        friend Stonew operator +(const Stonew& t1,const Stonew&t2 );
        friend std::ostream& operator<<(std::ostream&,const Stonew&);
        friend int practice(const Stonew& t1,const Stonew& t2);
        friend double practice2(const Stonew& t1,const Stonew& t2);
        Stonew(double pounds);
        Stonew(int beishu);
};