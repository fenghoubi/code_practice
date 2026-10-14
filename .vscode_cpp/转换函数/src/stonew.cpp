#include<iostream>
#include"stonew.h"
Stonew::Stonew()
{
    beishu_ = 0;
    yvshu_ = 0;
    pounds_ = beishu_*stone + yvshu_;
    beishu_ +=yvshu_/stone;
    while(yvshu_>=stone)
    yvshu_ -= stone;
}
Stonew::Stonew(int beishu,double yvshu)
{
    beishu_ = beishu;
    yvshu_ = yvshu;
    pounds_ = beishu*stone + yvshu;
    beishu_ += yvshu_/stone;
    while(yvshu_>=stone)
    {
        yvshu_-=stone;
    }
}
Stonew::operator int()const
{
    return(pounds_ + 0.5);
}
Stonew::operator double()const
{
    return pounds_;
}
Stonew operator +(const Stonew& t1,const Stonew& t2)
{
    
    double tpounds_ = t1.pounds_ + t2.pounds_;
    double tyvshu_ = t1.yvshu_+t2.yvshu_;
    int tbeishu = t1.beishu_ + t2.beishu_ + (tyvshu_/t1.stone);
    while(tyvshu_ >=t1.stone)
    tyvshu_ -=t1.stone;
    return Stonew(tbeishu,tyvshu_);
}
std::ostream& operator<<(std::ostream& os,const Stonew&t1 )
{
    std::cout<<"pounds is "<<t1.pounds_<<" ,beishu is"<<t1.beishu_
    <<" ,yvshu is"<<t1.yvshu_<<std::endl;
    return os;
}
int practice(const Stonew& t1,const Stonew& t2)
{
    return (t1.beishu_+t2.beishu_);
}
double practice2(const Stonew& t1,const Stonew& t2)
{
    return(t1.pounds_+t2.pounds_);
}
Stonew::Stonew(double pounds)
{
    beishu_ = pounds/stone;
    while(pounds>=stone)
    pounds -=stone;
    yvshu_ = pounds;
}
Stonew::Stonew(int beishu)
{
    beishu_ = beishu;
}
        