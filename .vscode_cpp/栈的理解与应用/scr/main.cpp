#include<iostream>
#include"stack.h"
using namespace std;
int main()
{
    Stack list;
    cout<<"scanf a or A to add\n";
    cout<<"scanf g or G to get\n";
    cout<<"scanf q or Q to quit\n";
    cout<<"scanf r orR to get\n";
    char ch;
    Item arr[MAX] = {0};
    while(cin>>ch && (toupper(ch)!='q'))
    {
        while(cin.get()!='\n')
        continue;
        //cin.ignore(numeric_limits<streamsize>::max(),'\n');
        if(!isalpha(ch))
        {
            cout<<"输入异常\n";
            continue;
        }
        switch(ch)
        {
            case'a':
            case'A': 
            {
            cout<<"请输入要录入的物品\n" ;
            int num = 0;
            cin>>num;
            list.push(num);
            break;
            }
            case 'g':
            case 'G':
            {
                cout<<"将清除物品"<<endl;
            break;
            }
            case 'r':
            case 'R':
            {cout<<"输入要查找的物品的编号\n";
            int num1 = 0;
            cin>>num1;
            list.getitems(num1);
            break;
            }
            default:
            {
            cout<<"无效操作\n";
            break;
            }
        }
        cout<<"continue,or scanf q or Q to quit"<<endl;
    }
    cout<<"exe end\n";
    return 0;
}
