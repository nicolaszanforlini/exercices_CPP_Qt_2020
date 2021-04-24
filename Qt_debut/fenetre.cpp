#include "fenetre.h"

Fenetre::Fenetre() : QWidget()
{
    setFixedSize(300,200);

    progress = new QProgressBar(this);
    progress->setGeometry(10,60,150,20);
    progress->move(10, 20);

    zero = new QPushButton("reset",this);
    zero->move(170,20);

    slider = new QSlider(Qt::Horizontal, this);
    slider->setGeometry(10, 60, 150, 20);

    connect(slider,SIGNAL(valueChanged(int)),progress,SLOT(setValue(int)));
    QObject::connect(zero,SIGNAL(clicked()),progress,SLOT(reset()));

}

Fenetre::Fenetre(int w,int h)
{
    setFixedSize(w,h);

    btn_facher = new QPushButton("facher",this);
    btn_facher->setFont(QFont("Courier",20));
    btn_facher->setIcon(QIcon(":/new/prefix1/facher.png"));
    btn_facher->move(20,40);

    btn_sourir = new QPushButton("sourir",this);
    btn_sourir->setFont(QFont("Courier",20));
    btn_sourir->setIcon(QIcon(":/new/prefix1/sourir.png"));
    btn_sourir->move(150,40);

    QObject::connect(btn_facher,SIGNAL(clicked()),qApp,SLOT(quit()));
}







