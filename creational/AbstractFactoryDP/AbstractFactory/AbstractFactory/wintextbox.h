#pragma once
#include "itextbox.h"
class WinTextBox :
    public ItextBox
{
public:
    WinTextBox() {};
    ~WinTextBox() {};
    void readTextBox() override;
};

