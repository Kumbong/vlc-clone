#ifndef PLAYLISTMODEL_H
#define PLAYLISTMODEL_H
#include <QtWidgets>

class QMediaPlaylist;

class PlaylistModel : public QAbstractTableModel
{
public:
    enum{
        Title,
        Duration,
        Album
    };
    PlaylistModel(QObject *parent=nullptr);
    int rowCount(const QModelIndex &parent= QModelIndex()) const;
    int columnCount(const QModelIndex &parent =QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    void setPlaylist(QMediaPlaylist *list);
public slots:
    void mediaChanged(int count);
private:
       QMediaPlaylist *m_playlist;

};

#endif // PLAYLISTMODEL_H
