#include "dios.h"

Dios::Dios()
{
    fstream archivo_set("cosaslocas.dat",ios::in|ios::binary);

    archivo_set.read((char*)&filas,sizeof(int));
    archivo_set.read((char*)&columnas,sizeof(int));

    mundo = new Terreno* [filas];

    for (int i = 0; i < filas; i++)
        mundo[i] = new Terreno[columnas];

    mundoAux = new Terreno* [filas];

    for (int i = 0; i < filas; i++)
        mundoAux[i] = new Terreno[columnas];

    //animales
    archivo_set.seekp(sizeof(int)*12,ios::beg);
    archivo_set.read((char*)&(this->cantidadAnimalInicial),sizeof(this->cantidadAnimalInicial));
    archivo_set.close();

    //aca hay que hacer una funcion que genere (n=cantidadAnimalinicial) posiciones aleatorias de la matriz que no se repitan
    list<pos> todaspos;
    list<pos>::iterator it;
    pos aux;
    for(int i = 0 ; i< filas ; i ++){
        for(int j=0; j<columnas;j++){
            aux.ip=i; aux.jp=j;
            todaspos.push_back(aux);
        }
    }
    srand(time(0));



    for(int i=0; i<cantidadAnimalInicial;i++)
        {
        int a= todaspos.size()-1;
        int eh= rand()%a;


        it=todaspos.begin();
        advance (it,eh);
        todaspos.erase(it);
       int iq= (*it).ip;
       int jq= (*it).jp;

       mundo[iq][jq].crearAnimal();
       mundo[iq][jq].cambiarEstado(1);


    }
    todaspos.clear();


    /*mundo[0][0].crearAnimal();
    mundo[0][0].cambiarEstado(1);

    mundo[0][1].crearAnimal();
    mundo[0][1].cambiarEstado(1);

    mundo[1][0].crearAnimal();
    mundo[1][0].cambiarEstado(1);

    mundo[1][1].crearAnimal();
    mundo[1][1].cambiarEstado(1);

    mundo[2][1].crearAnimal();
    mundo[2][1].cambiarEstado(1);

    mundo[2][0].crearAnimal();
    mundo[2][0].cambiarEstado(1);

    mundo[2][2].crearAnimal();
    mundo[2][2].cambiarEstado(1);

    mundo[1][2].crearAnimal();
    mundo[1][2].cambiarEstado(1);*/
}

void Dios::recorrerMundo()
{


    int z;
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            switch(mundo[i][j].queSos())
            {
            case 0:
                z=mundoAux[i][j].tirarRuleta();
                modificar(z,i,j);
                switch(z){
                case 1:
                    mundoAux[i][j].crearAnimal();
                    mundo[i][j].cambiarEstado(5);
                    sondear(1,i,j);
                    break;
                case 3:
                    mundoAux[i][j].crearVegetal();
                    mundo[i][j].cambiarEstado(5);
                    sondear(3,i,j);
                    break;
                }
                break;
            case 1:
                i1=i;
                j1=j;
                movAnim(i,j);

                break;

            case 2:
                    auxAnimal = mundo[i][j].getAnimal();
                    if(auxAnimal->getTurnos()>1)
                    {
                    auxAnimal->estasMuerto();
                    modificar(2, i, j);
                    sondear(2, i, j);
                    mundoAux[i][j].moverAnmial(auxAnimal);
                    }
                    else
                   {

                       modificar(3,i,j);
                       mundoAux[i][j].crearVegetal();
                    }
                    break;

            case 3:
                auxVegetal=mundo[i][j].getVegetal();
                mundoAux[i][j].moverVegetal(auxVegetal);
                modificar(3,i,j);
                sondear(3,i,j);
                break;

            default:
                break;
            }
        }
    }
    resetMatrizAux();
}

void Dios::movAnim(int i, int j)
{

    auxAnimal=mundo[i][j].getAnimal();
    i1=i;
    j1=j;
    if((auxAnimal->getVida())>(auxAnimal->getQuieto()))
    {
    //comer
    if(mirarVecinos(3,auxAnimal->getMueve()))
    {
        auxVegetal=mundo[i1][j1].getVegetal();
        auxAnimal->comiste(auxVegetal->getCuantoCuro());
        mundo[i1][j1].cambiarEstado(5);
        modificar(0,i1,j1);
        sondear(-3,i1,j1);
        mundoAux[i][j].moverAnmial(auxAnimal);
        modificar(1,i,j);
        sondear(1,i,j);
        return;
     }

//mover
    if((auxAnimal->getVida())>(auxAnimal->getCaminar()))
    {
      if(mirarVecinos(0,auxAnimal->getMueve())==true)
        {
            auxAnimal->teMoviste();
            mundoAux[i1][j1].moverAnmial(auxAnimal);
            mundo[i1][j1].cambiarEstado(5);
            modificar(1,i1,j1);
            sondear(1,i1,j1);
            return;
        }
    }

//quieto
    auxAnimal->estasQuieto();
    mundoAux[i][j].moverAnmial(auxAnimal);
    modificar(1,i,j);
    sondear(1,i,j);

}
    else
    {
        modificar(2, i, j);
        sondear(2,i,j);
        mundoAux[i][j].moverAnmial(auxAnimal);
    }
}
void Dios::sondear(int queSondeo,int i2 , int j2)
{
    int o=1;
    int u=2;
    for(int i=(i2-o);i<(i2+u);i++)
    {
        for(int j=(j2-o);j<(j2+u);j++)
        {
            if(dentroLimite(i,j))
            {
                switch (queSondeo)
                {
                /*en matriz actual para q otro no lo quiera comer*/

                case -2:
                    mundoAux[i][j].seFueAnimalMuerto();
                    break;
                case -1:
                    mundoAux[i][j].seFueAnimal();
                    break;
                case 1:
                    mundoAux[i][j].vecinoAnimal();
                    break;
                case 2:
                    mundoAux[i][j].vecinoAnimalMuerto();
                    break;

                }
            }
        }
    }
}

