#include "samu.h"
#include <QDebug>

Samu::Samu(QObject *parent) : QObject(parent)
{

}




void Samu::on_accident(QString adr){

    qDebug()<<"signalement" + adr;
}



