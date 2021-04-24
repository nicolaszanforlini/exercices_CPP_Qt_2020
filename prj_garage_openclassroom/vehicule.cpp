#include "vehicule.h"




Vehicule::Vehicule(int price):price(price)
{
}

Vehicule::Vehicule()
{
    this->price = 599;
}



void Vehicule::affiche() const
{
    std::cout << "je suis un vehicule qui coute " << price << " $" << std::endl;
}


Vehicule::~Vehicule()
{
    std::cout << "vehicule detruit" << std::endl;
}



