#include "personnage.h"

Personnage::Personnage(std::string nom):vie(100),nom(nom)
{
}

void Personnage::recevoir_degat(int degat)
{
    this->vie -= degat;
}

void Personnage::coup_de_poing(Personnage &cible) const
{
    cible.recevoir_degat(10);
}

void Personnage::se_presenter() const
{
    std::cout << "je suis " << nom << std::endl;
    std::cout << "j'ai "<< vie << " point de vie" << std::endl;
}









