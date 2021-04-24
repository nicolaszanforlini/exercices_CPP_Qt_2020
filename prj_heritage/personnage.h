#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <iostream>
#include <string>



class Personnage
{

private:

protected:

    int vie;
    std::string nom;





public:


    Personnage(std::string nom);
    void recevoir_degat(int degat);
    void coup_de_poing(Personnage &cible)const;
    void se_presenter()const;



};






#endif // PERSONNAGE_H
