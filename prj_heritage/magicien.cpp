#include "magicien.h"

Magicien::Magicien(std::string nom):Personnage(nom),mana(100)
{
}

void Magicien::boule_de_feu(Personnage &cible) const
{
   cible.recevoir_degat(15);
}

void Magicien::boule_de_glace(Personnage &cible) const
{
    cible.recevoir_degat(20);
}








