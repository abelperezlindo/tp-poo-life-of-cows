#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    /*Orden de las variables dentro del archivo:
    filas , columnas , vida animal , cuanto mueve ,
    turnos muertos , perdida quieto , perdida al moverse ,
    prob inicial nacer animal , bonus animal, probinicialplanta,
    bonusplanta, cuanto cura la planta, cantidadinicialanimales*/

        int aux;

        ofstream  seters("cosaslocas.dat", ios::binary);

        aux=ui->SBFilas->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->SBColumnas->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->SBVidaAnimal->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->SBCuantoMueve->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->SBTurnosMuerto->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->SBPerdidaQuieto->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->SBPerdidaMov->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->SBProbInicial->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->SBProbBonus->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->ProbInicialPlanta->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->BonusPlanta->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->SBCuantoCura->value();
        seters.write((char*)&aux, sizeof(int));
        aux=ui->CantidadInicial->value();
        seters.write((char*)&aux, sizeof(int));

        seters.close();
}
