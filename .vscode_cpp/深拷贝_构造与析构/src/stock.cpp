#include"stock.h"
#include<iostream>
#include<cstring>
Stock::Stock() :num_(0),age_(0),name_(nullptr) {}
Stock::Stock(int num,int age,const char* name)
{
    num_ = num;
    age_ = age;
    name_ = new char[strlen(name)+1];
    strcpy(name_,name);
}
Stock::~Stock()
{
    using std::cout;
    cout<<"name地址为"<<(void*)name_<<std::endl;
    delete[] name_;
}
Stock::Stock(const Stock& p)
{
    age_ = p.age_;
    num_ = p.num_;
    if(p.name_ != nullptr)
    {
    name_ = new char[strlen(p.name_)+1];
    strcpy(name_,p.name_);
    }
    else
    name_ = nullptr;
}
Stock& Stock:: operator = (const Stock& p)
{
    if(this == &p)
    return *this;
    delete [] name_;
    name_ = nullptr;
    age_ = p.age_;
    num_ = p.num_;
    if(p.name_ == nullptr)
    name_ = nullptr;
    else
    name_ = new char[strlen(p.name_)+1];
    strcpy(name_,p.name_);
    return *this;
}
void Stock::getName()
{
    using namespace std;
    if(name_ ==nullptr)
    {
        cout<<"无名"<<"\n";
        return;
    }
    for(int i = 0;i<strlen(name_);i++)
    {
        cout<<name_[i];
    }
    cout<<endl;

}

