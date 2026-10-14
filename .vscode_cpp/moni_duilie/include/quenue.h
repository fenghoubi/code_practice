#pragma once
typedef int Item;

class Quenue
{
    struct Node
    {
        Item item;
        struct Node* next;
    };
    int items;//长度
    Node* front;//第一个
    Node* rear;//下一个
    const static int qsize;
    public:
    bool add(const Item&);
    bool disfront(Item&);
    bool dis( Item&,const int&);
    bool isfull();
    bool isempty();
    int getLength();
    bool getItem(Item&,int)const;
    Quenue();
    ~Quenue();
    Quenue(const Quenue&);
    Quenue& operator = (const Quenue&);
};
