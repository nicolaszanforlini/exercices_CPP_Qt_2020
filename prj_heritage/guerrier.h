#ifndef GUERRIER_H
#define GUERRIER_H

#include "personnage.h"




class Guerrier : public Personnage
{
private:



public:

    Guerrier(std::string nom);
    void frapper_comme_un_guerrier(Personnage &cible)const;
    virtual void se_presenter()const;





};

#endif // GUERRIER_H
