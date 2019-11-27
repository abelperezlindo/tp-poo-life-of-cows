#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
protected:
    int vida; //o energia
    int caminar; //lo que pierde al hacerlo
    int quieto; //lo que pierde al hacerlo
    int turnos; //los turnos actuales antes de dejar una planta
    int cuantoMueve; //cuanto se mueve

public:
    //se agarra el archivo y se setea lo necesario
    Animal();
    virtual ~Animal();
    virtual void comiste(int alimento)=0; //suma vida
    virtual void teMoviste()=0; //resta vida
    virtual void estasQuieto()=0; //resta menos vida
    virtual void estasMuerto()=0; //resta turnos
    virtual int getMueve()=0;
    virtual int getVida()=0;
    virtual int getCaminar()=0;
    virtual int getTurnos()=0;
    virtual int getQuieto()=0;
};


#endif // ANIMAL_H
