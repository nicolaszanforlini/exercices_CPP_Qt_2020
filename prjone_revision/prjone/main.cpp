
#include "my_class.h"
#include "my_class_age.h"
#include "lib.h"
#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <cstdarg>

#define mini(a, b) { (a) < (b) ? (a) : (b) }   // macro avec paramètres

//==============================================================
    // noexcept // dans cet exemple ne sert à rien //
/*
void afficher(std::string text)noexcept
{
    std::cout<<text<<std::endl;
}
*/
    // try,throw,catch =========================================
/*
int division(int a, int b)
{
    if (b == 0)
    {
        throw std::string("error 0"); // division par zéro;
    }
    else return a / b;
}
*/
//==============================================================
    // template
/*
template<typename T>
  constexpr T pi = T(3.1415926535897932385);

template<typename T>
T test = 9.09;
*/
//==============================================================
/*
    // deprecated

[[deprecated("La fonction min() est dépréciée")]]
int min(int nb1){
    int a;
    a = nb1;
        return a;
}
*/
//==============================================================
    // rvalue parametre methode
/*
int move_rvalue(int &&r){
    int new_value;
    new_value = r;
    return new_value;
}
*/
//==============================================================
    // fonction,template permutation de 2 vecteurs

/*
template<typename T>
void maFonc(T &&v1, T &&v2){
    std::vector<int>tmp;
    tmp = std::move(v1);
    v1 = std::move(v2);
    v2 = std::move(tmp);
}
*/
//==============================================================
    // fonction template
/*
template<typename T>
T min(T a, T b){
    return a<b ? a : b;
}
*/
//==============================================================
    // variable template
/*
template<typename V>
constexpr V val = 123.34567;
*/
//==============================================================
    // constexpr
/*
constexpr int sum(int a, int b){
    return a + b;
}
*/
//==============================================================
    // fonction pointeur brut
/*
void f(std::string str){
    std::string *ptr = &str;
    std::cout << *ptr << std::endl;
    delete ptr;
}
*/
//==============================================================
    // fonction template avec argument variadic brut
/*
// il faut tout d'abord faire la fonction vide :
void print(){};
// ensuite coder la fonction comme ceci
template<typename T, typename ...Types>
void print(T arg1, Types... arg2){
    std::cout << arg1 << std::endl;
    print(arg2...);
}
*/
//==============================================================
    // fonction template variadic par etiquette (optimisation de code)
