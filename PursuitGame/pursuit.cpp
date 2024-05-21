#include "pursuit.h"
#include "ui_pursuit.h"

Pursuit::Pursuit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pursuit)
{
    ui->setupUi(this);
    this -> adjustSize();
    this -> setFixedSize(this -> size());
}

Pursuit::~Pursuit()
{
    delete ui;
}

