#ifndef SLOTWHITE_H
#define SLOTWHITE_H

#include <QPushButton>

class slotWhite : public QPushButton
{
    Q_OBJECT
       Q_PROPERTY(int row READ row WRITE setRow)
       Q_PROPERTY(int col READ col WRITE setCol)
       Q_PROPERTY(slotWhite::State state READ state WRITE setState NOTIFY stateChanged)

public:
    enum State {
            EmptyState,
            RedState,
            BlueState,
            SelectableState
    };
    Q_ENUM(State)

    slotWhite();
    explicit slotWhite(QWidget *parent = nullptr);
    virtual ~slotWhite();

    int row() const { return m_row; }
    void setRow(int row) { m_row = row; }

    int col() const { return m_col; }
    void setCol(int col) { m_col = col; }


    slotWhite::State state() const { return m_state; }
    void setState(slotWhite::State state);

signals:
    void stateChanged(slotWhite::State old_state, slotWhite::State new_state);

private:
    int m_row;
    int m_col;

    slotWhite::State m_state;

    static QPixmap state2pixmap(slotWhite::State state);

private slots:
    void updateSlotWhite(slotWhite::State old_state, slotWhite::State new_state);

};

#endif // SLOTWHITE_H
