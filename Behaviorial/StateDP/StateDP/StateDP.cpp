#include <memory>
#include <iostream>
using namespace std;

class Istate
{
public:
    virtual void getBenefit()=0;
    virtual ~Istate() {}
};


class SilverState: public Istate
{
public:
    virtual ~SilverState() 
    {
        cout << "SilverState  Object destructor" << endl;
    }
    void getBenefit()
    {
        cout << "You can get the benefit of Silver State Now!!" << endl;
    }
};

class GoldState: public Istate
{
public:
    virtual ~GoldState() 
    {
        cout << "GoldState  Object destructor" << endl;
    }
    void getBenefit()
    {
        cout << "You can get the benefit of Gold State Now!!" << endl;
    }
};


class PlatinumState: public Istate
{
public:
    virtual ~PlatinumState()
    {
        cout << "PlatinumState  Object destructor" << endl;
    }
    void getBenefit()
    {
        cout << "You can get the benefit of Platinum State Now!!" << endl;
    }
};


class NullState :public Istate
{
public:
    virtual ~NullState() 
    {
        cout << "Null Object destructor" << endl;
    }
    void getBenefit()
    {
        cout << "You are in Null State Now!!" << endl;
    }
};


class Account {
public:
    Account():balance(0),state_(make_unique<NullState>())
    {
        cout << "Account Created Successfully"<< endl;
    }
    int getBalance() const
    {
        return balance;
    }

    void deposit(int amount)
    {
        balance += amount;
        updateAccount();
    }

    void withdraw(int amount)
    {
        if ((balance - amount) < 0)
        {
            cout << "Insufficient Fund"<<endl;
            return;
        }
        balance -= amount;
        updateAccount();
    }

    void updateAccount()
    {
        if (balance < 500)
        {
            state_ = make_unique<SilverState>();
            state_->getBenefit();
        }
        else if (balance > 500 && balance < 1000)
        {
            state_ = make_unique<GoldState>();
            state_->getBenefit();
        }
        else
        {
            state_ = make_unique<PlatinumState>();
            state_->getBenefit();
        }
    }


private:
    unique_ptr<Istate> state_;
    int balance;
};

int main()
{
    Account a;
    a.deposit(100);
    a.deposit(600);
    
}

