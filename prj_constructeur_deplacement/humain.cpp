#include "humain.h"


    // constructeur deplacement
Humain::Humain(Humain &&h) noexcept
{
    std::cout << "constructeur deplacement utilisé" << std::endl;
    this->mon_int = h.mon_int;
    h.mon_int = 0;
}
//=======================================================
    // guetteur
int Humain::getInt()
{
    return this->mon_int;
}
//=======================================================
    // destructeur
Humain::~Humain()
{
   std::cout << "destruction !!!" << std::endl;
}




