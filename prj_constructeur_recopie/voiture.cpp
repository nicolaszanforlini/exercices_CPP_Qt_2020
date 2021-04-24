#include "voiture.h"
#include "carte_grise.h"

voiture::voiture(std::string marque)
{
    this->setMarque(marque);
    this->carte = new carte_grise(999999);
}

void voiture::setMarque(std::string marque)
{
    this->marque = marque;
}

std::string voiture::getMarque()
{
    return this->marque;
}

voiture::~voiture()
{
    delete carte;
}


voiture::voiture(const voiture &v)
{
    this->marque = v.marque;
    this->carte = new carte_grise(v.carte->getCarte());
}




