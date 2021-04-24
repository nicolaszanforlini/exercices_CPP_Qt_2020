#include "camion.h"


Camion::Camion(int price,int poid,int anne):Vehicule(price),poids(poid),annee(anne)
{
}

Camion::Camion()
{
    this->poids = 5;
    this->annee = 0;
}

void Camion::affiche() const
{
    std::cout << "je suis un camion qui porte : " << poids << "kg , et de l'annee : , " << annee << "je coute : " << price << "$" <<std::endl;
}

