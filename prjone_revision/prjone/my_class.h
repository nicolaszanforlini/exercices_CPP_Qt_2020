#ifndef MYRESSOURCE_H
#define MYRESSOURCE_H
#include <iostream>
#include <iomanip>
#include <functional>
#include <string>
#include <unordered_set>
#include <exception>
#include <vector>
#include <ostream>
#include <memory>

class my_class{

private:
    std::string name;

public:
    my_class(std::string);
    void setName(std::string);
    std::string getName();
};


#endif // MYRESSOURCE_H
