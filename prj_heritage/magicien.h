#ifndef MAGICIEN_H
#define MAGICIEN_H

#include "personnage.h"


class Magicien : public Personnage
{

private:

    int mana;

public:

    Magicien(std::string nom);
    void boule_de_feu(Personnage &cible)const;
    void boule_de_glace(Personnage &cible)const;




};





#endif // MAGICIEN_H
