#include<iostream>
#include<string>
#include"studentc.h"
using std::cout;
using std::istream;
using std::ostream;
using std::getline;
double Studentc::sumScore()
{

    if(!score.size())
    {
        cout<<"内部无元素，错误\n";
        return -1;
    }
    return score.size()/score.size();
}
ostream& Studentc::arrout(ostream& os)
{
    for(int i = 1;i<name.size();i++)
    {
        os<<score[i-1]<<" ";
        if(i % 5 == 0)
        os<<std::endl;
    }
}
double Studentc::operator[](int i) const
{
    return score[i];
}
std::istream& operator>>(std::istream& is,Studentc& stu)
{
    is>>stu.name;
    return is;
}
std::istream& getline(std::istream&  is,Studentc& stu)
{
    getline(is,stu.name);
    return is;
    
}
std::ostream& operator<<(std::ostream& os,Studentc& s)
{
    os<<"Student name is "<<s.name<<std::endl;
    for(int i = 1;i<= s.score.size();i++)
    {
        os<<"score is "<<std::endl;
        s.arrout(os);
        return os;
    }
    return os;
}
void Studentc::setScore()
{
    cout<<"please scanf the score you want to set\n";
    cout<<"cout num to choose,or cout all to reset all score\n";
    cout<<"cout 'q' to quit\n";
    string a;
    std::cin>>a;
    for(int i = 0;i<a.size();i++)
    {
        if(a[i] == 'q')
        return;
    }
    if(a == "all")
    {
        cout<<"number of score\n";
        int n = 0;
        std::cin>>n;
        score = ArrayDb(n);
        for(int i = 0;i<n;i++)
        std::cin>>score[i];
        return;
    }
    
    if((a[0]<'a' || a[0]>'z') || (a[0]<'A'||a[0]>'Z'))
    cout<<"输入非法\n";
    return;
    

}