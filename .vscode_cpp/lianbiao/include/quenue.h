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
  bool addRear(Node*);
  bool add(Node*,const int& num);
  bool getItem(const int& num,Item& get);
  bool addFront(Node*);
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