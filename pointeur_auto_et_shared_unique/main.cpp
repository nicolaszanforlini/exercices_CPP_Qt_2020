
#include <iostream>
#include <iomanip>
#include <memory>
#include "ptrshaed.h"

using namespace std;

//================================================
/*
    // fonction avec auto_ptr
void affiche(auto_ptr<std::string>str){
    std::cout << *str << std::endl;
}
//======================================================
    // fonction avec unique_ptr
void aff(unique_ptr<std::string>&& string){
    std::cout << *string << std::endl;
}
*/
//======================================================
    // fonction shared_ptr
/*
void fonc_shared_ptr(shared_ptr<ptrshaed>ptr){
    std::cout << "pointeur vaut : " << ptr->getInt() << std::endl;
}
*/

int main()
{

/*
    // auto_ptr

    std::string s = "brain";
    auto_ptr<std::string>p(new std::string);

    *p.get() = s;
    std::cout << *p << std::endl;

    affiche(p); // avec fonction
//=======================================================
    // unique_ptr

    std::string mon_s = "cart";
    unique_ptr<std::string>mon_string(new std::string);

    *mon_string.get() = mon_s;
    std::cout << *mon_string << std::endl;

    aff(std::move(mon_string));
*/
//=======================================================
    // shared_ptr
/*
ptrshaed elem(8);           // je creé mon instance

for(int i = 1; i<=1; i++){
                            // je creé 2 pointeur qui partage la meme adresse
                            // et appel une fonction qui en creé un 3eme
                            // avec toujours la meme adresse(facultatif)

    shared_ptr<ptrshaed>ptr_shared_1(make_shared<ptrshaed>(elem));
    shared_ptr<ptrshaed>ptr_shared_2(ptr_shared_1);
    fonc_shared_ptr(ptr_shared_2);
}
                            // en sortant de la boucle et de la fonction les pointeurs se detruise
                            // et l'objet "elem" est detruit aussi
*/
//=======================================================



    return 0;
}





