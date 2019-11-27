#ifndef DIOS_H
#define DIOS_H
#include "terreno.h"
#include <iostream>
//#include <QFile>
#include <QDataStream>
#include<vector>
#include <list>
#include <fstream>
using namespace std;

struct pos
{
    int ip;
    int jp;
};

class Dios
{
private:

    int filas;
    int columnas;

    int i1;
    int j1;

    Animal * auxAnimal;
    Vegetal * auxVegetal;
    Terreno **mundo;
    Terreno **mundoAux;

    bool dentroLimite(int f, int c);
    int cantidadAnimalInicial;

public:
    Dios ();

    //obtiene la direccion de memoria del mismo y se la da a la casilla a la que 'se mueve'
    void movAnim(int i, int j);
    //le cuenta al terreno que tiene al rededor
    void sondear(int queSondeo, int i2, int j2);
    //le cuenta al terreno que posee ahora
    void modificar(int aQue, int i3, int j3);
    //recorre y busca lo que precise obteniendo en que posicion esta, elije random
    bool mirarVecinos(int queBusco, int n);
    //recorre el mundo y efectua las operaciones necesarias para la ejecucion del proyecto
    void recorrerMundo();
    int getTip (int i, int j);
    int getFila();
    int getColumna();
    void resetMatrizAux();
    void guardarPartida();
    void cargarPartida();
    void cargarSet();
};


#endif // DIOS_H
