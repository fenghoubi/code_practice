#include<iostream>
#include"stock.h"
int main()
{
    using std::cout;
    int age = 18;
    int num = 5;
    char name[] = "name";
    Stock p1(num,age,name);
    p1.getName();
    int age2 = 10;
    int num2 = 20;
    char name2[] = "little_boy";
    Stock p2 (num2,age2,name2);
    Stock p3(p1);
    p3.getName();
    p1 = p2;
    cout<<"修改后p1名字为";
    p1.getName();
    return 0;
}
