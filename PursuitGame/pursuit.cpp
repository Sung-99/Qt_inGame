#include "pursuit.h"
#include "ui_pursuit.h"
#include <QDebug>
#include <QSignalMapper>

#include <QMessageBox>

Pursuit::Player state2player(slotWhite::State state) {
    switch (state) {
        case slotWhite::RedState:
            return Pursuit::RedPlayer;
        case slotWhite::BlueState:
            return Pursuit::BluePlayer;
        default:
            Q_UNREACHABLE();
    }
}

slotWhite::State player2state(Pursuit::Player player) {
    return player == Pursuit::RedPlayer ? slotWhite::RedState : slotWhite::BlueState;
}



Pursuit::Pursuit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pursuit),
      m_player(Pursuit::RedPlayer),
      m_phase(Pursuit::DropPhase),
      m_dropCount(0),
      m_selected(nullptr)
{
    ui->setupUi(this);




    QObject::connect(ui ->actionNobo, SIGNAL(triggered(bool)),this, SLOT(reset()));
    QObject::connect(ui ->actionSai, SIGNAL(triggered(bool)),qApp, SLOT(quit()));
    QObject::connect(ui ->actionAjuda, SIGNAL(triggered(bool)),this, SLOT(showAbout()));
    QObject::connect(this, SIGNAL(gameOver(Player)), this, SLOT(showGameOver(Player)));
    QObject::connect(this, SIGNAL(gameOver(Player)), this, SLOT(reset()));


    QSignalMapper* map = new QSignalMapper(this);
    for (int id = 0; id <= 48; id++) {
            int r = id / 7;
            int c = id % 7;

            slotWhite* slotwhite = this->findChild<slotWhite*>(QString("slot%1%2").arg(r).arg(c));
            Q_ASSERT(slotwhite != nullptr);

            m_slot[id] = slotwhite;
            map->setMapping(slotwhite, id);
            QObject::connect(slotwhite, SIGNAL(clicked(bool)), map, SLOT(map()));
        }
        #if QT_VERSION < QT_VERSION_CHECK(6,0,0)
            QObject::connect(map, SIGNAL(mapped(int)), this, SLOT(play(int)));
        #else
            QObject::connect(map, SIGNAL(mappedInt(int)), this, SLOT(play(int)));
        #endif

            this->updateStatusBar();
            this -> adjustSize();
            this -> setFixedSize(this -> size());
}


Pursuit::~Pursuit()
{
    delete ui;
}

slotWhite* Pursuit::slotAt(int row, int col) const {
    if (row >= 0 && row < 3 &&
        col >= 0 && col < 3) {
        int index = row * 3 + col;
        return m_slot[index];
    } else {
        return 0;
    }
}

void Pursuit :: play(int id){


    slotWhite* slotwhite = m_slot[id];

    switch (m_phase) {
            case Pursuit::DropPhase:
                drop(slotwhite);
                break;
            case Pursuit::MovePhase:
                move(slotwhite);
                break;
            default:
                Q_UNREACHABLE();

     }

      //slotwhite->setState(slotWhite::RedState);


}

void Pursuit::drop(slotWhite* slotwhite) {
    if (slotwhite->state() == slotWhite::EmptyState) {
        slotwhite->setState(player2state(m_player));

        if (isGameOver(slotwhite))
            emit gameOver(m_player);
        else {
            ++m_dropCount;
            if (m_dropCount == 6)
                m_phase = Pursuit::MovePhase;

            this->switchPlayer();
        }
    }
}

void Pursuit::move(slotWhite* slotwhite) {
    QPair<slotWhite*,slotWhite*>* movement = nullptr;

    if (slotwhite->state() == slotWhite::SelectableState) {
        Q_ASSERT(m_selected != 0);
        movement = new QPair<slotWhite*,slotWhite*>(m_selected, slotwhite);
    } else {
        if (slotwhite->state() == player2state(m_player)) {
            QList<slotWhite*> selectable = this->findSelectable(slotwhite);
            if (selectable.count() == 1) {
                movement = new QPair<slotWhite*,slotWhite*>(slotwhite, selectable.at(0));
            } else if (selectable.count() > 1) {
                this->clearSelectable();
                foreach (slotWhite* tmp, selectable)
                    tmp->setState(slotWhite::SelectableState);

                m_selected = slotwhite;
            }
        }
    }

    if (movement != nullptr) {
            this->clearSelectable();
            m_selected = 0;

            Q_ASSERT(movement->first->state() == player2state(m_player));
            Q_ASSERT(movement->second->state() == slotWhite::EmptyState);

            movement->first->setState(slotWhite::EmptyState);
            movement->second->setState(player2state(m_player));

            if (isGameOver(movement->second))
                emit gameOver(m_player);
            else
                this->switchPlayer();

            delete movement;
        }
    }

void Pursuit::switchPlayer() {
    m_player = m_player == Pursuit::RedPlayer ?
                    Pursuit::BluePlayer : Pursuit::RedPlayer;
    this->updateStatusBar();
}

bool isSelectable(slotWhite* slotwhite) {
    return slotwhite != nullptr &&
            (slotwhite->state() == slotWhite::EmptyState ||
             slotwhite->state() == slotWhite::SelectableState);
}

void Pursuit::clearSelectable() {
    for (int id = 0; id <= 48; id++) {
        slotWhite* slotwhite = m_slot[id];
        if (slotwhite->state() == slotWhite::SelectableState)
            slotwhite->setState(slotWhite::EmptyState);
    }
}

QList<slotWhite*> Pursuit::findSelectable(slotWhite* slotwhite) {
    QList<slotWhite*> list;

    slotWhite* left = this->slotAt(slotwhite->row() - 1, slotwhite->col());
    if (isSelectable(left))
        list << left;

    slotWhite* up = this->slotAt(slotwhite->row(), slotwhite->col() - 1);
    if (isSelectable(up))
        list << up;

    slotWhite* right = this->slotAt(slotwhite->row() + 1, slotwhite->col());
    if (isSelectable(right))
        list << right;

    slotWhite* bottom = this->slotAt(slotwhite->row(), slotwhite->col() + 1);
    if (isSelectable(bottom))
        list << bottom;

    return list;
}

void Pursuit :: reset(){


    for(int id = 0 ; id < 49; id++){
         slotWhite* slotwhite = m_slot[id];
         slotwhite -> setState(slotWhite::EmptyState);

    }


}

void Pursuit::showAbout() {
    QMessageBox::information(this, tr("About"), tr("PURSUIT\n\nVitor Hugo Mota Soares e  - vitorhugomota99@hotmail.br"));
}

