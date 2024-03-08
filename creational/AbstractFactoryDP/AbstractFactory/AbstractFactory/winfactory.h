#pragma once
#include "ifactory.h"
class WinFactory :
    public IFactory
{
public:
    WinFactory() {}
    ~WinFactory() {}
    IButton* createButton() override;
    ItextBox* createTextBox() override;
};

