#ifndef QTABLEVIEW_1_H
#define QTABLEVIEW_1_H

#include <QWidget>
#include "mytablemodel.h"

namespace Ui {
class qtableview_1;
}

class qtableview_1 : public QWidget
{
    Q_OBJECT

public:
    explicit qtableview_1(QWidget *parent = nullptr);
    ~qtableview_1();

private:
    Ui::qtableview_1 *ui;
    MyTableModel m_tablemodel;
};

#endif // QTABLEVIEW_1_H
