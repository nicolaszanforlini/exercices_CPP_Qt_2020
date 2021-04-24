
#ifndef HUMAIN_H
#define HUMAIN_H
#include <iostream>
#include <iomanip>

class Humain
{
private:
    int nb1;

public:

    // constructeur de base

    Humain(int);


    // constructeur délégué
    Humain();

//========================================
    int getNb1();   // le guetteur
//=======================================

    // constructeur sur une ligne syntax
/*
    Humain(int n):nb1(n) {}   // constructeur de base
    Humain():Humain(9) {}     // constructeur délégué
*/

};



#endif // HUMAIN_H




