#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "compte_bancaire.h"



MainWindow::MainWindow(QWidget *parent)
    QMainWindow(parent),ui(new Ui::MainWindow);
{
ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonPlus_clicked()
{
    compte->crediter(ui->lineEditMontant->text().toDouble());
    ui->labelSolde->setText(QString::number(compte->getSolde()));
}

void MainWindow::on_pushButtonMoin_clicked()
{
    compte->debiter(ui->lineEditMontant->text().toDouble());
    ui->labelSolde->setText(QString::number(compte->getSolde()));
}

void MainWindow::on_debi(double solde)
{
    ui->labelSolde->setText("vous etes à "+QString::number(solde));
}




