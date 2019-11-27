#ifndef VACA_H
#define VACA_H

#include "animal.h"
#include <iostream>
#include <fstream>
using namespace std;

class Vaca : public Animal
{
public:
    //se agarra el archivo y se setea lo necesario
    Vaca();
    int getVida();
    void comiste(int alimento); //suma vida
    void teMoviste(); //resta vida
    void estasQuieto(); //resta menos vida
    void estasMuerto(); //resta turnos
    int getMueve();
    int getCaminar();
    int getTurnos();
    int getQuieto();
};

#endif // VACA_H
