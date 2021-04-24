#include "mainwindow.h"
#include "fenetre.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    fenetre f;
    f.show();




    return a.exec();
}
