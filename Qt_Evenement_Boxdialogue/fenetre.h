#ifndef FENETRE_H
#define FENETRE_H

#include <QWidget>
#include <QSlider>
#include <QApplication>
#include <QMessageBox>
#include <QPushButton>
#include <QInputDialog>
#include <QString>



class Fenetre: public QWidget
{
    Q_OBJECT

private:
//    QSlider *slider;
//    QSlider *sliderH;
    QPushButton *btn;


public:
    Fenetre();

public slots:
//    void changer_largeur(int width);
//    void changer_hauteur(int heidth);

    void ouvrirdialogue();


signals:

//    void max();


};

#endif // FENETRE_H
