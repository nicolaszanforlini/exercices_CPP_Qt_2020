#include <iostream>
#include "personnage.h"
#include "guerrier.h"
#include "magicien.h"

using namespace std;

int main()
{


    Personnage h1("nicolas");
    h1.se_presenter();


    Guerrier h2("toto");
    h2.se_presenter();


    return 0;
}






