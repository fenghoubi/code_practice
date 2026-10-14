#include<iostream>
using namespace std;
class Person
{
    int age;
    public:
    Person(const int& a)
    {
        age = a;
        cout<<"调用参数构造函数\n";
    }
    Person()
    {
    cout<<"调用默认构造函数"<<endl;
    }
    ~Person()
    {
        cout<<"调用析构函数\n";
    }
    Person(const Person& p)
    {
        age = p.age;
        cout<<"调用拷贝函数\n";
    }
};
void test()
{
    Person p1;
    //Person p2(10);
    //Person p3(p)
}
int main()
{
    Person p0;
    test();
    int a = 18;
    Person(a);
    //p0.Person(a);
    return 0;
}
