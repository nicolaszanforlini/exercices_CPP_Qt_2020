#include "zfraction.h"

Zfraction::Zfraction():a(0),b(0)
{
}

Zfraction::Zfraction(int a):a(a),b(1)
{
}

Zfraction::Zfraction(int a, int b):a(a)
{
    this->setDenominateur(b);
}

void Zfraction::setDenominateur(int d)
{
    if(d==0)std::cout << "error denominator";
    else this->b = d;
}

bool Zfraction::est_egal(const Zfraction &z)const
{
    if(this->a==z.a && this->b==z.b)return true;
    else return false;
}

double Zfraction::calcul()
{
    double calc = a / b;
    this->resultat = calc;
    return this->resultat;
}

void Zfraction::afficher_fraction(std::ostream &flux)const
{
    flux << a << "/" << b;
}

Zfraction Zfraction::operator+=(const Zfraction &z)
{
    Zfraction res;
    res = (a * z.b) + (b * z.a) / (a * z.b);
    return *this;
}

bool operator==(const Zfraction &y, const Zfraction &z)
{
    return y.est_egal(z);
}

std::ostream &operator<<(std::ostream &flux, const Zfraction &f)
{
    f.afficher_fraction(flux);
    return flux;
}



double operator-(Zfraction &y, Zfraction &z)
{
    double res;
    res = y.calcul() - z.calcul();
    return res;
}

double operator/(Zfraction &y, Zfraction &z)
{
    double res;
    res = y.calcul() / z.calcul();
    return res;
}

double operator*(Zfraction &y, Zfraction &z)
{
    double res;
    res = y.calcul() * z.calcul();
    return res;
}

bool operator<(Zfraction &y,Zfraction &z)
{
    return y.calcul() < z.calcul();
}
