#ifndef TERRENO_H
#define TERRENO_H
//#include <QFile>
#include <QDataStream>
#include "animal.h"
#include "vaca.h"
#include "vegetal.h"
#include "pasto.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Terreno
{
private:
    //que hay encima
    int queTengo;//0.nada / 1.animal / 2.animal muerto / 3.vegetal

    //al rededores
    int animalesVecinos; //para prob de nacimiento animal

    int animalesMuertosVecinos; //para prob de crecimiento vegetal

    //que puede suceder, posible nueva clase ruleta de la vida COMING SON
    int probNacerPlanta;
    int probNacerAnimal;
    int bonusAnimal;
    int bonusPlanta;

    //manejo de weas
    Animal * unAnimal;
    Vegetal * unVegetal;
    bool ruleta(int porc);

public:
    Terreno();//Constructor con set por defecto

    //control del animal
    void crearAnimal(); //crea unAnimal en el puntero
    void matarAnimal(); //al pasar los turnos del animal se usa esto para borrar el objeto
    void moverAnmial(Animal * unAnimal1);//obtiene una direccion de memoria y hace que se apunte a ella
    Animal * getAnimal();//otorga la direccion de memoria del animal e iguala el puntero a null

    //control del vegetal
    void crearVegetal();
    void matarVegetal();
    void moverVegetal(Vegetal * unVegetal1);
    Vegetal * getVegetal();

    //control del terreno
    void cambiarEstado(int aQue);//modifica queTengo
    void vecinoAnimal();//suma 1 a animalesVecinos
    void vecinoVegetal();//suma 1 a vegetalesVecinos
    void vecinoAnimalMuerto();
    void seFueAnimalMuerto();
    void seFueAnimal();//resta 1 a animalesVecinos
    void seFueVegetal();//resta 1 a vegetalesVecinos

    //informacion del terreno
    int queSos();//retorna queTengo
    int getAnimalvivo();
    int getAnimalmuerto();
    int tirarRuleta(); //COMING SON =D

};


#endif // TERRENO_H
