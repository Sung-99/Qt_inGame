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

    qDebug() << "row" << ui -> slot00->row();
    qDebug() << "col" << ui -> slot00->col();


    QObject::connect(ui ->actionSai, SIGNAL(triggered(bool)),qApp, SLOT(quit()));

     QObject::connect(ui ->slot00, SIGNAL(clicked(bool)), this, SLOT(play()));
}

Pursuit::~Pursuit()
{
    delete ui;
}

void Pursuit :: play(){
    qDebug()<< "btn presseds";

}

