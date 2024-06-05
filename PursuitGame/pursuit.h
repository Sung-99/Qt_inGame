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


    enum Player {
            RedPlayer,
            BluePlayer
        };
        Q_ENUM(Player)


    enum Phase {
            DropPhase,
            MovePhase
    };
    Q_ENUM(Phase)


    Pursuit(QWidget *parent = nullptr);
    virtual ~Pursuit();


    slotWhite* slotAt(int row, int col) const;


    signals:
        void gameOver(Player player);
private:
    Ui::Pursuit *ui;
    slotWhite* m_slot[49];

    Player m_player;
    int m_dropCount;
    slotWhite* m_selected;

    Phase m_phase;

    void drop(slotWhite* slotwhite);
    void move(slotWhite* slotwhite);




        void switchPlayer();
        void clearSelectable();
        QList<slotWhite*> findSelectable(slotWhite* slotwhite);
        bool checkRow(Player player, int col);
        bool checkCol(Player player, int row);
        bool isGameOver(slotWhite* hole);

private slots:
    void play(int id);
    void reset();
    void showAbout();
     void showGameOver(Player player);
      void updateStatusBar();

};
#endif // PURSUIT_H
