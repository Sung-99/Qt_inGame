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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pursuit
{
public:
    QAction *actionNobo;
    QAction *actionSai;
    QAction *actionAjuda;
    QWidget *centralwidget;
    QPushButton *pushButton;
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 250, 100, 100));
        pushButton->setMinimumSize(QSize(100, 100));
        pushButton->setMaximumSize(QSize(100, 100));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	outline:none;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/blue"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(45, 45));
        pushButton->setFlat(true);
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
        pushButton->setText(QString());
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
