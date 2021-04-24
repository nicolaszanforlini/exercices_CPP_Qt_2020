#include <iostream>
#include "humain.h"

using namespace std;

int main()
{
    // appel au constructeur délégué

    Humain h1(1);
    std::cout << h1.getNb1() << std::endl;

    // appel au constructeur de base

    Humain h2;
    std::cout << h2.getNb1() << std::endl;


    return 0;
}
