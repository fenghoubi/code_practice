#pragma once
#include<valarray>
#include<string>
#include<iostream>
using std::string;
class Studentc
{
    typedef std::valarray<double> ArrayDb;
    string name;
    ArrayDb score;
    std::ostream& arrout(std::ostream& os);
    public:
    Studentc(const string& s,const ArrayDb& num)
    :name(s),score(num){}
    Studentc()
    :name("nobody"),score(0){}
    explicit operator string(){return name;}
    explicit operator ArrayDb(){return score;}
    Studentc(const char* s ,const ArrayDb& arr )
    :name(s),score(arr){}
    Studentc(const char* s,const double* arr,int n)
    :name(s),score(arr,n){}
    double sumScore();
    double operator[](int i)const;
    std::ostream& arrout(const Studentc& stu);
    friend std::istream& operator>>(std::ostream&  os,Studentc& stu);
    friend std::istream& operator>>(std::istream& is,Studentc& stu);
    friend std::istream& getline(std::istream& is, Studentc& stu);
    friend std::ostream& operator<<(std::ostream& os, Studentc& s);
    void setScore();
};


