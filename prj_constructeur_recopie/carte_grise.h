#ifndef CARTE_GRISE_H
#define CARTE_GRISE_H
#include <iostream>
#include <iomanip>

class carte_grise
{
private:
    int numero_carte;

public:
    carte_grise(int);
    void setCarte(int);
    int getCarte();
    ~carte_grise();
};

#endif // CARTE_GRISE_H




