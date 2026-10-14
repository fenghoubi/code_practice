#pragma once
class Stock
{
    int num_;
    int age_;
    char* name_ ;
    public:
    Stock();
    Stock(int num,int age,const char* name);
    ~Stock();
    Stock(const Stock& p);
    Stock& operator = (const Stock& p);
    void getName();
};