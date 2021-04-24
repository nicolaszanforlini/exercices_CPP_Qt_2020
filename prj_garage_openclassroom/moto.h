#ifndef MOTO_H
#define MOTO_H
#include "vehicule.h"

class Moto: public Vehicule
{
private:

    double vitesse;
    int annee;


public:

    Moto(int price,double vitesse,int annee);
    Moto();
    void affiche()const;



};

#endif // MOTO_H
