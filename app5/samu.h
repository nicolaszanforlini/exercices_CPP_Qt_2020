#ifndef SAMU_H
#define SAMU_H
#include <QString>
#include <QDebug>
#include <QObject>

class Samu : public QObject
{
    Q_OBJECT
public:
    explicit Samu(QObject *parent = 0);

signals:

public slots:
    void on_accident(QString);
};

#endif // SAMU_H
