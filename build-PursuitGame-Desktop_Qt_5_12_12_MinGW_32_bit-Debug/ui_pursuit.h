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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pursuit
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Pursuit)
    {
        if (Pursuit->objectName().isEmpty())
            Pursuit->setObjectName(QString::fromUtf8("Pursuit"));
        Pursuit->resize(800, 600);
        centralwidget = new QWidget(Pursuit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Pursuit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Pursuit);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Pursuit->setMenuBar(menubar);
        statusbar = new QStatusBar(Pursuit);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Pursuit->setStatusBar(statusbar);

        retranslateUi(Pursuit);

        QMetaObject::connectSlotsByName(Pursuit);
    } // setupUi

    void retranslateUi(QMainWindow *Pursuit)
    {
        Pursuit->setWindowTitle(QApplication::translate("Pursuit", "Pursuit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pursuit: public Ui_Pursuit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURSUIT_H
