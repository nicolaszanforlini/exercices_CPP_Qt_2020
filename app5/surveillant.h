#ifndef SURVEILLANT_H
#define SURVEILLANT_H
#include <QString>
#include <QObject>


class Surveillant : public QObject
{
    Q_OBJECT
public:
    explicit Surveillant(QObject *parent = 0);
    void accident();

signals:
    void signaler(QString);

public slots:
};

#endif // SURVEILLANT_H



