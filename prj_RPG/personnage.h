#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include "arme.h"

class Personnage
{

private:

    int vie;
    int mana;
    Arme* arme;

protected:

public:

    Personnage();
    Personnage(std::string,int);
    Personnage(Personnage const &);

    ~Personnage();

    void recevoir_degat(int);
    void attaquer(Personnage &);
    void potion(int);
    void change_arme(std::string,int);
    bool etat_personnage()const;
    void vie_du_personnage(int);
    int get_vie()const{return this->vie;}
    void affiche_perso()const;
    Personnage operator=(Personnage const& p);

};

#endif // PERSONNAGE_H
