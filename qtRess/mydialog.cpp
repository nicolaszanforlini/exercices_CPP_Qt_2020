#include "mydialog.h"
#include "ui_mydialog.h"

myDialog::myDialog(QString text,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDialog)
{
    ui->setupUi(this);
    ui->label_2->setText(text);
}

myDialog::~myDialog()
{
    delete ui;
}
