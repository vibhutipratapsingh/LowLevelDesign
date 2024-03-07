#pragma once
#include "ifactory.h"
#include "macfactory.h"
#include "winfactory.h"
#include <string>
using namespace std;

class GUIFactory
{
public:
	GUIFactory() {};
	~GUIFactory() {};
	static IFactory* CreateFactory(string &ostype);
};

