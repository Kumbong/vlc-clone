#include "playlistmodel.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QtWidgets>
#include <QFileInfo>
PlaylistModel::PlaylistModel(QObject* parent):QAbstractTableModel(parent)
{

}

int PlaylistModel::rowCount(const QModelIndex &parent) const
{

    return m_playlist->mediaCount();
}
int PlaylistModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant PlaylistModel::data(const QModelIndex &index, int role) const
{
    int row = index.row();
    int column =index.column();

    if(role==Qt::DisplayRole &&column==Title){
        return QVariant(QFileInfo(m_playlist->media(row).canonicalUrl().toLocalFile()).fileName());
    }
    else if(role==Qt::DisplayRole && column==Duration) {
         return QVariant();


    }
    else if(role==Qt::DecorationRole && column==Title){
        return QVariant(QPixmap(":/windowIcon.png"));
    }
    else{
        return QVariant();
    }

}
void PlaylistModel::setPlaylist(QMediaPlaylist *list){
    m_playlist = list;
}

void PlaylistModel::mediaChanged(int count)
{
      beginInsertRows(QModelIndex(),rowCount(),rowCount()+count);
      //model does not keep a copy of the playlist but rather keeps a pointer to an external playlist
      //count represents the number of media added to the playlist
      //notifies the view of the external changes to the model
      endInsertRows();


}
QVariant PlaylistModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(section == Title && role == Qt::DisplayRole &&orientation ==Qt::Horizontal)
        return QVariant("Title");
    else if(section == Duration && role==Qt::DisplayRole &&orientation  ==Qt::Horizontal)
        return QVariant("Duration");
    else if(section == Album && role==Qt::DisplayRole &&orientation ==Qt::Horizontal)
        return QVariant("Album");

    if(role == Qt::TextAlignmentRole)
        return QVariant(Qt::AlignLeft);

    return QVariant();
}
