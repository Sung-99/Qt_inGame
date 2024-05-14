#include "pursuit.h"
#include "ui_pursuit.h"

Pursuit::Pursuit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pursuit)
{
    ui->setupUi(this);
}

Pursuit::~Pursuit()
{
    delete ui;
}

