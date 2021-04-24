#ifndef FENETRE_H
#define FENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QSlider>
#include <QLCDNumber>
#include <QProgressBar>


class Fenetre : public QWidget
{
private:

    int width;
    int heigth;

    QPushButton *btn_facher;
    QPushButton *btn_sourir;

    QPushButton *zero;
    QProgressBar *progress;
    QSlider *slider;
    
public:
    Fenetre();
    Fenetre(int, int);
};

#endif // FENETRE_H
