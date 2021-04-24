#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "compte_bancaire.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    compte_bancaire *compte;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonPlus_clicked();

    void on_pushButtonMoin_clicked();

    void on_debi(double);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
