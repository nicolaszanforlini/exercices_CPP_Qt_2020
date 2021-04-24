
#include "humain.h"



//=================================
// constructeur de base
Humain::Humain(int nb)
{
    this->nb1 = nb;
}


//================================
// constructeur délégué

Humain::Humain()
{
    this->nb1 = 9;
}

//=================================
// le guetteur
int Humain::getNb1()
{
    return this->nb1;
}








