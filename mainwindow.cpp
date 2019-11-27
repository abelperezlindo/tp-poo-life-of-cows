#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->timer = new QTimer(this);
    connect(this->timer,SIGNAL(timeout()), this, SLOT(on_PlayButton_clicked()));
    ui->pushButton_2->setDisabled(true);
    ui->PlayButton->setVisible(false);
    ui->StopButton->setVisible(false);







}

MainWindow::~MainWindow()
{
    delete ui;


}

void MainWindow::on_pushButton_clicked()
{
    Dialog * seteos = new Dialog(this);

    seteos->setWindowTitle("Ventana de seteos");

    seteos->setModal(true);

    seteos->show();

    this->ui->pushButton_2->setDisabled(false);

}

void MainWindow::on_pushButton_2_clicked()
{

    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);

    zeuz=new Dios();
    this->f = zeuz->getFila();
    this->c = zeuz->getColumna();
    this->pixea = new Imagenes();
    this->pLabel = new QLabel* [f];

    for (int i=0; i<f ;i++){

          this->pLabel[i] = new QLabel[c];
    }

    for (int i=0; i<f ;i++){
        for(int j=0; j<c ;j++)
        {


            int p = zeuz->getTip(i,j);

            this->a=pixea->getPix(p);

            this->pLabel[i][j].setPixmap(*a);
            this->ui->GridMatriz->addWidget(&this->pLabel[i][j],i,j);
            this->pLabel[i][j].show();

        }
    }


    zeuz->recorrerMundo();

    ui->PlayButton->setVisible(true);
    ui->StopButton->setVisible(true);
}

void MainWindow::on_PlayButton_clicked()
{
    //this->timer = new QTimer(this);
    //connect(this->timer,SIGNAL(timeout()), this, SLOT(on_PlayButton_clicked()));
    for (int i=0; i<f ;i++){
        for(int j=0; j<c ;j++){

           ;
            int p = zeuz->getTip(i,j);

            this->a=pixea->getPix(p);

            this->pLabel[i][j].setPixmap(*a);
            this->ui->GridMatriz->addWidget(&this->pLabel[i][j],i,j);
            this->pLabel[i][j].show();
            this->ui->GridMatriz->removeWidget(&this->pLabel[i][j]);
        }
    }


    zeuz->recorrerMundo();
    this->timer->start(0500);
}

void MainWindow::on_StopButton_clicked()
{
    this->timer->stop();
}


void MainWindow::on_pushButton_3_clicked()
{
    about *sobre = new about(this);
    sobre->setWindowTitle("sobre el juego");
    sobre->setModal(true);
    sobre->show();
}
