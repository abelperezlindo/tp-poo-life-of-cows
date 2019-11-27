#include "pasto.h"

Pasto::Pasto()
{
    /*Orden de las variables dentro del archivo:
    filas , columnas , vida animal , cuanto mueve ,
    turnos muertos , perdida quieto , perdida al moverse ,
    prob inicial nacer animal , bonus animal, probinicialplanta,
    bonusplanta, cuanto cura la planta, cantidadinicialanimales*/

    fstream archivo_sets("cosaslocas.dat",ios::in|ios::out|ios::binary|ios::app);
    archivo_sets.seekp(sizeof(int)*11,ios::beg);
    archivo_sets.read((char*)&(this->cuantoCuro),sizeof(this->cuantoCuro));
    archivo_sets.close();
}

int Pasto::getCuantoCuro()
{
    return this->cuantoCuro;
}
