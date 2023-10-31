#include "table.h"

table::table(QObject *parent)
    : QAbstractTableModel(parent)
{
}

QVariant table::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

bool table::setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role)
{
    if (value != headerData(section, orientation, role)) {
        // FIXME: Implement me!
        emit headerDataChanged(orientation, section, section);
        return true;
    }
    return false;
}


int table::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int table::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    // FIXME: Implement me!
}

bool table::hasChildren(const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

bool table::canFetchMore(const QModelIndex &parent) const
{
    // FIXME: Implement me!
    return false;
}

void table::fetchMore(const QModelIndex &parent)
{
    // FIXME: Implement me!
}

QVariant table::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}

bool table::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (data(index, role) != value) {
        // FIXME: Implement me!
        emit dataChanged(index, index, {role});
        return true;
    }
    return false;
}

Qt::ItemFlags table::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::NoItemFlags;

    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable; // FIXME: Implement me!
}
