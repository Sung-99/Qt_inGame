#ifndef PURSUIT_H
#define PURSUIT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Pursuit; }
QT_END_NAMESPACE

class slotWhite;

class Pursuit : public QMainWindow
{
    Q_OBJECT

public:
    Pursuit(QWidget *parent = nullptr);
    ~Pursuit();

private:
    Ui::Pursuit *ui;
    slotWhite* m_slot[49];

private slots:
    void play(int id);
    void reset();
    void showAbout();

};
#endif // PURSUIT_H
