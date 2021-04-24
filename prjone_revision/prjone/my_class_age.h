#ifndef MY_CLASS_AGE_H
#define MY_CLASS_AGE_H
#include "my_class.h"


class my_class_age : public my_class
{
private :
    int age;

public:
    my_class_age(std::string, int);
    void setAge(int);
    int getAge();
};

// variable inline

 //inline const int var = 10;


#endif // MY_CLASS_AGE_H




