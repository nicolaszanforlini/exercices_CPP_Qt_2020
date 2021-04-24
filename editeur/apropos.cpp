#include "apropos.h"
#include "ui_apropos.h"

aPropos::aPropos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aPropos)
{
    ui->setupUi(this);
    this->setWindowTitle("CARTMAN TITLE !!!");
    QPixmap pix = QPixmap(":/logo/Cartman.jpg");
    ui->lblImage->setPixmap(pix);
    ui->lblImage->setScaledContents( true );
}

aPropos::~aPropos()
{
    delete ui;
}
