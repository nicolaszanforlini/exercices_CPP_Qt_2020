#ifndef MERE_H
#define MERE_H

#include <iomanip>
#include <iostream>
#include <memory>

using namespace std;

class Fils;
class Fille;

// class Mere

class Mere
{    
private:
    shared_ptr<Fils>fils;
    weak_ptr<Fille>fille;

public:
    Mere();
    ~Mere(){cout << "destruction mère"<<endl;}

    void setFils(shared_ptr<Fils>f){this->fils=f;}
    void setFille(shared_ptr<Fille>fi){this->fille=fi;}
};

// class Fils

class Fils
{
private:
    shared_ptr<Mere>mere;

public:
    Fils(shared_ptr<Mere>m):mere(m){}
    ~Fils(){cout << "destruction fils" <<endl;}
};

// class Fille

class Fille
{
private:
    shared_ptr<Mere>mere;

public:
    Fille(shared_ptr<Mere>m):mere(m){}
    ~Fille(){cout << "destruction fille" <<endl;}
};






#endif // MERE_H
