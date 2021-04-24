#ifndef GARAGE_H
#define GARAGE_H
#include "vehicule.h"
#include "camion.h"
#include "voiture.h"
#include "moto.h"
#include <vector>

class garage: public Vehicule
{
private:
    std::vector<Vehicule*>liste;


public:

    garage(std::vector<Vehicule*>);
    void ajout(Vehicule*);
    void supprimer(int position);
    void afficher() const;
};

#endif // GARAGE_H
