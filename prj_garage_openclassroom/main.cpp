#include <iostream>
#include "vehicule.h"
#include "moto.h"
#include "voiture.h"
#include "camion.h"
#include "garage.h"
#include <vector>


using namespace std;


void presenter(Vehicule const& v){
    v.affiche();
}



int main()
{
    /*
    Vehicule bus(1000);
    Moto moto(1500,250,1980);
    Voiture voiture(20000,5,1986);

    bus.affiche();
    moto.affiche();
    voiture.affiche();
    */
//    Vehicule v(18000);
//    presenter(v);
    /*
    Moto m(1900,270,1900);
    presenter(m);


    std::cout << "===============================" << std::endl;

    Vehicule *c = new Voiture();
    c->affiche();

    delete c;
    std::cout << "=====================================" << std::endl;
    */
    // vecteur de pointeur de type vehicule
    /*
    vector<Vehicule*>listeVehicules;
    listeVehicules.push_back(new Voiture(20000,5,1987));
    listeVehicules.push_back(new Voiture(30000,4,1966));
    listeVehicules.push_back(new Moto(50000,290,2000));

    listeVehicules[1]->affiche();
    listeVehicules[2]->affiche();
    */
    // on efface la memoire alloué des pointeur et on met le pointeur à 0
    /*
    for(int i=0;i<listeVehicules.size();i++){
        delete listeVehicules[i];
        listeVehicules[i] = 0;
    }
    */
    std::cout << "=====================================" << std::endl;

    std::vector<Vehicule*>garageV;
    garage gar(garageV);

    Vehicule *m = new Moto(55000,310,1986);
    Vehicule *bus = new Vehicule(1000);
    Vehicule *voiture = new Voiture(20000,5,1986);

    gar.ajout(m);
    gar.ajout(bus);
    gar.ajout(voiture);

    gar.afficher();

    gar.supprimer(1);

    gar.afficher();

    std::cout << "=====================================" << std::endl;






    return 0;
}
