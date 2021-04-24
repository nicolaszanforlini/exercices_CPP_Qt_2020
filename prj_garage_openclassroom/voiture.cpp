#include "voiture.h"


Voiture::Voiture(int price, int porte,int anne):Vehicule(price),nb_porte(porte),annee(anne)
{
}

Voiture::Voiture()
{
    this->nb_porte = 2;
    this->annee = 0;
}

void Voiture::affiche() const
{
    std::cout << "je suis une voiture qui à " << nb_porte << " portes et coute " << price << "$ , et de l'annee : " << annee<<std::endl;
}



