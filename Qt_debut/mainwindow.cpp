#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*
    bar = new QMenuBar(this);
    menu = bar->addMenu("Fichier");

    button = new QPushButton("bouton");
    button->setIcon(QIcon(":/new/prefix1/av.png"));
    layout = new QVBoxLayout();
    widgets = new QWidget();
    widgets->setLayout(layout);
    layout->addWidget(button);

    fenetre = new QWidget();
    fenetre->setFixedSize(200,300);
    btn = new QPushButton("mon bouton",fenetre);
    btn->move(50,60);
    fenetre->show();

    this->setCentralWidget(widgets);
    */

}




MainWindow::~MainWindow()
{
    delete ui;
}




