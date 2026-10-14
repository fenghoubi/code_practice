#include<iostream>
#include"stonew.h"
using namespace std;
int main()
{
    Stonew s1;
    cout<<s1<<endl;
    Stonew s2(1,15.3);
    cout<<s2<<endl;
    Stonew s3(3,45.6);
    cout<<"s2+s3 is "<<s2+s3<<endl;
    cout<<practice(s2,5)<<endl;
    cout<<practice(s2,Stonew(6.4));
    cout<<int(s2)<<"四舍五入\n";
    cout<<double(s2)<<"精确小数\n";
    return 0;
}