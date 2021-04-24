#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QMenuBar>
#include <QPushButton>
#include <QVBoxLayout>
#include <QProgressBar>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QMenuBar *bar;
    QMenu *menu;
    QPushButton *button;
    QVBoxLayout *layout;
    QWidget *widgets;
    QWidget *fenetre;
    QPushButton *btn;








};
#endif // MAINWINDOW_H
