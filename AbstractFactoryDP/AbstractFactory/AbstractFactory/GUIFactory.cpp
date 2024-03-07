#include "GUIFactory.h"
using namespace std;

IFactory* GUIFactory::CreateFactory(string & ostype)
{
	if (ostype == "win")
	{
		return new WinFactory();
	}
	else 
	{
		return new MacFactory();
	}
}