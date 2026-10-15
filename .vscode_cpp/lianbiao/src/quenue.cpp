#include"quenue.h"
#include<vector>
bool Quenue::addRear(const Item& s)
{
  if(items == 0)
  {
    front = new Node;
    front->item = s;
    rear = front;
    rear->next = nullptr;
    return true;
  }
    Node* temp = new Node;
    rear ->next = temp;
    rear = rear->next;
    rear->item = s;
    rear->next = nullptr;
    items++;
    return true;
}
  bool Quenue::add(const Item& s,const int& num)//ok
  {
    if(num >  items +1)
    return false;
    if(num == 1)
    {
        return addFront(s);
    }
    Node* temp = new Node;
    temp->item = s;
    Node* temp0 = front;
    for(int i = 1;i<=num-2;i++)//当Num = 2，循环不进行，也成立
    {
        temp0 = temp0->next;//temp0指向num-1个
    }
    temp->next = temp0->next;
    temp0->next = temp;
    items++;
    return true;
  }
  bool Quenue::getoutItem(const int& num,Item& get)//ok
  {
    if(items<num||num<=0)
    return false;
    Node* temp = front;
    if(num == 1)
    {
        get = front->item;
        Node* temp = front;
        front = front->next;
        delete temp;
        return true;
    }
    for(int i = 0;i<=num-2;i++)//进行Num-1次
    {
        temp = temp->next;
    }
    Node* dis = temp->next;
    get = dis->item;
    temp->next = dis->next;//if(dis == rear) also true
    delete dis;
    return true;
  }
  bool Quenue::addFront(const Item& first)//ok
  {
    Node* temp = new Node;
    temp->item = first;
    temp ->next = front;//=nullptr
    front = temp;
    items++;
    return true;
  }
  Quenue::Quenue()
  :items(0),front(nullptr),rear(nullptr){}
  Quenue::operator int()const
  {
    return items;
  }//转换函数，提取出items的值
  Quenue::Quenue(const std::vector<Item>& arr)//ok
  {
    if(arr.size() == 0)
    {
        Quenue();
        return;
    }
    front = new Node;
    rear = front;
    front->item = arr[0];
    rear->next = nullptr;
    int i = 1;
    while(i<=arr.size()-1)//首先要将rear与front分离
    {
        Node* temp0 =  new Node;
        rear->next = temp0;//第一轮front指向rear
        rear = rear ->next;
        rear ->item = arr[i];
        rear->next = nullptr;
        i++;
    }
    items = arr.size();
  }
  Quenue::~Quenue()
  {
    Node* temp = front;
    while(temp != nullptr)
    {
        front = front->next;
        delete temp;
        temp = front;//最后变成nullptr时无需删除
    }
    items = 0;
  }
  Quenue::Quenue(const Quenue& s)//ok
  {
    if(s.items == 0)
    {
      items = 0;
      front = rear = nullptr;
      return;
    }
    front = new Node;
    rear = front;
    rear->next = nullptr;
    front->item = s.front->item;
    Node*temp = s.front->next;
    while(temp!= nullptr)
    {
        Node* temp0 = new Node;
        rear->next = temp0;
        rear = rear->next;
        rear->item = temp->item;
        temp = temp->next;
    }
    items = s.items;
  }
  Quenue& Quenue::operator = (const Quenue& s)//ok
  {
    if(&s == this)
    return *this;
    Node* temp = front;
    if(s.items == 0)
    {
      front = rear = nullptr;
      items = 0;
      return;
    }
    while(temp!=nullptr)
    {
      front = front->next;
      delete temp;
      temp = front;
    }
    front = new Node;
    front->item = s.front->item;
    rear = front;
    rear->next = nullptr;
    temp = s.front->next;
    while(temp != nullptr)
    {
      Node* temp1 = new Node;
      temp1->item = temp->item;
      temp1->next = nullptr;
      rear->next = temp1;
      rear = rear->next;
      temp = temp->next;
    }
    items = s.items;
    return *this;
    //Quenue(s);
  }
  Quenue::Quenue(const Quenue& s)//ok
  {
    if(s.items == 0)
    {
        items =0;
        front = rear = nullptr;
    }
    front = new Node;
    rear = front;
    rear->next = nullptr;
    Node* temp = s.front->next;
    front->item = s.front->item;
    while(temp != 0)//首先要将rear与front分离
    {
        Node* temp0 = new Node;
        rear->next = temp0;//第一轮front指向rear
        rear = rear ->next;
        rear ->item = temp->item;
        rear->next = nullptr;
        temp = temp->next;
    }
    items = s.items;
  }
  int Quenue::getItems()const
  {
    return items;
  }
  Quenue& Quenue::operator+(const Quenue& s)//ok
  {
    if(s.front == nullptr)
    return *this;
    if(items == 0)
    {
      front = new Node;
      rear = front;
      rear->next = nullptr;
      Node* temp = s.front->next;
      front->item = s.front->item;
      while(temp != 0)//首先要将rear与front分离
    {
        Node* temp0 = new Node;
        rear->next = temp0;//第一轮front指向rear
        rear = rear ->next;
        rear ->item = temp->item;
        rear->next = nullptr;
        temp = temp->next;
    }
    items = s.items;
    return *this;
    }
    Node* temp = front;
    Node* temp1 = new Node;
    temp1->item = temp->item;
    temp1->next = nullptr;
    rear->next = temp1;
    temp = temp->next;
    while(temp != nullptr)//每次循环时temp0指针重置，但内存未重置
    {
      Node* temp0 = new Node;
      temp0->item = temp->item;
      temp0->next = nullptr;
      rear->next = temp0;
      rear = rear->next;
      temp = temp->next;
    }
    items +=s.items;
    return *this;
  }
  ostream& operator<<(ostream& os,const Quenue& s)//ok
  {
    if(s.items == 0)
    {
        os<<"null";
        return os;
    }
    Quenue::Node* temp = s.front;//友元函数可以使用私有成员，
    //但针对枚举，静态变量，结构体等类内声明的变量
    int tem = 0;
    while(temp!= nullptr)//需要作用域运算符
    {
        os<<temp->item;
        if(tem % 5 == 4)
        os<<std::endl;
        temp = temp->next;
        tem++;
    }
    return os;
  }