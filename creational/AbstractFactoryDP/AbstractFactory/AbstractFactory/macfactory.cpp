#include "macfactory.h"
#include "macbutton.h"
#include "mactextbox.h"

ItextBox* MacFactory::createTextBox()
{
	return new MacTextBox();
}

IButton* MacFactory::createButton()
{
	return new MacButton();
}
