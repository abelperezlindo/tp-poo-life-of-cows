#include "imagenes.h"

Imagenes::Imagenes()
{
    int x=25;
    int y=x;
    // <<<< Carga imagen de la vaquita >>>

    this->pixVaca = new QPixmap("C:/Users/NOBLEX/Pictures/tp poo noviembre/Las vacas2/images/botonvaca.png");
    *pixVaca = pixVaca->scaled(x, y, Qt::IgnoreAspectRatio, Qt::FastTransformation);

    //<<<< Carga imagen de la planta >>>

    this->pixPlant = new QPixmap("C:/Users/NOBLEX/Pictures/tp poo noviembre/Las vacas2/images/botonplanta.png");
    *pixPlant = pixPlant->scaled(x, y, Qt::IgnoreAspectRatio, Qt::FastTransformation);

    //<<<< Carga imagen vacio >>>>

    this->pixVacio = new QPixmap("C:/Users/NOBLEX/Pictures/tp poo noviembre/Las vacas2/images/botonvacio.png");
    *pixVacio = pixVacio->scaled(x,y, Qt::IgnoreAspectRatio, Qt::FastTransformation);

    //<<<< Carga imagen vaca muerta >>>>

    this->pixVacaMu = new QPixmap("C:/Users/NOBLEX/Pictures/tp poo noviembre/Las vacas2/images/botonvacamuerta.png");
    *pixVacaMu = pixVacaMu->scaled(x, y, Qt::IgnoreAspectRatio, Qt::FastTransformation);

}

QPixmap* Imagenes::getPix(int x)
{
    switch (x) {
    case 0:
        return this->pixVacio;
        break;
    case 1:
        return this->pixVaca;
        break;
    case 2:
        return this->pixVacaMu;
        break;
    case 3:
        return this->pixPlant;
        break;
    default:
        break;
    }
}
