#ifndef IMAGENES_H
#define IMAGENES_H
#include <QPixmap>

class Imagenes
{
    private:
            QPixmap *pixVaca;
            QPixmap *pixPlant;
            QPixmap *pixVacaMu;
            QPixmap *pixVacio;
    public:
            Imagenes();
            QPixmap *getPix(int x);
};

#endif // IMAGENES_H
