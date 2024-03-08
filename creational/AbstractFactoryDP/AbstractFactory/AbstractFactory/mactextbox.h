#pragma once
#include "itextbox.h"
class MacTextBox :
    public ItextBox
{
public:
    MacTextBox() {};
    ~MacTextBox() {};
    void readTextBox() override;
};

