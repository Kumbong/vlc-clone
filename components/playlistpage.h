#ifndef PLAYLISTPAGE_H
#define PLAYLISTPAGE_H

#include <QWidget>
#include <QtWidgets>

namespace Ui {
class PlaylistPage;
}

enum PLAYLIST_VIEW_MODE{LIST,DETAILED_LIST,PICTURE_FLOW,ICON};
class PlaylistPage : public QStackedWidget
{
    Q_OBJECT

public:
    explicit PlaylistPage(QWidget *parent = 0);
    ~PlaylistPage();
public slots:
    void switchPlaylistViewMode(PLAYLIST_VIEW_MODE);
    void toggleDockedView();
private:
    QListView *listView;
    QTableView *tableView;
    QGraphicsView *graphicsView;
    bool isDocked;

};

#endif // PLAYLISTPAGE_H
