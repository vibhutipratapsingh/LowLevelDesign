#include "carbase.h"
#include "modelx.h"
#include "modely.h"
#include "carfactory.h"
#include<iostream>
using namespace std;

int main()
{
    CarFactory carFactory;
    CarBase* X = carFactory.createModelX();
    X->printCarDetails();
    CarBase* Y = carFactory.createModelY();
    Y->printCarDetails();
    delete X;
    delete Y;
}