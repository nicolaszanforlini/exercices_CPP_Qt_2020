#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "surveillant.h"
#include "samu.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Surveillant * proviseur = new Surveillant();

    Samu * samu = new Samu();

    connect(proviseur,SIGNAL(signaler(QString)),samu, SLOT(on_accident(QString)));

    proviseur->signaler("12 rue testing");


}
