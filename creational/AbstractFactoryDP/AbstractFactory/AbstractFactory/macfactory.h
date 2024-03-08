#pragma once
#include "ifactory.h"
#include <iostream>

class MacFactory :
    public IFactory
{
public:
    MacFactory() {};
    IButton* createButton() override;
    ItextBox* createTextBox() override;
    ~MacFactory() {};
};

