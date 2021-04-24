#include "compte_bancaire.h"


double compte_bancaire::getSolde() const
{
    return solde;
}

compte_bancaire::compte_bancaire(QObject *parent) : QObject(parent)
{
    this->solde = 1000;
}

void compte_bancaire::crediter(double c){
    this->solde+=c;
}
void compte_bancaire::debiter(double d){
    this->solde-=d;
    if(this->solde<0){
        emit debi(this->solde);
    }
}





