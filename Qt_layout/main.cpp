#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QBoxLayout>
#include <QGridLayout>
#include <QFormLayout>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget fenetre;

    QPushButton *btn = new QPushButton("Bonjour", &fenetre);
    QPushButton *btn1 = new QPushButton("Bonjour1", &fenetre);
    QPushButton *btn2 = new QPushButton("Bonjour2", &fenetre);
    QPushButton *btn3 = new QPushButton("!!!", &fenetre);
    QPushButton *btn4 = new QPushButton("2 places et test test \n test", &fenetre);
    QPushButton *btnfinal = new QPushButton("fermer", &fenetre);


    QGridLayout *boxBtn = new QGridLayout;
    boxBtn->addWidget(btn,0,0);
    boxBtn->addWidget(btn1,1,0);
    boxBtn->addWidget(btn2,0,1);
    boxBtn->addWidget(btn3,1,1);
    boxBtn->addWidget(btn4,2,0,2,2);
    boxBtn->addWidget(btnfinal,3,3);

    fenetre.setLayout(boxBtn);

    fenetre.show();

    fenetre.setEnabled(false);  // rendre la fenetre inactive

    QFormLayout *form = new QFormLayout;

    QLineEdit *prenom = new QLineEdit;
    QLineEdit *nom = new QLineEdit;
    QLineEdit *age = new QLineEdit;

    form->addRow("votre nom",nom);
    form->addRow("votre prenom",prenom);
    form->addRow("votre age",age);

    QWidget fenetreFormulaire;

    QBoxLayout *grille = new QVBoxLayout;
    QPushButton *quitter = new QPushButton("Quitter");
    QWidget::connect(quitter,SIGNAL(clicked()),&app,SLOT(quit()));

    grille->addLayout(form);
    grille->addWidget(quitter);

    fenetreFormulaire.setLayout(grille);
    fenetreFormulaire.show();


    return app.exec();
}
