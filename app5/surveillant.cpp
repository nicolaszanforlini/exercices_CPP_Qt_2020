#include "surveillant.h"

Surveillant::Surveillant(QObject *parent) : QObject(parent)
{

}


void Surveillant::accident(){

    emit signaler("12 rue du test");

}
