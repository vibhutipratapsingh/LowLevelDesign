#pragma once
#include "carbase.h"

class ModelX :
    public CarBase
{
public:
    ModelX();
    void printCarDetails() override;
    ~ModelX();
};

