/*
 * CheckedNetworkObjectListModel.h - data model returning all checked network objects
 *
 * Copyright (c) 2017 Tobias Doerffel <tobydox/at/users.sourceforge.net>
 *
 * This file is part of iTALC - http://italc.sourceforge.net
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef CHECKED_NETWORK_OBJECT_LIST_MODEL_H
#define CHECKED_NETWORK_OBJECT_LIST_MODEL_H

#include <QAbstractListModel>

class CheckedNetworkObjectListModel : public QAbstractListModel
{
	Q_OBJECT
public:
	CheckedNetworkObjectListModel(QAbstractItemModel* sourceModel, QObject *parent = 0);

	int rowCount(const QModelIndex &parent = QModelIndex()) const override;

	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
	QAbstractItemModel* m_sourceModel;

};

#endif // CHECKED_NETWORK_OBJECT_LIST_MODEL_H