/*
void afficher(){};
template<typename Premier, typename... Reste>
void afficher(const Premier &elem, Reste &&... liste){ // const car c'est une reference l'element est juste affiché
    std::cout << elem << std::endl;                    // si on veut modifier l'element on retire const et le &
    afficher(liste...);
}
*/
//==============================================================
int main()
{

    int i = 9;
    std::string res = std::to_string(i);

//==============================================================
    // appel de la fonction template variadic par etiquette (optimisation de code)
// afficher(4,"hello",7,8,"test");
//==============================================================
    // appel de la fonction template variadic brut
// print("hello ","word "," toto");
//==============================================================
/*
std::string str = "essai";
f(str);
*/
//==============================================================
    // appel de la variable inline
// std::cout << var << std::endl;

//==============================================================
    // constexpr
/*
constexpr int test = sum(3, 8);
std::cout << test << std::endl;
*/
//==============================================================
    // static cast float to int
/*
float test = 10.56;
int test_cast;
test_cast = static_cast<int>(test);
std::cout << test_cast << std:: endl;
*/
   // static cast int to float and view number after virgule
/*
int test_1 = 10;
float test_cast_1;
test_cast_1 = static_cast<float>(test_1);
std::cout << std::fixed << std::setprecision(5) << test_cast_1 << std:: endl;
*/
//==============================================================
    // variable template

// std::cout << val<int> << std::endl;

//==============================================================
    // fonction template
/*
int nb1 = 6;
int nb2 = 9;
int resMin;

resMin = min(nb1, nb2);
std::cout << resMin << std::endl;
*/
//==============================================================
    // macro avec paramètres et mot clé inline dans le .h
/*
int nb1 = 6;
int nb2 = 9;
int resMin;
int resMax;

resMin = mini(nb2,nb1);
std::cout << resMin << std::endl;

resMax = max(nb1, nb2);
std::cout << resMax << std::endl;
*/
//==============================================================
    // class et utilisation de unique_ptr avec make_unique

//    my_class h("nicolas");
//    std::cout << h.getName() << std::endl;
/*
    std::string test;
    std::unique_ptr<std::string>ptr = std::make_unique<std::string>("brainman");
    std::cout << "valeur unique_ptr : " << *ptr << std::endl;
    test = std::move(*ptr);
    std::cout << "valeur de la variable test : " << test << std::endl;
    std::cout << "valeur du unique_ptr" << *ptr << std::endl;
*/
//==============================================================

   // permutation de vecteur avec fonction
/*
   std::vector<int>vec1;
   std::vector<int>vec2;
   vec1 = {0,1,2,3};
   vec2 = {7,8,9,10};
   maFonc(vec1,vec2);

   for(int x : vec1){
       std::cout << x << " " << std::endl;
   }
*/
 //==============================================================
    // rvalue et move
/*
    int nb = 10;
    int res,res1;
    res = move_rvalue(10); // avec la methode
    res1 = std::move(nb);   // avec move
    std::cout << res << std::endl;
    std::cout << res1 << std::endl;
*/
    // c++14
/*
 //==============================================================
    // lambda

    auto x = [](int nb1, int nb2) { return nb1 + nb2; };
    std::cout<< x(7,6) << std::endl;
    long pi = 5'341'100'010'171;
    std::cout << pi << std::endl;
*/
//==============================================================
    // quoted

//    std::string valeur = "hello word";
//    std::cout << quoted(valeur) << std::endl;
//==============================================================
    // deprecated

//    std::cout << min(6) << std::endl;

//==============================================================
    // exchange
/*
        int val = 9;
        int res = std::exchange(val, 7);
        std::cout << res << std::endl;
        std::cout << val << std::endl;
*/
//==============================================================
    // C++11
//==============================================================
    // lambda
/*
    auto t = [](int x, int y){return x + y ;};
    std::cout << t(3,4)  << std::endl;
*/
//==============================================================
    // register
/*
    register int a;
    a =11;
    std::cout << a << std::endl;
*/
//==============================================================
    // ++ bool
/*
    bool a=false;
    std::cout << a << std::endl;
    a++;
    std::cout << a << std::endl;
    a++;
    std::cout<<a<<std::endl;
*/
//==============================================================
    // try,throw,catch c++11
/*
    try {
        std::cout << division(10,0);
    } catch (std::string e) {
        std::cerr << "ERREUR : " << e << std::endl;
    }
*/
//==============================================================
    // noexcept // dans cet exemple ne sert à rien //
//    afficher("hello word");
//==============================================================
    // revision pointeur
/*
    int a = 3;                        // creation d'une variable a valeur 3
    std::cout << &a << std::endl;     // affiche l'adresse de a
    int *ptr = &a;                    // creation du pointeur qui pointe sur l'adresse de a
    std::cout << *ptr << std::endl;   // affiche contenue du pointeur donc valeur de a
    std::cout << ptr << std::endl;    // affiche l'adresse de a (le pointeur à pointé a)
    std::cout << &ptr << std::endl;   // affiche l'adresse du poiteur
*/
//==============================================================
    // reference
/*
    int x = 10;
    // ref is a reference to x.
    int &ref = x;
    // Value of x is now changed to 20
    ref = 20;
    std::cout << "x = " << x << std::endl ;
    // Value of x is now changed to 30
    x = 30;
    std::cout << "ref = " << ref << std::endl ;
*/
//==============================================================


return 0;}
