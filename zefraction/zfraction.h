#ifndef ZFRACTION_H
#define ZFRACTION_H
#include <string>
#include <iostream>

class Zfraction
{

private:

    int a;
    int b;
    double resultat;


public:

    Zfraction();
    Zfraction(int a);
    Zfraction(int a,int b);
    void setDenominateur(int d);
    bool est_egal(Zfraction const &z)const;
    double calcul();
    void afficher_fraction(std::ostream &flux)const;
    Zfraction operator+=(Zfraction const &z);


};


bool operator==(Zfraction const &y,Zfraction const &z);
std::ostream& operator<<(std::ostream &flux, Zfraction const &f);

double operator-(Zfraction &y,Zfraction &z);
double operator/(Zfraction &y,Zfraction &z);
double operator*(Zfraction &y,Zfraction &z);
bool operator<(Zfraction &y,Zfraction &z);


#endif // ZFRACTION_H
