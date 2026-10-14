#pragma once
#include<string>
using std::string;
class AcctABC
{
    string fullname;
    long accountname;
    protected:
    double balance;
    public:
     AcctABC(const string&,const long&,const double);
    virtual bool withdraw(const double&) = 0;
    virtual void viewAcct();
    virtual ~AcctABC() = 0;
};
class Brass :public AcctABC
{
    public:
    virtual bool getBalance(const double&);
    virtual void viewAccrt();
    virtual ~Brass();
};
class BrassPlus :public AcctABC
{
    double maxLoans;
    double rate;
    double owesbank;
    public:
    virtual void viewAcct();
    virtual bool Withdraw(const double&);
    virtual ~BrassPlus();
    BrassPlus();
    bool ResetOwes(const double&);
    void ResetRate(const double&);
    void ResetMax(const double&);
};