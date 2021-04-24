#include "fenetre.h"

Fenetre::Fenetre()
{
    /*
    setFixedSize(200,300);

    slider = new QSlider(Qt::Horizontal,this);
    slider->setGeometry(20,40,150,20);
    slider->setRange(200,600);

    sliderH = new QSlider(Qt::Vertical,this);
    sliderH->setGeometry(10,100,50,150);
    sliderH->setRange(500,600);
    */

    setFixedSize(400,600);



    btn = new QPushButton("hello",this);

    connect(btn,SIGNAL(clicked()),this,SLOT(ouvrirdialogue()));

    /*
    QObject::connect(slider,SIGNAL(valueChanged(int)),this,SLOT(changer_largeur(int)));
    QObject::connect(sliderH,SIGNAL(valueChanged(int)),this,SLOT(changer_hauteur(int)));
    QObject::connect(this,SIGNAL(max()),qApp,SLOT(quit()));
    */
}

void Fenetre::ouvrirdialogue()
{
    QString monPrenom;
    bool ok = false;
    monPrenom = QInputDialog::getText(this,"nom","comment t'appele tu ?",QLineEdit::Normal,QString(),&ok);
    if(ok && !monPrenom.isEmpty()){
        QMessageBox::information(this,"prenom","salut "+monPrenom+" ça va !");
        btn->setText(monPrenom);
    }else{
        QMessageBox::critical(this,"error","fermer");
    }
}



/*
void Fenetre::changer_largeur(int width)
{
    setFixedSize(width,300);
    if(width==600){
        emit max();
    }
}

void Fenetre::changer_hauteur(int heidth)
{
    setFixedSize(200,heidth);
}
*/




