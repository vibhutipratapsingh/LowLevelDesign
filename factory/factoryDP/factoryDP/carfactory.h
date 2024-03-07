#pragma once
#include "modelx.h"
#include "modely.h"
#include "carbase.h"
class CarFactory
{
public:
    CarBase* createModelX();
    CarBase* createModelY();
};

