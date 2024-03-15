#ifndef CALORYFORMULA_H
#define CALORYFORMULA_H

#include <QObject>


class CaloryFormula : public QObject
{
    Q_OBJECT
public:
    CaloryFormula();
    double A();
    double B();
    double C();
    double D();
    void changeSlope(int index);


private:
    double a;
    double b;
    double c;
    double d;

};

#endif // CALORYFORMULA_H
