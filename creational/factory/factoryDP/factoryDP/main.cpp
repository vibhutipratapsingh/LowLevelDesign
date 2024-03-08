#include "carbase.h"
#include "modelx.h"
#include "modely.h"
#include "carfactory.h"
#include<iostream>
using namespace std;

int main()
{
    CarFactory carFactory;
    unique_ptr<CarBase> X(carFactory.createModelX());
    X->printCarDetails();
    unique_ptr<CarBase> Y(carFactory.createModelY());
    Y->printCarDetails();

}