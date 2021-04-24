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

void MainWindow::on_pushButtonOK_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/nicolas/chinook.db");

    bool ok = db.open();

    if(!ok)qDebug()<<"KO";else
        qDebug()<<"OK";

    QSqlQuery req = QSqlQuery("select lastname,city,"
                              "email from customers"
                              " where postalcode = ?");

    req.addBindValue("75002");
    req.exec();

    while(req.next()){qDebug()<<"nom : " +req.value(0).toString()
                                +"// city : "+req.value(1).toString()
                                +"// mail : "+req.value(2).toString();
    }


    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from albums");
    ui->tableView->setModel(model);



    db.close();
}











