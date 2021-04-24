#include "garage.h"


garage::garage(std::vector<Vehicule*>v)
{ 
    this->liste=v;
}

void garage::ajout(Vehicule* v)
{
    std::cout << "=====================================" << std::endl;
    std::cout << "ajout " << std::endl;
    v->affiche();
    this->liste.push_back(v);
    std::cout << "=====================================" << std::endl;
}

void garage::supprimer(int i)
{
    std::cout << "=====================================" << std::endl;
    std::cout<<"supprimer" << std::endl;
    liste[i]->affiche();
    liste.erase (liste.begin()+i);
    std::cout << "=====================================" << std::endl;
}


void garage::afficher() const
{
    std::cout << "=====================================" << std::endl;
    std::cout << "affiche ma liste" << std::endl;
    for(int i=0;i<liste.size();i++){
        liste[i]->affiche();
       }
    std::cout << "=====================================" << std::endl;
}





