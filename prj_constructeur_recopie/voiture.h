#ifndef VOITURE_H
#define VOITURE_H
#include <iostream>
#include <iomanip>
#include "carte_grise.h"


class voiture
{
private:
    std::string marque;
    carte_grise *carte;

public:
    voiture(std::string);
    void setMarque(std::string);
    std::string getMarque();
    voiture(const voiture &);
    ~voiture();
};







#endif // VOITURE_H




