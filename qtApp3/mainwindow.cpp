#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    layoutVertical = new QVBoxLayout();
    button1 = new QPushButton("button 1");
    button2 = new QPushButton("boutton 2");
    button3 = new QPushButton("button 3");

    layoutVertical->addWidget(button1);
    layoutVertical->addWidget(button2);
    layoutVertical->addWidget(button3);

    mainWidget = new QWidget();
    mainWidget->setLayout(layoutVertical);

    this->setCentralWidget(mainWidget);

    this->connect(button1,SIGNAL(clicked()),this,SLOT(close()));

    mnuBar = new QMenuBar(this);
    mnuFichier = mnuBar-> addMenu("&Fichier");

    actionQuitter = new QAction("&Quitter");
    actionQuitter->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_X));
    actionQuitter->setStatusTip("quitter appli");
    actionQuitter->setIcon(QIcon(":/icone/qt_quitter.jpeg"));

    mnuFichier->addAction(actionQuitter);

    this->connect(actionQuitter,SIGNAL(triggered()),this,SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
