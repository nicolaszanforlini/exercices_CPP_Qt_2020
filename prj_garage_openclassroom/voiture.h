#ifndef VOITURE_H
#define VOITURE_H
#include "vehicule.h"

class Voiture : public Vehicule
{

private:

    int nb_porte;
    int annee;


public:

    Voiture(int price, int porte,int annee);
    Voiture();
    void affiche()const;


};





#endif // VOITURE_H



