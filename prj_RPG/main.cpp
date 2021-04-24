#include <iostream>
#include <string>
#include <vector>
#include "personnage.h"

// faire evoluer le jeu
// https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1897606-creez-les-classes-partie-2-2

using namespace std;


int main()
{
    Personnage David("arme double",20);
    Personnage Goliath;

    Goliath.attaquer(David);
    David.potion(20);
    Goliath.attaquer(David);
    David.attaquer(Goliath);

    Goliath.change_arme("lame tranchante", 40);

    Goliath.attaquer(David);

    cout << "vie de david : " << David.get_vie() << endl;
    cout << "vie de goliath : " << Goliath.get_vie() << endl << endl;

    cout << "info de david : " << endl;
    David.affiche_perso();

    cout << "info de goliath : " << endl;
    Goliath.affiche_perso();

    return 0;
}






