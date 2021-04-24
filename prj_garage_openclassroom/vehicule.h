#ifndef VEHICULE_H
#define VEHICULE_H
#include <iostream>
#include <string>


class Vehicule
{

private:

protected:
    int price;


public:

    Vehicule(int price);
    Vehicule();
    virtual void affiche()const;

    virtual ~Vehicule();


};




#endif // VEHICULE_H
