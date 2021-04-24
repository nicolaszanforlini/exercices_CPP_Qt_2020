#ifndef DUREE_H
#define DUREE_H
#include <iostream>
#include <string>


class Duree
{
private:

    int heures;
    int minutes;
    int secondes;

protected:

public:

    Duree(int heures=0,int minutes=0,int secondes=0);

    bool estEgal(Duree const &b)const;
    bool plusPetitQue(Duree const &b)const;
    Duree& operator+=(Duree const &b);

    void addition(Duree const &b);
    void afficher();
};


bool operator==(Duree const &a, Duree const &b);
bool operator!=(Duree const &a, Duree const &b);
bool operator<(Duree const &a, Duree const &b);
Duree operator+(Duree const &a,Duree const &b);


#endif // DUREE_H
