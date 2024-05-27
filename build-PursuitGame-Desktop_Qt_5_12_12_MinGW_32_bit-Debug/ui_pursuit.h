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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <slot.h>

QT_BEGIN_NAMESPACE

class Ui_Pursuit
{
public:
    QAction *actionNobo;
    QAction *actionSai;
    QAction *actionAjuda;
    QWidget *centralwidget;
    pursuitBalls *slot54;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    pursuitBalls *slot00;
    pursuitBalls *slot01;
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
        slot54 = new pursuitBalls(centralwidget);
        slot54->setObjectName(QString::fromUtf8("slot54"));
        slot54->setGeometry(QRect(170, 270, 50, 50));
        slot54->setMinimumSize(QSize(50, 50));
        slot54->setMaximumSize(QSize(50, 50));
        slot54->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	outline:none;\n"
"}"));
        slot54->setIconSize(QSize(45, 45));
        slot54->setFlat(true);
        slot54->setProperty("row", QVariant(5));
        slot54->setProperty("col", QVariant(4));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 108, 52));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        slot00 = new pursuitBalls(widget);
        slot00->setObjectName(QString::fromUtf8("slot00"));
        slot00->setMinimumSize(QSize(50, 50));
        slot00->setMaximumSize(QSize(50, 50));
        slot00->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	outline:none;\n"
"}"));
        slot00->setIconSize(QSize(45, 45));
        slot00->setFlat(true);
        slot00->setProperty("row", QVariant(0));
        slot00->setProperty("col", QVariant(0));

        horizontalLayout->addWidget(slot00);

        slot01 = new pursuitBalls(widget);
        slot01->setObjectName(QString::fromUtf8("slot01"));
        slot01->setMinimumSize(QSize(50, 50));
        slot01->setMaximumSize(QSize(50, 50));
        slot01->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	outline:none;\n"
"}"));
        slot01->setIconSize(QSize(45, 45));
        slot01->setFlat(true);
        slot01->setProperty("row", QVariant(0));
        slot01->setProperty("col", QVariant(1));

        horizontalLayout->addWidget(slot01);

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
        slot54->setText(QString());
        slot00->setText(QString());
        slot01->setText(QString());
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
