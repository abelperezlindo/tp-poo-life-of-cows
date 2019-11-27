#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <iostream>
#include <stdlib.h>
#include "dios.h"
#include "dialog.h"
#include "about.h"
#include "animal.h"
#include "terreno.h"
#include "imagenes.h"
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_PlayButton_clicked();

    void on_StopButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    int f,c;
    QPixmap *a;
    Dios *zeuz;
    QLabel **pLabel;
    Imagenes *pixea;
    QTimer *timer;


};

#endif // MAINWINDOW_H
