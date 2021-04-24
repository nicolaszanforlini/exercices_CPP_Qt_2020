#include "mainwindow.h"
#include "fenetre.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
/*
    Fenetre f;
    f.show();

    Fenetre _f(500,600);
    _f.show();
*/

    Fenetre f_b;
    f_b.show();




    return a.exec();
}




