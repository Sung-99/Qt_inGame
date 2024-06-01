#ifndef SLOTWHITE_H
#define SLOTWHITE_H

#include <QPushButton>

class slotWhite : public QPushButton
{
    Q_OBJECT
       Q_PROPERTY(int row READ row WRITE setRow)
       Q_PROPERTY(int col READ col WRITE setCol)
public:
    slotWhite();
    explicit slotWhite(QWidget *parent = nullptr);
    virtual ~slotWhite();

    int row() const { return m_row; }
    void setRow(int row) { m_row = row; }

    int col() const { return m_col; }
    void setCol(int col) { m_col = col; }

signals:


private:
    int m_row;
    int m_col;

};

#endif // SLOTWHITE_H
