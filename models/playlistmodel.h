#ifndef PLAYLISTMODEL_H
#define PLAYLISTMODEL_H

#include <QAbstractItemModel>
class QMediaPlaylist;


class PlaylistModel : public QAbstractItemModel
{
 void setPlaylist(QMediaPlaylist *playlist);
 QVariant data(const QModelIndex &index, int role) const override;
 int columnCount(const QModelIndex &parent) const override;
 int rowCount(const QModelIndex &parent) const override;
PlaylistModel(QMediaPlaylist *playlist,QObject *parent);

private:
    QMediaPlaylist *m_playlist;

};

#endif // PLAYLISTMODEL_H