void Dios::modificar(int aQue, int i3, int j3)
{
    mundoAux[i3][j3].cambiarEstado(aQue);
}

bool Dios::mirarVecinos(int queBusco, int n)
{

    vector<pos> vecPos;
    srand(time(0));
    int o=n;
    int u=n+1;
    pos aux;

    for(int k=(i1-o);k<(i1+u);k++)
    {
        for(int l=(j1-o);l<(j1+u);l++)
        {
            if((dentroLimite(k,l)==true) && (mundo[k][l].queSos()==queBusco))
            {
                aux.ip=k; aux.jp=l;
                vecPos.push_back(aux);
            }
        }
    }
    if(vecPos.size()<1){return false;}


        else {
        int a= rand()% vecPos.size();
        i1 = vecPos[a].ip;
        j1 = vecPos[a].jp;

        return true;
    }
}

/* recorre, pregunta que es(si es un):
 * 1.animal: -se fija los vecinos del terreno
 *           -si hay plantas: -la busca, obtiene posicion, modifica la posicion (la vuelve vacia), alimenta al animal
 *           -si no hay plantas y hay espacios vacios: -lo busca, obtiene posicion,
 *            obtiene la direccion de memoria del animal, va a la nueva posicion y le otorga la direccion,
 *            vuelve null la anterior, y cambia el estado del nuevo y viejo terreno
 *           -si no hay plantas y no hay espacios vacios: le dice al animal que se quede quieto
 *
 * 2.muerto: -resta turnos
 *
 * 3.vegetal: -...
 *
 * 0.terreno vacio: -tira la ruleta esta retorna si salio que si en planta o animal:
 *                  -si sale animal: se crea un nuevo animal y se lo otorga al puntero y se cambia el estado
 *                  -si sale vegetal: se cambia el estado
 *                  -si no sale nada, no se hace nada.
*/

bool Dios::dentroLimite(int f, int c)
{
    if((f<0) || (c<0) || (f>=filas) || (c>=columnas))
    {
        return false;
    }

    else
    {
        return true;
    }
}

void Dios::resetMatrizAux()
{
    delete [] mundo;//elimino viejo mundo

    mundo=mundoAux;//igualo punteros

    mundoAux=0;

    mundoAux = new Terreno* [filas];//recreo el aux

    for (int i = 0; i < filas; i++)
        mundoAux[i] = new Terreno[columnas];
}

void Dios::guardarPartida()
{
    ofstream out("save.dat",ios::binary);
    ofstream out2("saveVaca.dat",ios::binary);
    ofstream out3("saveSet.dat",ios::binary);
    ifstream in("cosaslocas.dat",ios::binary);
    int aux;

    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            out.write((char*)mundo[i][j].queSos(),sizeof(int));

            if(mundo[i][j].queSos()==1||mundo[i][j].queSos()==2)
            {
                auxAnimal=mundo[i][j].getAnimal();
                out2.write((char*)&auxAnimal,sizeof(Animal));
            }
        }
    }

    in.read((char*)&aux,sizeof(int));
    out3.write((char*)&aux,sizeof(int));
    do
    {
        in.read((char*)&aux,sizeof(int));
        out3.write((char*)&aux,sizeof(int));
    }while(!in.eof());
}

void Dios::cargarPartida()
{
    ifstream in("save.dat",ios::binary);
    ifstream in2("saveVaca.dat",ios::binary);
    int aux;

    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            in.read((char*)&aux,sizeof(int));
            mundo[i][j].cambiarEstado(aux);

            if(mundo[i][j].queSos()==1||mundo[i][j].queSos()==2)
            {
                in2.read((char*)&auxAnimal,sizeof(Animal));
                mundo[i][j].moverAnmial(auxAnimal);
            }
        }
    }
}

void Dios::cargarSet()
{
    ifstream in3("saveSet.dat",ios::binary);
    ofstream out("cosaslocas.dat",ios::binary);
    int aux;

    in3.read((char*)&aux,sizeof(int));
    out.write((char*)&aux,sizeof(int));
    do
    {
        in3.read((char*)&aux,sizeof(int));
        out.write((char*)&aux,sizeof(int));
    }while(!in3.eof());
}

int Dios::getTip(int i, int j)
{
    return mundo[i][j].queSos();

}
int Dios::getFila()
{
    return this ->filas;
}

int Dios::getColumna()
{
    return this->columnas;
}

