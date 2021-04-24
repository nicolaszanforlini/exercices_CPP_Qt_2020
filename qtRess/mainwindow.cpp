#include "mainwindow.h"
#include "ui_mainwindow.h"
# include "mydialog.h"

#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix = QPixmap(":/icones/qt_quitter.jpeg");
    ui->lblImage->setPixmap(pix);
    ui->lblImage->setScaledContents( true );

    QSettings monSetting("mesParam.ini",QSettings::IniFormat);
    QString slogant = monSetting.value("Slogant").toString();
    this->setWindowTitle(slogant);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_buttonMsg_clicked()
{
    myDialog *dialog = new myDialog(ui->lineMsg->text(),this);
    dialog->exec();
}

void MainWindow::on_buttonEnregistrer_clicked()
{
    QSettings monSetting("mesParam.ini",QSettings::IniFormat);
    monSetting.setValue("Slogant","just do it");
}
