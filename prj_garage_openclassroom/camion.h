#ifndef CAMION_H
#define CAMION_H

#include "vehicule.h"

class Camion: public Vehicule
{
private:
    int poids;
    int annee;




public:
    Camion(int price,int poid,int annee);
    Camion();
    void affiche()const;



};

#endif // CAMION_H
