#include "modely.h"
#include <iostream>
using namespace std;

ModelY::ModelY()
{
    cout << "ModelY Constructor" << endl;
}

void ModelY::printCarDetails()
{
    cout << "This is ModelY Car" << endl;
}

ModelY::~ModelY()
{
    cout << "ModelY Destructor" << endl;
}

