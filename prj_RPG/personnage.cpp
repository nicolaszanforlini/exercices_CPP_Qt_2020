#include "personnage.h"

Personnage::Personnage(): arme(0),vie(100),mana(100)
{
    arme = new Arme();
}

Personnage::Personnage(std::string arm, int dega):arme(0), mana(100),vie(100)
{
    arme = new Arme(arm,dega);
}

Personnage::Personnage(const Personnage &p):mana(p.mana),vie(p.vie),arme(0)
{
    arme = new Arme(*p.arme);
}

Personnage::~Personnage()
{
    delete arme;
}

void Personnage::recevoir_degat(int nb_degat)
{
    this->vie -= nb_degat;
    if(vie<0)vie = 0;
}

void Personnage::attaquer(Personnage &p)
{
    p.recevoir_degat(arme->get_degat());
}

void Personnage::potion(int popo)
{
    this->vie += popo;
    if(vie>100)vie = 100;
}

void Personnage::change_arme(std::string arme, int degat)
{
    this->arme->change_arme(arme,degat);
}

bool Personnage::etat_personnage()const
{
    return vie > 0;
}

void Personnage::vie_du_personnage(int v)
{
    this->vie = v;
}

void Personnage::affiche_perso() const
{
    std::cout << "etat vie : " << this->vie << std::endl;
    std::cout << "etat mana : " << this->mana << std::endl;
    arme->afficher_arme();
}

Personnage Personnage::operator=(const Personnage &p)
{
    if(this!=&p){
        this->vie = p.vie;
        this->mana = p.mana;
        delete arme;
        this->arme = new Arme(*p.arme);
    }
    return *this;
}
