#include "apropos.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"


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
void MainWindow::on_comboBoxCouleur_currentTextChanged(const QString &arg1)
{

}
void MainWindow::on_actionouvrir_triggered()
{
    QFile file(":/new/prefix1/fichier.txt");
    file.open(QIODevice::ReadOnly);
    ui->afficheText->insertPlainText(file.readAll());
}
void MainWindow::on_actionenregistrer_triggered()
{

}
void MainWindow::on_actiona_propos_triggered()
{
    aPropos *dial = new aPropos();
    dial->exec();
}
void MainWindow::on_checkBoxItalique_stateChanged(int arg1)
{
    QFont font;
    if(ui->checkBoxItalique->isChecked()==1){
    font.setItalic(true);
    ui->afficheText->setFont(font);
    }else{
        font.setItalic(false);
        ui->afficheText->setFont(font);
    }
}
void MainWindow::on_checkBoxGras_stateChanged(int arg1)
{
    QFont font;
    if(ui->checkBoxGras->isChecked()==1){
    font.setBold(true);
    ui->afficheText->setFont(font);
    }else{
        font.setBold(false);
        ui->afficheText->setFont(font);
    }
}
void MainWindow::on_radioButtonArial_clicked()
{
    QFont f("Arial");
    if(ui->radioButtonArial->isChecked()==1){
    ui->afficheText->setFont(f);
    }
}
void MainWindow::on_radioButtonBlackletter_clicked()
{
    QFont f("Courier");
    if(ui->radioButtonBlackletter->isChecked()==1){
    ui->afficheText->setFont(f);
    }
}
void MainWindow::on_radioButtonTime_clicked()
{
    QFont f("Times");
    if(ui->radioButtonTime->isChecked()==1){
    ui->afficheText->setFont(f);
    }
}



