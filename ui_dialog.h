/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *SBFilas;
    QLabel *label_2;
    QSpinBox *SBColumnas;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QSpinBox *SBVidaAnimal;
    QLabel *label_4;
    QSpinBox *SBCuantoMueve;
    QLabel *label_5;
    QSpinBox *SBTurnosMuerto;
    QLabel *label_13;
    QSpinBox *CantidadInicial;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget3;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *SBProbBonus;
    QSpinBox *SBProbInicial;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget4;
    QFormLayout *formLayout_4;
    QLabel *label_8;
    QSpinBox *SBPerdidaQuieto;
    QLabel *label_9;
    QSpinBox *SBPerdidaMov;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget5;
    QFormLayout *formLayout_5;
    QLabel *label_10;
    QSpinBox *SBCuantoCura;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_6;
    QSpinBox *ProbInicialPlanta;
    QLabel *label_12;
    QSpinBox *BonusPlanta;
    QLabel *label_11;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(950, 632);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 580, 231, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(50, 10, 211, 571));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 10, 191, 551));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 161, 48));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        SBFilas = new QSpinBox(layoutWidget1);
        SBFilas->setObjectName(QStringLiteral("SBFilas"));
        SBFilas->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, SBFilas);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        SBColumnas = new QSpinBox(layoutWidget1);
        SBColumnas->setObjectName(QStringLiteral("SBColumnas"));
        SBColumnas->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, SBColumnas);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 70, 181, 121));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 161, 101));
        formLayout_2 = new QFormLayout(layoutWidget2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        SBVidaAnimal = new QSpinBox(layoutWidget2);
        SBVidaAnimal->setObjectName(QStringLiteral("SBVidaAnimal"));
        SBVidaAnimal->setValue(50);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, SBVidaAnimal);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        SBCuantoMueve = new QSpinBox(layoutWidget2);
        SBCuantoMueve->setObjectName(QStringLiteral("SBCuantoMueve"));
        SBCuantoMueve->setValue(1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, SBCuantoMueve);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        SBTurnosMuerto = new QSpinBox(layoutWidget2);
        SBTurnosMuerto->setObjectName(QStringLiteral("SBTurnosMuerto"));
        SBTurnosMuerto->setValue(5);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, SBTurnosMuerto);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_13);

        CantidadInicial = new QSpinBox(layoutWidget2);
        CantidadInicial->setObjectName(QStringLiteral("CantidadInicial"));
        CantidadInicial->setValue(5);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, CantidadInicial);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 190, 181, 81));
        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 161, 51));
        formLayout_3 = new QFormLayout(layoutWidget3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_7);

        SBProbBonus = new QSpinBox(layoutWidget3);
        SBProbBonus->setObjectName(QStringLiteral("SBProbBonus"));
        SBProbBonus->setValue(10);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, SBProbBonus);

        SBProbInicial = new QSpinBox(layoutWidget3);
        SBProbInicial->setObjectName(QStringLiteral("SBProbInicial"));
        SBProbInicial->setValue(20);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, SBProbInicial);

        layoutWidget->raise();
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 270, 181, 81));
        layoutWidget4 = new QWidget(groupBox_4);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 20, 161, 52));
        formLayout_4 = new QFormLayout(layoutWidget4);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_8);

        SBPerdidaQuieto = new QSpinBox(layoutWidget4);
        SBPerdidaQuieto->setObjectName(QStringLiteral("SBPerdidaQuieto"));
        SBPerdidaQuieto->setValue(1);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, SBPerdidaQuieto);

        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_9);

        SBPerdidaMov = new QSpinBox(layoutWidget4);
        SBPerdidaMov->setObjectName(QStringLiteral("SBPerdidaMov"));
        SBPerdidaMov->setValue(3);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, SBPerdidaMov);

        layoutWidget->raise();
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 360, 181, 71));
        layoutWidget5 = new QWidget(groupBox_5);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 20, 161, 31));
        formLayout_5 = new QFormLayout(layoutWidget5);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget5);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_10);

        SBCuantoCura = new QSpinBox(layoutWidget5);
        SBCuantoCura->setObjectName(QStringLiteral("SBCuantoCura"));
        SBCuantoCura->setValue(15);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, SBCuantoCura);

        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 430, 181, 81));
        layoutWidget_2 = new QWidget(groupBox_6);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 161, 51));
        formLayout_6 = new QFormLayout(layoutWidget_2);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        ProbInicialPlanta = new QSpinBox(layoutWidget_2);
        ProbInicialPlanta->setObjectName(QStringLiteral("ProbInicialPlanta"));
        ProbInicialPlanta->setValue(15);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, ProbInicialPlanta);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_12);

        BonusPlanta = new QSpinBox(layoutWidget_2);
        BonusPlanta->setObjectName(QStringLiteral("BonusPlanta"));
        BonusPlanta->setValue(15);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, BonusPlanta);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_11);


        verticalLayout->addWidget(groupBox);

        buttonBox->raise();
        frame->raise();
        layoutWidget->raise();

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Dialog", "Matriz:", 0));
        label->setText(QApplication::translate("Dialog", "Filas", 0));
        label_2->setText(QApplication::translate("Dialog", "Columnas", 0));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Animal:", 0));
        label_3->setText(QApplication::translate("Dialog", "Vida", 0));
        label_4->setText(QApplication::translate("Dialog", "Mueve", 0));
        label_5->setText(QApplication::translate("Dialog", "Turnos  Muerto", 0));
        label_13->setText(QApplication::translate("Dialog", "Cantidad Inicial", 0));
        groupBox_3->setTitle(QApplication::translate("Dialog", "Probabilidad de Nacer Animal:", 0));
        label_6->setText(QApplication::translate("Dialog", "Inicial", 0));
        label_7->setText(QApplication::translate("Dialog", "Bonus", 0));
        groupBox_4->setTitle(QApplication::translate("Dialog", "Perdida de vida:", 0));
        label_8->setText(QApplication::translate("Dialog", "Quieto", 0));
        label_9->setText(QApplication::translate("Dialog", "Moverse", 0));
        groupBox_5->setTitle(QApplication::translate("Dialog", "Plantas:", 0));
        label_10->setText(QApplication::translate("Dialog", "Cuanto Cura", 0));
        groupBox_6->setTitle(QApplication::translate("Dialog", "Probabilidad de Nacer Plantas:", 0));
        label_12->setText(QApplication::translate("Dialog", "Bonus", 0));
        label_11->setText(QApplication::translate("Dialog", "Inicial", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
