#include "caloryformula.h"

enum SlopeType {
    NEG5 = 0,
    NEG4 = 1,
    NEG3 = 2,
    NEG2 = 3,
    NEG1 = 4,
    LEVEL = 5,
    POS1 = 6,
    POS2 = 7,
    POS3 = 8,
    POS4 = 9,
    POS5 = 10,

};

CaloryFormula::CaloryFormula()
{
    a = 0.0215;
    b = 0.1765;
    c = 0.8710;
    d = 1.4577;
}

double CaloryFormula::A()
{
    return a;
}

double CaloryFormula::B()
{
    return b;
}

double CaloryFormula::C()
{
    return c;
}

double CaloryFormula::D()
{
    return d;
}

void CaloryFormula::changeSlope(int index)
{
    switch (index)
    {
    case NEG5:
        a = 0.0251;
        b = 0.2157;
        c = 0.7888;
        d = 1.2957;
        break;

    case NEG4:
        a = 0.0244;
        b = 0.2079;
        c = 0.8053;
        d = 1.3281;
        break;

    case NEG3:
        a = 0.0237;
        b = 0.2000;
        c = 0.8217;
        d = 1.3605;
        break;

    case NEG2:
        a = 0.0230;
        b = 0.1922;
        c = 0.8382;
        d = 1.3929;
        break;

    case NEG1:
        a = 0.0222;
        b = 0.1844;
        c = 0.8546;
        d = 1.4253;
        break;

    case POS1:
        a = 0.0171;
        b = 0.1062;
        c = 0.6080;
        d = 1.8600;
        break;

    case POS2:
        a = 0.0184;
        b = 0.1134;
        c = 0.6566;
        d = 1.9200;
        break;

    case POS3:
        a = 0.0196;
        b = 0.1205;
        c = 0.7053;
        d = 1.9800;
        break;

    case POS4:
        a = 0.0208;
        b = 0.1277;
        c = 0.7539;
        d = 2.0400;
        break;

    case POS5:
        a = 0.0221;
        b = 0.1349;
        c = 0.8025;
        d = 2.1000;
        break;

        //Level slope
    default:
        a = 0.0215;
        b = 0.1765;
        c = 0.8710;
        d = 1.4577;
    }
}

