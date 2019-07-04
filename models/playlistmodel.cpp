#include "playlistmodel.h"
#include <QMediaPlaylist>
#include <QFileInfo>
#include <QtWidgets>
#include <QMediaPlayer>

PlaylistModel::PlaylistModel(QMediaPlaylist *playlist,QObject *parent):QAbstractItemModel(parent)
{
    m_playlist = playlist;
}
int PlaylistModel::rowCount(const QModelIndex &parent) const{

    if(m_playlist && !parent.isValid())
        return m_playlist->mediaCount();
    else
        return 0;

}
int PlaylistModel::columnCount(const QModelIndex &parent) const{
    if(!parent.isValid())
        return 3;
}
QVariant PlaylistModel::data(const QModelIndex &index, int role) const{
    if(!index.isValid())
        return QVariant();

    if(!index.parent().isValid()){//if the index has no parent
       if(index.column()==0){
            if(role == Qt::DisplayRole){

                QVariant variant(QFileInfo(m_playlist->currentMedia().canonicalUrl().toString()).fileName());
                return variant;
              }
             if(role = Qt::DecorationRole){
                QVariant variant(QIcon(":/images/icons/openFile.png"));
                return variant;
              }
        }
     if(index.column()==1){
           if(role ==Qt::DisplayRole){
               QMediaPlayer temp;
               temp.setMedia(m_playlist->media(index.row()));
               return QVariant(temp.duration());
           }

       }
    }
}


void PlaylistModel::setPlaylist(QMediaPlaylist *playlist){
    m_playlist = playlist;

}
