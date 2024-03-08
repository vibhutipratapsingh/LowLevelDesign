#pragma once
#include "ibutton.h"
class MacButton :
    public IButton
{
public:
    void pressButton() override;
};

