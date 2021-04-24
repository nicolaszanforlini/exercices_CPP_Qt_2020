#include "guerrier.h"

Guerrier::Guerrier(std::string nom):Personnage(nom)
{
}

void Guerrier::frapper_comme_un_guerrier(Personnage &cible) const
{
    cible.recevoir_degat(25);
}

void Guerrier::se_presenter() const
{
    Personnage::se_presenter();
    std::cout << "je suis un guerrier" << std::endl;
}









