#ifndef PLAYLISTPAGE_H
#define PLAYLISTPAGE_H
#include "playernamespace.h"
#include <QWidget>

class QAbstractItemView;
class PlaylistModel;
class QMediaPlaylist;

class PlaylistPage : public QWidget
{
    Q_OBJECT
public:

    explicit PlaylistPage(QMediaPlaylist *list=nullptr,PlaylistViewMode mode=DetailedList,QWidget *parent = nullptr);

signals:

public slots:
    void changePlaylistView(PlaylistViewMode mode);
    void setPlaylistModel(QMediaPlaylist *list);
    void mediaAdded(int count);
private:
    QAbstractItemView *view;
    PlaylistModel *model;
};

#endif // PLAYLISTPAGE_H
