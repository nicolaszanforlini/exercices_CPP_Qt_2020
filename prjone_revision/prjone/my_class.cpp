#include "my_class.h"


my_class::my_class(std::string name)
{
    this->setName(name);
}

void my_class::setName(std::string n)
{
    this->name = n;
}

std::string my_class::getName()
{
    return this->name;
}






