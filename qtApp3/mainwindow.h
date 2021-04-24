#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QVBoxLayout>
#include <qpushbutton.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QVBoxLayout *layoutVertical;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QMenuBar *mnuBar;
    QMenu *mnuFichier;
    QAction *actionQuitter;
    QWidget *mainWidget;


};

#endif // MAINWINDOW_H
