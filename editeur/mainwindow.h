#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QTextEdit>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QFont>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_comboBoxCouleur_currentTextChanged(const QString &arg1);
    void on_actionouvrir_triggered();
    void on_actionenregistrer_triggered();
    void on_actiona_propos_triggered();
    void on_checkBoxItalique_stateChanged(int arg1);
    void on_checkBoxGras_stateChanged(int arg1);
    void on_radioButtonArial_clicked();

    void on_radioButtonBlackletter_clicked();

    void on_radioButtonTime_clicked();

private:
    Ui::MainWindow *ui;
};




#endif // MAINWINDOW_H





