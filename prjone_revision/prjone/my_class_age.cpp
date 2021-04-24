#include "my_class_age.h"

my_class_age::my_class_age(std::string n, int a)
    :my_class(n)
{
    this->setAge(a);
}

void my_class_age::setAge(int a)
{
    this->age = a;
}

int my_class_age::getAge()
{
    return this->age;
}






