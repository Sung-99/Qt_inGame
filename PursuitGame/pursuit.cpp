#include "pursuit.h"
#include "ui_pursuit.h"
#include <QDebug>
#include <QSignalMapper>

Pursuit::Pursuit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pursuit)
{
    ui->setupUi(this);
    this -> adjustSize();
    this -> setFixedSize(this -> size());




    QObject::connect(ui ->actionSai, SIGNAL(triggered(bool)),qApp, SLOT(quit()));
    QObject::connect(ui ->actionNobo, SIGNAL(triggered(bool)),this, SLOT(reset()));

    QSignalMapper* map = new QSignalMapper(this);
    for (int id = 0; id <= 13; id++) {
            int r = id / 7;
            int c = id % 7;

            slotWhite* slotwhite = this->findChild<slotWhite*>(QString("slot%1%2").arg(r).arg(c));
            Q_ASSERT(slotwhite != nullptr);

            m_slot[id] = slotwhite;
            map->setMapping(slotwhite, id);
            QObject::connect(slotwhite, SIGNAL(clicked(bool)), map, SLOT(map()));
        }
        QObject::connect(map, SIGNAL(mapped(int)), this, SLOT(play(int)));


}

Pursuit::~Pursuit()
{
    delete ui;
}

void Pursuit :: play(int id){


    slotWhite* slotwhite = m_slot[id];

      qDebug()<< "row" << slotwhite-> row();
      qDebug()<< "col" << slotwhite-> col();

      slotwhite -> setIcon(QPixmap(":/red"));


}


void Pursuit :: reset(){


    for(int id = 0 ; id < 14; id++){
         slotWhite* slotwhite = m_slot[id];
         slotwhite -> setIcon(QPixmap(":/imagens/empty"));

    }


}

