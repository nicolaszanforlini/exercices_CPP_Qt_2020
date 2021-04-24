#include "arme.h"


Arme::Arme():nom_arme("epee simple"),degat_arme(10)
{
}

Arme::Arme(std::string nom, int degat):nom_arme(nom),degat_arme(degat)
{
}

void Arme::change_arme(std::string nom, int degat)
{
    this->nom_arme = nom;
    this->degat_arme = degat;
}

void Arme::afficher_arme()const
{
    std::cout << "arme : " << this->nom_arme << " // degat : " << this->degat_arme << std::endl<< std::endl;
}



