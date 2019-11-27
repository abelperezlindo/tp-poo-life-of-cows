#ifndef PASTO_H
#define PASTO_H
//#include <QFile>
#include <QDataStream>
#include "vegetal.h"
#include <iostream>
#include <fstream>
using namespace std;

class Pasto: public Vegetal
{
public:

    Pasto();
    int getCuantoCuro();
};


#endif // PASTO_H
