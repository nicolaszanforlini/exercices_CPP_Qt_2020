#include <iostream>
#include "fonction.h"
#include <vector>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;



int main()
{
// manipulation de fichier (creer et ecrire dedans)
    /*
    string fichier("/home/balibalibali/test.txt");
    ofstream monFichier(fichier.c_str());

    if(monFichier){
        cout << "ouverture ok" << endl;

        monFichier << "hello word" <<endl;
        monFichier << "nicolas" << endl;

        string nom = "cart";

        monFichier << "j'ajoute " << nom << endl;

    }else{
        cout << "ouverture ko" << endl;
    }
    */

// manipulation de fichier (ajouter au fichier)
/*
    string fichier("/home/balibalibali/test.txt");
    ofstream monFichier(fichier.c_str(),ios::app);
    int position;
    position = monFichier.tellp();
    cout << "position du curseur : " << position << endl;


    if(monFichier){

        monFichier << "j' ajoute une ligne" << endl;

    }else{
        cout << "ouverture ko" << endl;
    }
*/
// manipulation de fichier (lire un fichier ligne par ligne)
    /*
    string fichier("/home/balibalibali/test.txt");
    ifstream monFichier(fichier);

    if(monFichier){

        while(monFichier){
        string ligne;
        getline(monFichier,ligne);
        cout << ligne << endl;
        }
    }else{
        cout << "ouverture ko" << endl;
    }
    */
    /*
    string fichier("/home/balibalibali/test.txt");
    ifstream monFichier(fichier);
    string ligne;

    if(monFichier){

        while(getline(monFichier,ligne)){

        cout << ligne << endl;
        }

    monFichier.close();
    }else{
        cout << "ouverture ko" << endl;
    }
    */

// manipulation de fichier (mot par mot)
    /*
    string fichier = "/home/balibalibali/test.txt";
    ifstream monFichier;
    monFichier.open(fichier);

    if(monFichier){
        while(monFichier){
            string mot;
            monFichier >> mot;
            cout << mot << " ";
        }
    }else{
        cout << "ouverture ko" << endl;
    }
    */

// manipulation de fichier(caractere par caractere)
    /*
    string fichier = "/home/balibalibali/test.txt";
    ifstream monFichier;

    monFichier.open(fichier);

    if(monFichier){
        while(monFichier){
            char carac;
            monFichier >> carac;
            cout << carac;
        }

    }else{
        cout << "ouverture ko" << endl;
    }
    */


    return 0;
}
