#include "slotwhite.h"

slotWhite::slotWhite(QWidget *parent): QPushButton(parent), m_row(0), m_col(0), m_state(slotWhite::EmptyState)
{

    QObject::connect(this, SIGNAL(stateChanged(slotWhite::State,slotWhite::State)),
                     this, SLOT(updateSlotWhite(slotWhite::State, slotWhite::State)));
}

slotWhite::~slotWhite(){

}

void slotWhite::setState(slotWhite::State state) {
    if (m_state != state) {
         m_state = state;


        emit stateChanged(state);
    }
}


QPixmap slotWhite::state2pixmap(slotWhite::State state){
    switch (state) {
            case slotWhite::EmptyState:
                return QPixmap(":/empty");
            case slotWhite::RedState:
                return QPixmap(":/red");
            case slotWhite::BlueState:
                return QPixmap(":/blue");
            case slotWhite::SelectableState:
                return QPixmap(":/selectable");
            default:
                return QPixmap();
        }
}

void slotWhite::updateSlotWhite(slotWhite::State state){

    this -> setIcon(slotWhite::state2pixmap(state));
}
