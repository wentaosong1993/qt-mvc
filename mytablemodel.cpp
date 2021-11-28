#include "mytablemodel.h"
#include <QDebug>

#define ROW 3
#define COL 4
const QStringList HEADER = { \
"first", \
"second", \
"third",\
"forth" \
};

MyTableModel::MyTableModel(QObject *parent)
    : QAbstractTableModel(parent)
{
    for (int i = 0; i < ROW; i++) {
        QStringList tempList;
        for (int j = 0; j < COL; j++) {
            tempList.append(QString("(%1,%2)").arg(i + 1).arg(j + 1));
        }
        m_datas.append(tempList);
    }

    qInfo() << "m_data:" << m_datas;
}

QVariant MyTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
    if (orientation == Qt::Horizontal) {
        if (role == Qt::DisplayRole) {
            return HEADER.at(section);
        }
    } else {
        if (role == Qt::DisplayRole) {
            return section + 1;
        }
    }
    return QVariant();
}

int MyTableModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    // FIXME: Implement me!
    return ROW;
}

int MyTableModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    // FIXME: Implement me!
    return COL;
}

QVariant MyTableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    if (role == Qt::DisplayRole) {
        return m_datas[index.row()][index.column()];
    }
    return QVariant();
}
