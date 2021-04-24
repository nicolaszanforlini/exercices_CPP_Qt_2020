#ifndef COMPTE_BANCAIRE_H
#define COMPTE_BANCAIRE_H
#include <QObject>


class compte_bancaire : public QObject
{
    Q_OBJECT

private:
    double solde;

public:
    explicit compte_bancaire(QObject *parent = nullptr);
    void crediter(double);
    void debiter(double);

    double getSolde();

signals:
    void debi(double);

public slots:

};




#endif // COMPTE_BANCAIRE_H



