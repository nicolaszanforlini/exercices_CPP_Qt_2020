#ifndef ARME_H
#define ARME_H
#include <string>
#include <iostream>

class Arme
{

private:

    std::string nom_arme;
    int degat_arme;

protected:


public:

    Arme();
    Arme(std::string,int);
    void change_arme(std::string,int);
    void afficher_arme()const;
    int get_degat()const{return this->degat_arme;}
    std::string get_nom_arme()const{return this->nom_arme;}


};

#endif // ARME_H
