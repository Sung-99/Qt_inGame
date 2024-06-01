/********************************************************************************
** Form generated from reading UI file 'pursuit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURSUIT_H
#define UI_PURSUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <slotwhite.h>

QT_BEGIN_NAMESPACE

class Ui_Pursuit
{
public:
    QAction *actionNobo;
    QAction *actionSai;
    QAction *actionAjuda;
    QWidget *centralwidget;
    slotWhite *slot00;
    slotWhite *slot01;
    slotWhite *slot02;
    slotWhite *slot03;
    slotWhite *slot04;
    slotWhite *slot05;
    slotWhite *slot06;
    slotWhite *slot10;
    slotWhite *slot11;
    slotWhite *slot12;
    slotWhite *slot13;
    slotWhite *slot14;
    slotWhite *slot15;
    slotWhite *slot16;
    QMenuBar *menubar;
    QMenu *menuJogo;
    QMenu *menuSobre;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Pursuit)
    {
        if (Pursuit->objectName().isEmpty())
            Pursuit->setObjectName(QString::fromUtf8("Pursuit"));
        Pursuit->resize(500, 500);
        Pursuit->setMinimumSize(QSize(500, 500));
        Pursuit->setMaximumSize(QSize(500, 500));
        actionNobo = new QAction(Pursuit);
        actionNobo->setObjectName(QString::fromUtf8("actionNobo"));
        actionSai = new QAction(Pursuit);
        actionSai->setObjectName(QString::fromUtf8("actionSai"));
        actionAjuda = new QAction(Pursuit);
        actionAjuda->setObjectName(QString::fromUtf8("actionAjuda"));
        centralwidget = new QWidget(Pursuit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(400, 400));
        centralwidget->setMaximumSize(QSize(400, 400));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	background: url(':/grid');\n"
"}"));
        slot00 = new slotWhite(centralwidget);
        slot00->setObjectName(QString::fromUtf8("slot00"));
        slot00->setGeometry(QRect(30, 30, 50, 50));
        slot00->setMinimumSize(QSize(50, 50));
        slot00->setMaximumSize(QSize(50, 50));
        slot00->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot00->setIconSize(QSize(45, 45));
        slot00->setFlat(true);
        slot00->setProperty("row", QVariant(0));
        slot01 = new slotWhite(centralwidget);
        slot01->setObjectName(QString::fromUtf8("slot01"));
        slot01->setGeometry(QRect(80, 30, 50, 50));
        slot01->setMinimumSize(QSize(50, 50));
        slot01->setMaximumSize(QSize(50, 50));
        slot01->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot01->setIconSize(QSize(45, 45));
        slot01->setFlat(true);
        slot01->setProperty("row", QVariant(0));
        slot02 = new slotWhite(centralwidget);
        slot02->setObjectName(QString::fromUtf8("slot02"));
        slot02->setGeometry(QRect(120, 30, 50, 50));
        slot02->setMinimumSize(QSize(50, 50));
        slot02->setMaximumSize(QSize(50, 50));
        slot02->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot02->setIconSize(QSize(45, 45));
        slot02->setFlat(true);
        slot02->setProperty("row", QVariant(0));
        slot03 = new slotWhite(centralwidget);
        slot03->setObjectName(QString::fromUtf8("slot03"));
        slot03->setGeometry(QRect(170, 30, 50, 50));
        slot03->setMinimumSize(QSize(50, 50));
        slot03->setMaximumSize(QSize(50, 50));
        slot03->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot03->setIconSize(QSize(45, 45));
        slot03->setFlat(true);
        slot03->setProperty("row", QVariant(0));
        slot04 = new slotWhite(centralwidget);
        slot04->setObjectName(QString::fromUtf8("slot04"));
        slot04->setGeometry(QRect(220, 30, 50, 50));
        slot04->setMinimumSize(QSize(50, 50));
        slot04->setMaximumSize(QSize(50, 50));
        slot04->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot04->setIconSize(QSize(45, 45));
        slot04->setFlat(true);
        slot04->setProperty("row", QVariant(0));
        slot05 = new slotWhite(centralwidget);
        slot05->setObjectName(QString::fromUtf8("slot05"));
        slot05->setGeometry(QRect(270, 20, 50, 50));
        slot05->setMinimumSize(QSize(50, 50));
        slot05->setMaximumSize(QSize(50, 50));
        slot05->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot05->setIconSize(QSize(45, 45));
        slot05->setFlat(true);
        slot05->setProperty("row", QVariant(0));
        slot06 = new slotWhite(centralwidget);
        slot06->setObjectName(QString::fromUtf8("slot06"));
        slot06->setGeometry(QRect(320, 20, 50, 50));
        slot06->setMinimumSize(QSize(50, 50));
        slot06->setMaximumSize(QSize(50, 50));
        slot06->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot06->setIconSize(QSize(45, 45));
        slot06->setFlat(true);
        slot06->setProperty("row", QVariant(0));
        slot10 = new slotWhite(centralwidget);
        slot10->setObjectName(QString::fromUtf8("slot10"));
        slot10->setGeometry(QRect(20, 80, 50, 50));
        slot10->setMinimumSize(QSize(50, 50));
        slot10->setMaximumSize(QSize(50, 50));
        slot10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot10->setIconSize(QSize(45, 45));
        slot10->setFlat(true);
        slot10->setProperty("row", QVariant(1));
        slot11 = new slotWhite(centralwidget);
        slot11->setObjectName(QString::fromUtf8("slot11"));
        slot11->setGeometry(QRect(80, 80, 50, 50));
        slot11->setMinimumSize(QSize(50, 50));
        slot11->setMaximumSize(QSize(50, 50));
        slot11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot11->setIconSize(QSize(45, 45));
        slot11->setFlat(true);
        slot11->setProperty("row", QVariant(1));
        slot12 = new slotWhite(centralwidget);
        slot12->setObjectName(QString::fromUtf8("slot12"));
        slot12->setGeometry(QRect(130, 80, 50, 50));
        slot12->setMinimumSize(QSize(50, 50));
        slot12->setMaximumSize(QSize(50, 50));
        slot12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot12->setIconSize(QSize(45, 45));
        slot12->setFlat(true);
        slot12->setProperty("row", QVariant(1));
        slot13 = new slotWhite(centralwidget);
        slot13->setObjectName(QString::fromUtf8("slot13"));
        slot13->setGeometry(QRect(180, 80, 50, 50));
        slot13->setMinimumSize(QSize(50, 50));
        slot13->setMaximumSize(QSize(50, 50));
        slot13->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot13->setIconSize(QSize(45, 45));
        slot13->setFlat(true);
        slot13->setProperty("row", QVariant(1));
        slot14 = new slotWhite(centralwidget);
        slot14->setObjectName(QString::fromUtf8("slot14"));
        slot14->setGeometry(QRect(230, 80, 50, 50));
        slot14->setMinimumSize(QSize(50, 50));
        slot14->setMaximumSize(QSize(50, 50));
        slot14->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot14->setIconSize(QSize(45, 45));
        slot14->setFlat(true);
        slot14->setProperty("row", QVariant(1));
        slot15 = new slotWhite(centralwidget);
        slot15->setObjectName(QString::fromUtf8("slot15"));
        slot15->setGeometry(QRect(280, 80, 50, 50));
        slot15->setMinimumSize(QSize(50, 50));
        slot15->setMaximumSize(QSize(50, 50));
        slot15->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot15->setIconSize(QSize(45, 45));
        slot15->setFlat(true);
        slot15->setProperty("row", QVariant(1));
        slot16 = new slotWhite(centralwidget);
        slot16->setObjectName(QString::fromUtf8("slot16"));
        slot16->setGeometry(QRect(320, 80, 50, 50));
        slot16->setMinimumSize(QSize(50, 50));
        slot16->setMaximumSize(QSize(50, 50));
        slot16->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline:none;\n"
"}\n"
""));
        slot16->setIconSize(QSize(45, 45));
        slot16->setFlat(true);
        slot16->setProperty("row", QVariant(1));
        Pursuit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Pursuit);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 20));
        menuJogo = new QMenu(menubar);
        menuJogo->setObjectName(QString::fromUtf8("menuJogo"));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        Pursuit->setMenuBar(menubar);
        statusBar = new QStatusBar(Pursuit);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Pursuit->setStatusBar(statusBar);
        toolBar = new QToolBar(Pursuit);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Pursuit->addToolBar(Qt::RightToolBarArea, toolBar);

        menubar->addAction(menuJogo->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuJogo->addAction(actionNobo);
        menuJogo->addAction(actionSai);
        menuSobre->addAction(actionAjuda);

        retranslateUi(Pursuit);

        QMetaObject::connectSlotsByName(Pursuit);
    } // setupUi

    void retranslateUi(QMainWindow *Pursuit)
    {
        Pursuit->setWindowTitle(QApplication::translate("Pursuit", "Pursuit", nullptr));
        actionNobo->setText(QApplication::translate("Pursuit", "Novo", nullptr));
        actionSai->setText(QApplication::translate("Pursuit", "Sair", nullptr));
        actionAjuda->setText(QApplication::translate("Pursuit", "Ajuda", nullptr));
        slot00->setProperty("col", QVariant(QApplication::translate("Pursuit", "0", nullptr)));
        slot01->setProperty("col", QVariant(QApplication::translate("Pursuit", "1", nullptr)));
        slot02->setProperty("col", QVariant(QApplication::translate("Pursuit", "2", nullptr)));
        slot03->setProperty("col", QVariant(QApplication::translate("Pursuit", "3", nullptr)));
        slot04->setProperty("col", QVariant(QApplication::translate("Pursuit", "4", nullptr)));
        slot05->setProperty("col", QVariant(QApplication::translate("Pursuit", "5", nullptr)));
        slot06->setProperty("col", QVariant(QApplication::translate("Pursuit", "6", nullptr)));
        slot10->setProperty("col", QVariant(QApplication::translate("Pursuit", "0", nullptr)));
        slot11->setProperty("col", QVariant(QApplication::translate("Pursuit", "1", nullptr)));
        slot12->setProperty("col", QVariant(QApplication::translate("Pursuit", "2", nullptr)));
        slot13->setProperty("col", QVariant(QApplication::translate("Pursuit", "3", nullptr)));
        slot14->setProperty("col", QVariant(QApplication::translate("Pursuit", "4", nullptr)));
        slot15->setProperty("col", QVariant(QApplication::translate("Pursuit", "5", nullptr)));
        slot16->setProperty("col", QVariant(QApplication::translate("Pursuit", "6", nullptr)));
        menuJogo->setTitle(QApplication::translate("Pursuit", "Jogo", nullptr));
        menuSobre->setTitle(QApplication::translate("Pursuit", "Sobre", nullptr));
        toolBar->setWindowTitle(QApplication::translate("Pursuit", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pursuit: public Ui_Pursuit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURSUIT_H
