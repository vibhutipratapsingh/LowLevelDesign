
#include "ibutton.h"
#include "macbutton.h"
#include "winbutton.h"
#include "itextbox.h"
#include "mactextbox.h"
#include "wintextbox.h"
#include "winfactory.h"
#include "ifactory.h"
#include "macfactory.h"
#include "GUIFactory.h"

#include <iostream>
using namespace std;

int main()
{
    string osType;
    cout << "OS Type :";
    cin >> osType;
    unique_ptr<IFactory>factory(GUIFactory::CreateFactory(osType));
    unique_ptr<IButton>button(factory->createButton());
    unique_ptr<ItextBox>textBox(factory->createTextBox());
    button->pressButton();
    textBox->readTextBox();
}

