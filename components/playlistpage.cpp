#include "playlistpage.h"
#include <QtWidgets>
#include "models/playlistmodel.h"
#include <QMediaPlaylist>
//changes in media loaded dont show immediately when media is loaded while in playlist mode
PlaylistPage::PlaylistPage(QMediaPlaylist *list, PlaylistViewMode mode, QWidget *parent ) : QWidget(parent)
{
     view = nullptr;


     model = new PlaylistModel(this);

     setPlaylistModel(list);
     changePlaylistView(mode);
     QHBoxLayout *layout = new QHBoxLayout;
     layout->addWidget(view);
     setLayout(layout);
}

void PlaylistPage::changePlaylistView(PlaylistViewMode mode)
{
    //make sure that the view is instatiated when this widget is created

    if(mode == Icons){
        //set the model here

        QListView *lview = new QListView;
        lview->setModel(model);
        lview->setAlternatingRowColors(true);
        lview->setViewMode(QListView::IconMode);
        lview->setWordWrap(false);

        view = lview;
    }
    else if(mode == DetailedList){
        QTableView *tview = new QTableView;
        tview->setAlternatingRowColors(true);
        tview->setModel(model);
        tview->setShowGrid(false);
        tview->horizontalHeader()->setStretchLastSection(true);
        tview->setAlternatingRowColors(true);
        tview->setColumnWidth(0,300);
        tview->setColumnWidth(1,300);
        tview->setWordWrap(false);

        view = tview;

    }
    else if(mode == List){
        QListView *lview = new QListView;
        lview->setModel(model);
        lview->setAlternatingRowColors(true);
        lview->setViewMode(QListView::ListMode);
        lview->setWordWrap(false);

        view = lview;
    }
    else if(mode == PictureFlow){

    }
    update();
}

void PlaylistPage::setPlaylistModel(QMediaPlaylist *list)
{
    model->setPlaylist(list);
}

void PlaylistPage::mediaAdded(int count)
{
   model->mediaChanged(count);
}
