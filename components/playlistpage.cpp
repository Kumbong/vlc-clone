#include "playlistpage.h"
#include "ui_playlistpage.h"

PlaylistPage::PlaylistPage(QWidget *parent) :
    QStackedWidget(parent)
{
       listView = new QListView;
       graphicsView = new QGraphicsView;
       tableView = new QTableView;

       listView->setMovement(QListView::Free);
       listView->setResizeMode(QListView::Adjust);

       tableView->horizontalHeader()->stretchLastSection();
       tableView->resizeColumnsToContents();
       tableView->setSortingEnabled(true);
       tableView->setWordWrap(false);

       addWidget(listView);
       addWidget(graphicsView);
       addWidget(tableView);



}

PlaylistPage::~PlaylistPage()
{

}

void PlaylistPage::switchPlaylistViewMode(PLAYLIST_VIEW_MODE mode)
{
  switch(mode) {
    case PLAYLIST_VIEW_MODE::LIST: if(currentWidget() != listView) setCurrentWidget(listView);
        listView->setFlow(QListView::TopToBottom);
        listView->setWrapping(false);
        listView->setViewMode(QListView::ListMode);
        break;
    case PLAYLIST_VIEW_MODE::ICON: if(currentWidget() != listView) setCurrentWidget(listView);
        listView->setFlow(QListView::LeftToRight);
        listView->setWrapping(true);
        listView->setViewMode(QListView::IconMode);
        break;
    case PLAYLIST_VIEW_MODE::DETAILED_LIST: setCurrentWidget(tableView);
        break;
    case PLAYLIST_VIEW_MODE::PICTURE_FLOW: setCurrentWidget(graphicsView);
        break;
    default:
        break;
    }
}

void PlaylistPage::toggleDockedView()
{

}
