#include "winfactory.h"
#include "wintextbox.h"
#include "winbutton.h"

IButton* WinFactory::createButton()
{
	return new WinButton();
}

ItextBox* WinFactory::createTextBox()
{
	return new WinTextBox();
}
