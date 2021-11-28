#include "qtableview_1.h"
#include "ui_qtableview_1.h"

qtableview_1::qtableview_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qtableview_1)
{
    ui->setupUi(this);

    ui->tableView->setModel(&m_tablemodel);
}

qtableview_1::~qtableview_1()
{
    delete ui;
}
