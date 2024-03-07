#include "carfactory.h"

CarBase* CarFactory::createModelX()
{
    return new ModelX();
}

CarBase* CarFactory::createModelY()
{
    return new ModelY();
}
