#include "pursuit.h"
#include "ui_pursuit.h"
#include <QDebug>


Pursuit::Pursuit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pursuit)
{
    ui->setupUi(this);
    this -> adjustSize();
    this -> setFixedSize(this -> size());




    QObject::connect(ui ->actionSai, SIGNAL(triggered(bool)),qApp, SLOT(quit()));

    for (int id = 0; id <= 13; id++) {
            int r = id / 7;
            int c = id % 7;

            slotWhite* slotwhite = this->findChild<slotWhite*>(QString("slot%1%2").arg(r).arg(c));
            QObject::connect(slotwhite, SIGNAL(clicked(bool)), this, SLOT(play()));
        }
}

Pursuit::~Pursuit()
{
    delete ui;
}

void Pursuit :: play(){


    slotWhite* slotwhite = qobject_cast<slotWhite*>(QObject::sender());

      qDebug()<< "row" << slotwhite-> row();
      qDebug()<< "col" << slotwhite-> col();

}

