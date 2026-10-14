#pragma once
#include<iostream>
#include<vector>
using std::ostream;
using std::istream;
typedef int Item;
class Quenue
{
  struct Node
  {
    Item item;
    Node* next;
  };
  int items;
  Node* rear;
  Node* front;
  public:
  bool addRear(const Item&s);
  bool add(const Item& s,const int& num);
  bool getoutItem(const int& num,Item& get);//取出元素（取出并删除）
  bool addFront(const Item& s);
  Quenue(const std::vector<Item>& arr);  //能否将通过默认构造省略无参？
  Quenue();
  explicit operator int()const;//转换函数，提取出items的值
  ~Quenue();
  bool getItem(const int& num,Item& get);
  Quenue& operator= (const Quenue& s);
  Quenue(const Quenue& s);
  int getItems()const;
  Quenue& operator+(const Quenue& s1);
  friend ostream& operator<<(ostream& os,const Quenue& s);
};