#ifndef PURSUIT_H
#define PURSUIT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Pursuit; }
QT_END_NAMESPACE

class Pursuit : public QMainWindow
{
    Q_OBJECT

public:
    Pursuit(QWidget *parent = nullptr);
    ~Pursuit();

private:
    Ui::Pursuit *ui;

private slots:
    void play();
};
#endif // PURSUIT_H
