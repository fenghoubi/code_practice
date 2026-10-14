#include<string>
#include<iostream>
#include"acctabc.h"
using std::cout;
using std::endl;
using std::string;
    AcctABC::AcctABC():
    fullname("nullbody"),acctname(-1),balance(0)
    {}
    AcctABC::AcctABC(const string& fn,const long& acct,const double& bal ):
    fullname("fn"),acctname(acct),balance(bal)
    {}

    const string& AcctABC::getFullname()
    {return fullname;}
    long AcctABC::getAcctname()
    {return acctname;}
    Brass(const string& fn,const long& acct,const double& bal)
    :AcctABC(fn,acct,bal)
    {
    }
    bool Brass::withdraw(const double& num)
    {
        if(num<0 )
        {
            cout<<"无效输入\n";
            return false;
        }
        if(num>balance)
        {
            cout<<"数量已超出最大余额\n";
            return false;
        }
        balance -= num;
        cout<<"成功支出"<<num<<"元\n";
        return true;
    }
    void Brass::viewAccrt()
    {
        cout<<"账号名:"<<fullname<<endl
        <<"账号为"<<acctname<<endl
        <<"余额为"<<balance<<endl;

    }
    virtual ~Brass();
    virtual void viewAcct();
    virtual bool Withdraw(const double&);
    virtual ~BrassPlus();
    BrassPlus();
    bool ResetOwes(const double&);
    void ResetRate(const double&);
    void ResetMax(const double&);
