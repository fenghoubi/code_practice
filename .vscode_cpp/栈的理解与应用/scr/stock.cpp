#include<iostream>
#include"stack.h"
using namespace std;
bool Stack::isfull() const
    {
        return (top == MAX);
    }
    bool Stack::isempty() const
    {
        return (top == 0);
    }
    bool Stack::push(const Item& num)
    {
        if(top == MAX)
        {
            cout<<"stack is full,false"<<endl;
            return false;
        }
        items[top] = num;
        cout<<"your item is in num "<<top<<endl;
        cout<<"it still "<<MAX-top<<" place\n";
        top++;
        return true;
    }
    bool Stack::pop()
    {
        if(top == 0)
        {
            cout<<"stack is empty,false"<<endl;
            return false;
        }
        cout<<"item"<<items[top]<<"is return"<<endl;
        items[top] = 0;
        top--;
        cout<<"it still "<<MAX-top<<" place"<<endl;
        return true;
    }
    Item Stack::getitems(const Item& num)
    {
        cout<<"编号为"<<num<<"的物品为"<<items[num]<<"\n";
        return items[num];
    }
