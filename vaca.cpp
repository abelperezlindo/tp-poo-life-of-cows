#include "vaca.h"
#include <QFile>
#include <QDataStream>
Vaca::Vaca()
{
    /*Orden de las variables dentro del archivo:
    filas , columnas , vida animal , cuanto mueve ,
    turnos muertos , perdida quieto , perdida al moverse ,
    prob inicial nacer animal , bonus animal, probinicialplanta,
    bonusplanta, cuanto cura la planta, cantidadinicialanimales*/

    fstream archivo_sets("cosaslocas.dat", ios::in | ios::binary);

    archivo_sets.seekg(sizeof(int)*2,ios::beg);

    archivo_sets.read((char*)&vida,sizeof(int));
    archivo_sets.read((char*)&cuantoMueve,sizeof(int));
    archivo_sets.read((char*)&turnos,sizeof(int));
    archivo_sets.read((char*)&quieto,sizeof(int));
    archivo_sets.read((char*)&caminar,sizeof(int));
    archivo_sets.close();
}

int Vaca::getVida()
{
    return vida;
}

void Vaca::comiste(int alimento)
{
    vida=vida+alimento;
}

void Vaca::teMoviste()
{
    vida=vida-caminar;
}

void Vaca::estasQuieto()
{
    vida=vida-quieto;
}

void Vaca::estasMuerto()
{
    turnos=turnos-1;
}

int Vaca::getMueve()
{
    return cuantoMueve;
}

int Vaca::getCaminar()
{
    return caminar;
}

int Vaca::getTurnos()
{
    return turnos;
}

int Vaca::getQuieto()
{
    return quieto;
}
