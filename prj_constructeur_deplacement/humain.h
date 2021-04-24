#ifndef HUMAIN_H
#define HUMAIN_H
#include <iostream>
#include <iomanip>

class Humain
{
private:
    int mon_int;

public:
    // constructeur de base
    Humain(int i):mon_int(i) {}

//=============================================
    // constructeur par deplacement
    Humain(Humain &&h) noexcept;

//=============================================
    // destructeur
    ~Humain();

//=============================================
    // guetteur
    int getInt();



};

#endif // HUMAIN_H
