#include "duree.h"



Duree::Duree(int heure,int minute,int seconde)
{

    int res_s = 0, reste_s = 0, res_m = 0, reste_m =0;

    if(heure > 0 && minute > 0 && seconde > 0){

        if(seconde>60){
            res_s = seconde / 60;
            reste_s = seconde % 60;
            minute += res_s;
            seconde = reste_s;
        }

        if(minute>60){
            res_m = minute / 60;
            reste_m = minute % 60;
            heure += res_m;
            minute = reste_m;
        }
    }
    heures = heure;
    minutes = minute;
    secondes = seconde;

}


bool Duree::estEgal(Duree const &b)const
{
    return (heures == b.heures && minutes == b.minutes && secondes == b.secondes);
}

bool Duree::plusPetitQue(Duree const &b) const
{
    if(heures<b.heures)return true;
    else if(heures == b.heures && minutes < b.minutes)return true;
    else if(heures == b.heures && minutes == b.minutes && secondes < b.secondes)return true;
    else return false;
}

Duree& Duree::operator+=(Duree const &b)
{
    secondes += b.secondes;
    minutes += secondes / 60;
    secondes = secondes % 60;
    minutes += b.minutes;
    heures += minutes / 60;
    minutes = minutes % 60;
    heures += b.heures;
    return *this;
}

void Duree::addition(const Duree &b)
{
    secondes += b.secondes;
    minutes += secondes / 60;
    secondes = secondes % 60;
    minutes += b.minutes;
    heures += minutes / 60;
    minutes = minutes % 60;
    heures += b.heures;
}

void Duree::afficher()
{
    std::cout << heures << "," << minutes << "," << secondes << std::endl;
}

bool operator==(Duree const &a, Duree const &b){
    return a.estEgal(b);
}

bool operator!=(Duree const &a, Duree const &b){
    return !(a==b);
}

bool operator<(Duree const &a, Duree const &b){
    return a.plusPetitQue(b);
}

Duree operator+(const Duree &a, const Duree &b)
{
    Duree resultat(a);
    resultat += b;
    return resultat;
}


