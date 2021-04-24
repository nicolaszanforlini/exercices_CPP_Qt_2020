#include <iostream>
#include <iomanip>
#include "humain.h"



using namespace std;

int main()
{

    Humain h1(9);
    std::cout << "h1 int : " << h1.getInt() << std::endl;

    Humain h2 = Humain(std::move(h1));
    std::cout << "h2 int : " <<h2.getInt() << std::endl;
    std::cout <<  "h1 int : " <<h1.getInt() << std::endl;





    return 0;
}


