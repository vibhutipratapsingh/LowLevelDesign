#pragma once
#include "ibutton.h"
#include "itextbox.h"

class IFactory
{
public:
	IFactory() {};
	virtual IButton* createButton() = 0;
	virtual ItextBox* createTextBox() = 0;
	virtual ~IFactory() {};
};

