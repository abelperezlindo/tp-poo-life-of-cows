#include "terreno.h"
Terreno::Terreno()
{
    /*Orden de las variables dentro del archivo:
    filas , columnas , vida animal , cuanto mueve ,
    turnos muertos , perdida quieto , perdida al moverse ,
    prob inicial nacer animal , bonus animal, probinicialplanta,
    bonusplanta, cuanto cura la planta, cantidadinicialanimales*/

    fstream archivo_sets("cosaslocas.dat",ios::in|ios::out|ios::binary|ios::app);
    archivo_sets.seekp(sizeof(int)*7,ios::beg);

    archivo_sets.read((char*)&probNacerAnimal,sizeof(int));
    archivo_sets.read((char*)&bonusAnimal,sizeof(int));
    archivo_sets.read((char*)&probNacerPlanta,sizeof(int));
    archivo_sets.read((char*)&bonusPlanta,sizeof(int));

    archivo_sets.close();

    // Estos no se setean desde la UI
    this->queTengo=0;
    this->animalesVecinos=0;
    this->animalesMuertosVecinos=0;

    //Estos se setean desde UI

    srand(time(0));

}

void Terreno::crearAnimal()
{
    unAnimal=new Vaca();
}

void Terreno::matarAnimal()
{
    delete []unAnimal;
}

void Terreno::moverAnmial(Animal *unAnimal1)
{
    unAnimal=unAnimal1;
}

Animal * Terreno::getAnimal()
{
    return unAnimal;
}

void Terreno::crearVegetal()
{
    unVegetal=new Pasto();
}

void Terreno::matarVegetal()
{
    delete []unVegetal;
}

void Terreno::moverVegetal(Vegetal *unVegetal1)
{
    unVegetal=unVegetal1;
}

Vegetal *Terreno::getVegetal()
{
    return unVegetal;
}

void Terreno::cambiarEstado(int aQue)
{
    queTengo=aQue;
}

void Terreno::vecinoAnimal()
{
    animalesVecinos=animalesVecinos+1;
}


void Terreno::vecinoAnimalMuerto()
{
    animalesMuertosVecinos = animalesMuertosVecinos+1;
}

void Terreno::seFueAnimalMuerto()
{
    animalesMuertosVecinos = animalesMuertosVecinos-1;

}

void Terreno::seFueAnimal()
{
    animalesVecinos=animalesVecinos-1;
}


int Terreno::queSos()
{
    return queTengo;
}

int Terreno::getAnimalvivo()
{
    return animalesVecinos;
}

int Terreno::getAnimalmuerto()
{
    return animalesMuertosVecinos;
}


bool Terreno::ruleta(int porc)
{

    int vector[100];
    for(int i = 0 ; i < 100 ; i++ ){
           vector[i]=i;
    }

   int aux,pos;
    for(int i=0; i<100; i++){

          pos=rand()%100; //tomas una posicion aleatoria
          aux = vector[pos]; // intercambias elemento v[i] con otro elemento aleatorio
          vector[pos] = vector[i];
          vector[i] = aux;
    }


   //los numeros de v[] quedan desordenados aleatoriamente
   int numeroRuleta= rand()%100;
   for(int i = 0; i < porc; i++){
          if ( numeroRuleta==vector[i])
              return true;
   }
   return false;
}

int Terreno::tirarRuleta()
{
    int porcentaje;
    if(animalesVecinos>2){
        porcentaje = probNacerAnimal + (bonusAnimal*(animalesVecinos - 2));
        if (porcentaje >= 100){
           return 1;}
        if ((ruleta(porcentaje)) == true)
           return 1;
    }
    else{
        porcentaje = probNacerPlanta + ((bonusPlanta)*animalesMuertosVecinos);
        if (porcentaje >= 100)
            return 3;
        if (ruleta(porcentaje) == true)
            return 3;
    }
    return 0;
}



