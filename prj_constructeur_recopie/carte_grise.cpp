#include "carte_grise.h"

carte_grise::carte_grise(int numero_carte)
{
    this->setCarte(numero_carte);
}

void carte_grise::setCarte(int numero_carte)
{
    this->numero_carte = numero_carte;
}

int carte_grise::getCarte()
{
    return this->numero_carte;
}

carte_grise::~carte_grise(){};



