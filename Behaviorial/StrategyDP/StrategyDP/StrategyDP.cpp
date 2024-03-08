// StrategyDP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
using namespace std;

class RoarBehaviour
{
public:
    RoarBehaviour() {}
    virtual void roar() = 0;
    virtual ~RoarBehaviour() {}
};

class Roar: public RoarBehaviour {
public:
    Roar() {};
    ~Roar() {};
    void roar() 
    {
        cout << "Lion is Roaring!!!!!!!!!!!!!!!! " << endl;
    }
};

class SilentRoar : public RoarBehaviour {
public:
    SilentRoar() {};
    ~SilentRoar() {};
    void roar()
    {
        cout << "Lion is Silent!!!!!!!!!!!!!!!! " << endl;
    }
};

class Lion {
    unique_ptr<RoarBehaviour> roarBehaviour_;
public:
    explicit Lion(unique_ptr<RoarBehaviour>&& roarBehaviour):roarBehaviour_(std::move(roarBehaviour))
    {

    }

    void setRoarStrategy(unique_ptr<RoarBehaviour>&& strategy)
    {
        roarBehaviour_ = std::move(strategy);
    }

    void performRoar()
    {
        roarBehaviour_->roar();
    }
};

int main()
{
    Lion myLion(make_unique<Roar>());
    myLion.performRoar();
    myLion.setRoarStrategy(make_unique<SilentRoar>());
    myLion.performRoar();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
