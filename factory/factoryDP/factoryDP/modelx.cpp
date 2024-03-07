#include "modelx.h"
#include <iostream>
using namespace std;

ModelX::ModelX()
{
    cout << "ModelX Constructor" << endl;
}

void ModelX::printCarDetails()
{
    cout << "This is ModelX Car"<< endl;
}

ModelX::~ModelX()
{
    cout << "ModelX Destructor" << endl;
}

