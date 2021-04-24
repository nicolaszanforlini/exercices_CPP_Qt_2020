#include "moto.h"

Moto::Moto(int price, double vitesse,int anne):Vehicule(price),vitesse(vitesse),annee(anne)
{
}

Moto::Moto()
{
    this->vitesse = 50;
    this->annee = 0;
}

void Moto::affiche() const
{
    std::cout << "je suis une moto qui peut rouler jusqu'à  " << vitesse << " kmH et coute " << price << "$ , et de l'annee : "<< annee  <<std::endl;
}

