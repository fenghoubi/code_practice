#include"quenue.h"
#include<iostream>
using std::cout;
bool Quenue::add(const Item& item)
{
    if(isfull())
    {
        cout<<"队列已满，无法进入\n";
        return false;
    }
    Node* temp = new Node;
    temp->item = item;
    temp->next = nullptr;
    if(isempty())
    front = temp;
    else
    rear->next = temp;
    rear = temp;
    items++;
    return true;
}
bool Quenue::disfront(Item & receiveitem)
{
    if(isempty())
    {
        cout<<"队列已空，错误\n";
        return false;
    }
    receiveitem = front->item;
    Node*temp = front;
    front = front->next;
    delete temp;
    items--;//只要不为空，就可以出队，执行递减
    if(items == 0)
    {
        rear = nullptr;
    }
    return true;
}
bool Quenue::dis(Item& receiveitem,const int& num)
{
    if(num>items || num<=0)
    {
        cout<<"数据异常请重试\n";
        return false;
    }
    if(num == 1)
    {
        receiveitem = front->item;
        if(items == 0)
        {
            delete front;
            items--;
            front = rear = nullptr;
            return true;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
        return true;
    }
    Node* temp = front;
    for(int i = 0;i<num-1;i++)//都是进行num-1次，降低i增强安全性
    temp = temp->next;//第num-1个数据(i+1)
    Node* target = temp->next;
    temp->next = target->next;
    //如果target为rear，rear->next==nullptr,temp->next为nullptr
    receiveitem = target->item;
    if(target == rear)
    rear = temp;
    delete target;
    items--;
    return true;
}
bool Quenue::isfull()
    {
        if(items == qsize)
        return true;
        else
        return false;
    }
bool Quenue::isempty()
{
    if(items == 0)
    return true;
    else
    return false;
}
int Quenue::getLength()
    {
        return items;
    }
    bool Quenue::getItem(Item& receiveitem,int num)const
    {
        if(items<num||num<=0)
        {
            cout<<"输入异常，请重试\n";
            return false;
        }
        Node* temp = front;//temp指针的地址改变不会影响原链表
        for(int i = 0;i<num-1;i++)
        {
            temp = temp->next;
        }
        receiveitem = temp->item;
        return true;
    }
    Quenue::Quenue()
    {
        front = nullptr;
        rear = nullptr;
        items = 0;
    }
    Quenue::~Quenue()
    {
        Node* temp;
        while(front != nullptr)
        {
            temp = front;
            front = front->next;
            delete temp;//无需删除空指针，只需删除至倒数第一
        }
    }
    Quenue::Quenue(const Quenue& t)
    {
        if(t.front == nullptr)
        {
            items = 0;
            front = nullptr;
            rear = nullptr;
            return;
        }
        items = t.items;
        Node* temp = t.front->next;//temp为第二个节点
        this->front = new Node;
        front->item = t.front->item;
        front->next = nullptr;
        this->rear = this->front;
        //此时rear未独立出来，需要先将rear独立出来，再为其复制
        while(temp!= nullptr)//下一个节点存在,将rear化为下一个存在节点
        {
            rear->next = new Node;
            rear = rear->next;
            rear->item = temp->item;//为rear赋值
            rear->next = nullptr;
            temp = temp->next;//递增temp的节点
        }
    }
        Quenue& Quenue::operator = (const Quenue& t)
        {
        
            if(this == &t )
            {
            return *this;
        }
            while(front!= nullptr)
            {
                Node* temp = front;
                front = front->next;
                delete temp;
            }
            rear = front;
            if(t.front == nullptr)
            {
                front = nullptr;
                items = 0;
                return *this;
            }
            this->front = new Node;
            front->item = t.front->item;
            rear = front;
            Node* temp = t.front;
            while(temp->next!= nullptr)
            {
                temp = temp->next;
                this-> rear->next = new Node;
                rear=rear->next;
                rear->item = temp->item;
                rear->next = nullptr;
                items = t.items;
            }
            items = t.items;
            return *this;
            
}