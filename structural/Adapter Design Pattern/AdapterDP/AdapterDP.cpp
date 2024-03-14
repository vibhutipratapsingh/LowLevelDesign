// AdapterDP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum chargerType
{
    USA,
    EUROPE
};

class IndianSocket {
public: 
    virtual void IndianCharger(chargerType t) = 0;
};

class USASocket
{
public:
    void USACharge()
    {
        cout << "USA Plug is charging"<<endl;
    }

};

class EuropeSocket
{
public:
    void EuropeCharge()
    {
        cout << "Europe Plug is charging"<<endl;
    }

};

class IndiaAdapter : public IndianSocket, USASocket, EuropeSocket
{
public:
    void IndianCharger(chargerType t)
    {
        if (t == USA)
        {
            USACharge();
        }
        else
        {
            EuropeCharge();
        }
    }
};

int main()
{
    unique_ptr<IndianSocket> indsocket = make_unique<IndiaAdapter>();
    indsocket->IndianCharger(USA);
    indsocket->IndianCharger(EUROPE);
}
