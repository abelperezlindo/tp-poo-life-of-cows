/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *gridLayoutWidget;
    QGridLayout *GridMatriz;
    QWidget *layoutWidget;
    QGridLayout *GridBotones;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *PlayButton;
    QPushButton *StopButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(543, 450);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 0, 521, 351));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 349));
        gridLayoutWidget = new QWidget(scrollAreaWidgetContents);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 501, 331));
        GridMatriz = new QGridLayout(gridLayoutWidget);
        GridMatriz->setSpacing(6);
        GridMatriz->setContentsMargins(11, 11, 11, 11);
        GridMatriz->setObjectName(QStringLiteral("GridMatriz"));
        GridMatriz->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(scrollAreaWidgetContents);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 60, 251, 211));
        GridBotones = new QGridLayout(layoutWidget);
        GridBotones->setSpacing(6);
        GridBotones->setContentsMargins(11, 11, 11, 11);
        GridBotones->setObjectName(QStringLiteral("GridBotones"));
        GridBotones->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        GridBotones->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);

        GridBotones->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        GridBotones->addWidget(pushButton_3, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        PlayButton = new QPushButton(centralWidget);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));
        PlayButton->setGeometry(QRect(260, 370, 88, 21));
        StopButton = new QPushButton(centralWidget);
        StopButton->setObjectName(QStringLiteral("StopButton"));
        StopButton->setGeometry(QRect(370, 370, 88, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 543, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Setear", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Listo!!", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Sobre el juego...", 0));
        PlayButton->setText(QApplication::translate("MainWindow", "Play", 0));
        StopButton->setText(QApplication::translate("MainWindow", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
