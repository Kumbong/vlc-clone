#include "mainwindow.h"
//change the names of the classes with the following header files below so that they begin with capital letters
#include "effectsandfiltersdialog.h"
#include "openmediadialog.h"
#include "mediainformationdialog.h"
#include "openfromclipboarddialog.h"
#include "pluginsandextensionsdialog.h"
#include "programguidedialog.h"
#include "vlmconfigurationdialog.h"
#include "messagesdialog.h"
#include "toolbar.h"
#include "playerpage.h"
#include "playlistmodel.h"
#include "playlistpage.h"
#include "gototimedialog.h"


#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    playerPage = new PlayerPage(this);


    setCentralWidget(playerPage);



    createActions();
    createMenus();
    createStatusBar();
    setWindowIcon(QIcon(":/images/icons/windowIcon.png"));
    setGeometry(QRect(300,300,500,500));
    createToolBar();
    setCurrentFile(QString(""));
    connect(playerPage,&PlayerPage::mediaChanged,this,&MainWindow::setCurrentFile);
    connect(this,&MainWindow::playlistViewModeChanged,playerPage,&PlayerPage::playlistViewModeChanged);
    connect(this,&MainWindow::viewToggled,playerPage,&PlayerPage::changeView);
}

MainWindow::~MainWindow()
{

}

void MainWindow::openFile()
{
    QFileDialog dialog(this,tr("Select one or more files to open"));
    dialog.setFileMode(QFileDialog::ExistingFiles);
    dialog.setNameFilter(tr("Media Files(*.3g2 *.3gp *.3gp2 *.3gpp *.amv *.asf *.avi *.bik *.bin *.divx *.drc *.dv "
                            "*.f4v *.flv *.gvi *.gxf *.iso *.m1v *.m2v *.m2t *.m2ts *.m4v *.mkv *.mov *.mp2 *.mp2V "
                            "*.mp4 *.mp4v *.mpe *.mpeg *.mpeg1 *.mpeg2 *.mpeg4 *.mpg *.mpv2 *.mts *.mtv *.mxf *.mxg "
                            "*.nsv *.nuv *.ogg *.ogm *.ogv *.ogx *.ps *.rec *.rm *.rmvb *.rpl *.thp *.tod *.ts *.tts "
                            "*.txd *.vob *.vro *.webm *.wm *.wmv *.wtv *.xesc *.3ga *.669 *.152 *.aac *.ac3 *.adt "
                            "*.adts *.aif *.aiff *.amr *.aob *.ape *.awb *.caf *.dts *.flac *.it *.kar *.m4a *.m4b "
                            "*.m4p *.m5p *.mid *.mka *.mlp *.mod *.mpa *.mp1 *.mp2 *.mp3 *.mpc *.mpga *.mus *.oga "
                            "*.ogg *oma *.opus *.qcp *.ra *.rmi *.s3m *.sid *.spx *.thd *.tta *.voc *vqf *.w64 *.wav "
                            "*.wma *.wv *.xa *.xm);;Video Files(*.3g2 *.3gp *.3gp2 *.3gpp *.amv *.asf *.avi *.bik "
                            "*.bin *.divx *.drc *.dv *.f4v *.flv *.gvi *.gxf *.iso *.m1v *.m2v *.m2t *.m2ts *.m4v "
                            "*.mkv *.mov *.mp2 *.mp2V *.mp4 *.mp4v *.mpe *.mpeg *.mpeg1 *.mpeg2 *.mpeg4 *.mpg *.mpv2 "
                            "*.mts *.mtv *.mxf *.mxg *.nsv *.nuv *.ogg *.ogm *.ogv *.ogx *.ps *.rec *.rm *.rmvb *.rpl "
                            "*.thp *.tod *.ts *.tts *.txd *.vob *.vro *.webm *.wm *.wmv *.wtv *.xesc);;"
                            "Audio Files(*.3ga *.669 *.152 *.aac *.ac3 *.adt *.adts *.aif *.aiff *.amr *.aob *.ape "
                            "*.awb *.caf *.dts *.flac *.it *.kar *.m4a *.m4b *.m4p *.m5p *.mid *.mka *.mlp *.mod *.mpa "
                            "*.mp1 *.mp2 *.mp3 *.mpc *.mpga *.mus *.oga *.ogg *oma *.opus *.qcp *.ra *.rmi *.s3m *.sid "
                            "*.spx *.thd *.tta *.voc *vqf *.w64 *.wav *.wma *.wv *.xa *.xm);;Playlist Files(*.asx *.b4s "
                            "*.cue *.ifo *.m3u *.m3u8 *.pls *.ram *.sdp *.vlc *.xspf *.wax *.wvx *.zip *.conf);;"
                            "All Files(*)"));
    dialog.setViewMode(QFileDialog::Detail);
    dialog.setAcceptMode(QFileDialog::AcceptOpen);



    if( dialog.exec()){

        playerPage->load(dialog.selectedUrls());

            QStringList fileList = dialog.selectedFiles();
            QStringListIterator i(fileList);

            while(i.hasNext()){
                currentFile = i.next();
                recentFileNames.removeAll(currentFile);
                recentFileNames.prepend(currentFile);
            }
            updateRecentMediaActions();
            setCurrentFile(currentFile);
        }


}


void MainWindow::openMultipleFiles()
{
   openMediaDialog dialog(this);
   dialog.exec();
}

void MainWindow::openFolder()
{
   QFileDialog dialog(this,tr("Open Folder"));
   dialog.setViewMode(QFileDialog::Detail);
   dialog.setFileMode(QFileDialog::Directory);
   dialog.setOption(QFileDialog::ShowDirsOnly,true);
   dialog.setAcceptMode(QFileDialog::AcceptOpen);

   dialog.exec();
}

void MainWindow::openDisc()
{

}

void MainWindow::openNetworkStream()
{

}

void MainWindow::openCaptureDevice()
{

}

void MainWindow::openLocationFromClipBoard()
{

}

void MainWindow::openRecentMedia()
{
    QAction *action = static_cast<QAction*>(sender());
    QString fileName;
    fileName = action->data().toString();
    playerPage->load(fileName);
    setCurrentFile(fileName);
}

void MainWindow::clearRecentMedia()
{

    for(int j=0; j<MaxRecentFiles && j<recentFileNames.count();j++){
        recentFileActions[j]->setVisible(false);
        disconnect(recentFileActions[j],&QAction::triggered,this,&MainWindow::openRecentMedia);
    }
    recentFileNames.clear();
    qDebug()<<"clearing";

}

void MainWindow::saveToPlaylist()
{

}

void MainWindow::savePlayListToFile()
{
   QFileDialog dialog(this,tr("Save Playlist as..."));
   dialog.setAcceptMode(QFileDialog::AcceptSave);
   dialog.setNameFilter(tr("XSPF playlist (*.xspf);;M3U playlist (*.m3u);;M3U8 playlist (*.m3u8);;HTML playlist (*.html)"));

   dialog.exec();
}

void MainWindow::convertAndSave()
{

}

void MainWindow::stream()
{

}

void MainWindow::quitAtEndOfPlaylist(bool actionState)
{

}

void MainWindow::menu()
{

}

void MainWindow::faster()
{

}

void MainWindow::slower()
{

}

void MainWindow::jumpForward()
{

}

void MainWindow::jumpBackward()
{

}

void MainWindow::jumpToSpecificTime()
{
     goToTimeDialog *dialog = new goToTimeDialog(this);
     connect(dialog,&goToTimeDialog::goToTime,playerPage,&PlayerPage::goToTime);
     dialog->exec();

}

void MainWindow::play()
{
    if(currentFile.isEmpty())
         openMultipleFiles();
    else
         playerPage->play();
}

void MainWindow::stop()
{

}

void MainWindow::previous()
{

}

void MainWindow::next()
{

}

void MainWindow::record()
{

}

void MainWindow::disableAudio()
{

}

void MainWindow::track1()
{

}

void MainWindow::spectrometerVisualization()
{

}

void MainWindow::scopeVisualization()
{

}

void MainWindow::spectrumVisaulization()
{

}

void MainWindow::vuMeterVisualization()
{

}

void MainWindow::goomVisualization()
{

}

void MainWindow::disableVideo()
{

}

void MainWindow::fullScreen(bool actionState)
{

}

void MainWindow::alwaysFitWindow(bool actionState)
{

}

void MainWindow::alwaysOnTop(bool actionState)
{

}

void MainWindow::setAsWallpaper(bool actionState)
{

}

void MainWindow::zoom()
{

}

void MainWindow::setAspectRatio()
{

}

void MainWindow::deInterlace()
{

}

void MainWindow::deInterLaceMode()
{

}

void MainWindow::postProcessing()
{

}

void MainWindow::takeSnapshot()
{

}

void MainWindow::addSubtitleFile()
{

}

void MainWindow::subTrack()
{

}

void MainWindow::effectsAndFilters()
{
   effectsAndFiltersDialog dialog(this);
   dialog.exec();
}

void MainWindow::trackSynchronization()
{

}

void MainWindow::mediaInformation()
{
  mediaInformationDialog dialog(this);
  dialog.exec();
}

void MainWindow::codecInformation()
{

}

void MainWindow::VLMConfiguration()
{

}

void MainWindow::programGuide()
{

}

void MainWindow::messages()
{

}

void MainWindow::pluginsAndExtensions()
{

}

void MainWindow::customiseInterface()
{

}

void MainWindow::preferences()
{

}

void MainWindow::playlistView(bool checked)
{
    emit viewToggled(checked,dockedPlayListAction->isChecked());
}

void MainWindow::dockedPlayList(bool checked)
{
    emit viewToggled(playListAction->isChecked(),checked);
}

void MainWindow::minimalInterface(bool actionState)
{

}

void MainWindow::iconViewMode(bool checked)
{
    if(checked)
        emit playlistViewModeChanged(PlaylistViewMode::Icons);
}

void MainWindow::detailedViewMode(bool checked)
{
    if(checked)
        emit playlistViewModeChanged(PlaylistViewMode::DetailedList);
}

void MainWindow::listViewMode(bool checked)
{
    if(checked)
        emit playlistViewModeChanged(PlaylistViewMode::List);
}

void MainWindow::PictureFlowViewMode(bool checked)
{
    if(checked)
        emit playlistViewModeChanged(PlaylistViewMode::PictureFlow);
}


void MainWindow::fullScreenInterface(bool actionState)
{

}

void MainWindow::advancedControls(bool actionState)
{

}

void MainWindow::donwloadSubtitles()
{

}

void MainWindow::help()
{

}

void MainWindow::checkForUpdates()
{

}

void MainWindow::about()
{

}

void MainWindow::createMenus()
{


   mediaMenu = menuBar()->addMenu(tr("&Media"));
   mediaMenu->addAction(openFileAction);
   mediaMenu->addAction(openMultipleFilesAction);
   mediaMenu->addAction(openFolderAction);
   mediaMenu->addAction(openDiscAction);
   mediaMenu->addAction(openNetworkStreamAction);
   mediaMenu->addAction(openCaptureDeviceAction);
   mediaMenu->addAction(openLocationFromClipBoardAction);
   openRecentMediaSubMenu = mediaMenu->addMenu(tr("Open Recent Media"));
   for(int j=0; j<MaxRecentFiles;j++){
       openRecentMediaSubMenu->addAction(recentFileActions[j]);
   }
   seperatorAction = openRecentMediaSubMenu->addSeparator();
   seperatorAction->setVisible(false);
   openRecentMediaSubMenu->addAction(clearAction);
   openRecentMediaSubMenu->addAction(saveToPlaylistAction);

   mediaMenu->addSeparator();

   mediaMenu->addAction(savePlayListToFileAction);
   mediaMenu->addAction(convertAndSaveAction);
   mediaMenu->addAction(streamAction);
   mediaMenu->addSeparator();

   mediaMenu->addAction(quitAtEndOfPlaylistAction);
   mediaMenu->addAction(quitAction);


   playBackMenu = menuBar()->addMenu(tr("P&layback"));
   titleSubMenu = playBackMenu->addMenu(tr("Title"));
   titleSubMenu->setEnabled(false);
   chapterSubMenu = playBackMenu->addMenu(tr("Chapter"));
   chapterSubMenu->setEnabled(false);
   programmeSubMenu = playBackMenu->addMenu(tr("Programme"));
   programmeSubMenu->setEnabled(false);
   customBookmarksSubMenu = playBackMenu->addMenu(tr("Custom Bookmarks"));
   customBookmarksSubMenu->setEnabled(false);
   playBackMenu->addSeparator();

   speedSubMenu = playBackMenu->addMenu(tr("Speed"));
       //speedSubMenu->addAction(speedSeperator);
       speedSubMenu->addAction(fasterAction);
       speedSubMenu->addAction(fasterFineAction);
       speedSubMenu->addAction(normalSpeedAction);
       speedSubMenu->addAction(slowerFineAction);
       speedSubMenu->addAction(slowerAction);
       speedSubMenu->setTearOffEnabled(true);
       //speedSubMenu->setEnabled(false);

   playBackMenu->addSeparator();
   playBackMenu->addAction(jumpForwardAction);
   playBackMenu->addAction(jumpBackwardAction);
   playBackMenu->addAction(jumpToSpecificTimeAction);
   playBackMenu->addSeparator();

   playBackMenu->addAction(playAction);
   playBackMenu->addAction(stopAction);
   playBackMenu->addAction(previousAction);
   playBackMenu->addAction(nextAction);
   playBackMenu->addAction(recordAction);


   audioMenu = menuBar()->addMenu(tr("&Audio"));
   audioTrackSubMenu = audioMenu->addMenu(tr("Audio Track"));
   //Audio Track submenu
        //audioTrackSubMenu->setEnabled(false);
        audioTrackSubMenu->addAction(audioTrack_disableAction);
        audioTrackSubMenu->addAction(audioTrack_track1Action);

   audioDeviceSubMenu = audioMenu->addMenu(tr("Audio Device"));
   //Audio Device submenu
       //audioDeviceSubMenu->setEnabled(false);
       audioDeviceSubMenu->addAction(audioDevice_defaultAction);


   stereoModeSubMenu = audioMenu->addMenu(tr("Stereo Mode"));
   //Stereo Mode sub menu
        //stereoModeSubMenu->setEnabled(false);
       stereoModeSubMenu->addAction(stereoMode_stereoAction);
       stereoModeSubMenu->addAction(stereoMode_leftAction);
       stereoModeSubMenu->addAction(stereoMode_rightAction);
       stereoModeSubMenu->addAction(stereoMode_reverseAction);
   audioMenu->addSeparator();

   visualizationsSubMenu = audioMenu->addMenu(tr("VisualizationsAction"));
   //Visualizations sub menu
        //visualizationsSubMenu->setEnabled(false);
   visualizationsSubMenu->addAction(visualizations_disableAction);
   visualizationsSubMenu->addAction(visualizations_spectrometerAction);
   visualizationsSubMenu->addAction(visualizations_scopeAction);
   visualizationsSubMenu->addAction(visualizations_spectrumAction);
   visualizationsSubMenu->addAction(visualizations_vuMeterAction);
   visualizationsSubMenu->addAction(visualizations_goomAction);
   audioMenu->addSeparator();

   audioMenu->addAction(increaseVolumeAction);
   audioMenu->addAction(decreaseVolumeAction);
   audioMenu->addAction(muteVolumeAction);



   videoMenu = menuBar()->addMenu(tr("&Video"));

   videoTrackSubMenu = videoMenu->addMenu(tr("Video Track"));
   //Video Track sub menu
        //videoTrackSubMenu->setEnabled(false);
        videoTrackSubMenu->addAction(videoTrack_disableAction);
        videoTrackSubMenu->addAction(videoTrack_track1Action);

   videoMenu->addSeparator();

   videoMenu->addAction(fullScreenAction);
   videoMenu->addAction(alwaysFitWindowAction);
   videoMenu->addAction(alwaysOnTopAction);
   videoMenu->addAction(setAsWallpaperAction);
   videoMenu->addSeparator();

   zoomSubMenu = videoMenu->addMenu(tr("Zoom"));
   //Zoom sub menu
       //zoomSubMenu->setEnabled(false);
       zoomSubMenu->addAction(zoom_quarterAction);
       zoomSubMenu->addAction(zoom_halfAction);
       zoomSubMenu->addAction(zoom_originalAction);
       zoomSubMenu->addAction(zoom_doubleAction);

   aspectRatioSubMenu = videoMenu->addMenu(tr("Aspect Ratio"));
   //Aspect Ratio submenu
       //aspectRatioSubMenu->setEnabled(false);
       aspectRatioSubMenu->addAction(aspectRatio_defaultAction);
       aspectRatioSubMenu->addAction(aspectRatio_16_9_Action);
       aspectRatioSubMenu->addAction(aspectRatio_4_3_Action);
       aspectRatioSubMenu->addAction(aspectRatio_1_1_Action);
       aspectRatioSubMenu->addAction(aspectRatio_16_9_Action);
       aspectRatioSubMenu->addAction(aspectRatio_2_21_1_Action);
       aspectRatioSubMenu->addAction(aspectRatio_2_35_1_Action);
       aspectRatioSubMenu->addAction(aspectRatio_2_39_1_Action);
       aspectRatioSubMenu->addAction(aspectRatio_5_4_Action);

   cropSubMenu = videoMenu->addMenu(tr("Crop"));
   //Crop submenu
       //cropSubMenu->setEnabled(false);
       cropSubMenu->addAction(crop_defaultAction);
       cropSubMenu->addAction(crop_16_10_Action);
       cropSubMenu->addAction(crop_16_9_Action);
       cropSubMenu->addAction(crop_4_3_Action);
       cropSubMenu->addAction(crop_1_85_1_Action);
       cropSubMenu->addAction(crop_2_21_1_Action);
       cropSubMenu->addAction(crop_2_35_1_Action);
       cropSubMenu->addAction(crop_2_39_1_Action);
       cropSubMenu->addAction(crop_5_3_Action);
       cropSubMenu->addAction(crop_5_4_Action);
       cropSubMenu->addAction(crop_1_1_Action);

   videoMenu->addSeparator();

   deInterlaceSubMenu = videoMenu->addMenu(tr("Deinterlace"));
   //Deinterlace submenu
       //deInterlaceSubMenu->setEnabled(false);
       deInterlaceSubMenu->addAction(deInterlace_offAction);
       deInterlaceSubMenu->addAction(deInterlace_automaticAction);
       deInterlaceSubMenu->addAction(deInterlace_onAction);

   deInterlaceModeSubMenu = videoMenu->addMenu(tr("DeInterlace Mode"));
   //Deinterlace submenu
       //deInterlaceModeSubMenu->setEnabled(false);
       deInterlaceModeSubMenu->addAction(deInterlaceMode_discardAction);
       deInterlaceModeSubMenu->addAction(deInterlaceMode_blendAction);
       deInterlaceModeSubMenu->addAction(deInterlaceMode_meanAction);
       deInterlaceModeSubMenu->addAction(deInterlaceMode_bobAction);
       deInterlaceModeSubMenu->addAction(deInterlaceMode_linearAction);
       deInterlaceModeSubMenu->addAction(deInterlaceMode_xAction);
       deInterlaceModeSubMenu->addAction(deInterlaceMode_yadifAction);
       deInterlaceModeSubMenu->addAction(deInterlaceMode_yadif_2x_Action);
       deInterlaceModeSubMenu->addAction(deInterlaceMode_phosphorAction);
       deInterlaceModeSubMenu->addAction(deInterlaceMode_filmAction);

   postProcessingSubMenu = videoMenu->addMenu(tr("Post Processing"));
   //Postprocessing submenu
       //postProcessingSubMenu->setEnabled(false);
       postProcessingSubMenu->addAction(postProcessing_disableAction);
       postProcessingSubMenu->addSeparator();
       postProcessingSubMenu->addAction(postProcessing_lowestAction);
       postProcessingSubMenu->addAction(postProcessing_middleAction);
       postProcessingSubMenu->addAction(postProcessing_highestAction);

   videoMenu->addSeparator();

   videoMenu->addAction(takeSnapshotAction);

   subtitleMenu = menuBar()->addMenu(tr("Subti&tle"));
   subtitleMenu->addAction(addSubtitleFileAction);
   subTrackSubMenu = subtitleMenu->addMenu(tr("Sub Track"));
   subTrackSubMenu->setEnabled(false);

   toolsMenu = menuBar()->addMenu(tr("T&ools"));
   toolsMenu->addAction(effectsAndFiltersAction);
   toolsMenu->addAction(trackSynchronizationAction);
   toolsMenu->addAction(mediaInformationAction);
   toolsMenu->addAction(codecInformationAction);
   toolsMenu->addAction(VLMConfigurationAction);
   toolsMenu->addAction(programGuideAction);
   toolsMenu->addAction(messagesAction);
   toolsMenu->addAction(pluginsAndExtensionsAction);
   toolsMenu->addSeparator();

   toolsMenu->addAction(customiseInterfaceAction);
   toolsMenu->addAction(preferencesAction);


   viewMenu = menuBar()->addMenu(tr("V&iew"));
   viewMenu->addAction(playListAction);
   viewMenu->addAction(dockedPlayListAction);

   playListViewModeSubMenu = viewMenu->addMenu(tr("Playlist View Mode"));
   //Playlist view mode submenu
        playListViewModeSubMenu->addAction(iconsAction);
        playListViewModeSubMenu->addAction(detailedListAction);
        playListViewModeSubMenu->addAction(listAction);
        playListViewModeSubMenu->addAction(pictureFlowAction);
        playListViewModeSubMenu->setEnabled(playListAction->isChecked());
        connect(playListAction,&QAction::toggled,playListViewModeSubMenu,&QMenu::setEnabled);

   viewMenu->addSeparator();

   viewMenu->addAction(minimalInterfaceAction);
   viewMenu->addAction(fullScreenInterfaceAction);
   viewMenu->addAction(advancedControlsAction);
   viewMenu->addAction(statusBarAction);
   viewMenu->addSeparator();

   addInterfaceSubMenu = viewMenu->addMenu(tr("Add Interface"));
   //Add Interface submenu
       addInterfaceSubMenu->addAction(consoleAction);
       addInterfaceSubMenu->addAction(telnetAction);
       addInterfaceSubMenu->addAction(webAction);
       addInterfaceSubMenu->addAction(debugLoggingAction);
       addInterfaceSubMenu->addAction(mouseGesturesAction);

   viewMenu->addSeparator();
   viewMenu->addAction(downloadSubtitlesAction);


   helpMenu = menuBar()->addMenu(tr("&Help"));
   helpMenu->addAction(helpAction);
   helpMenu->addAction(checkForUpdatesAction);
   helpMenu->addSeparator();

   helpMenu->addAction(aboutAction);
   menuBar()->setFont(QFont("Helvetica",11));





}

void MainWindow::createActions(){


    openFileAction = new QAction(tr("Open File..."),this);
    openFileAction->setIcon(QIcon(":/images/icons/openFile.png"));
    openFileAction->setShortcuts(QKeySequence::Open);
    openFileAction->setStatusTip(tr("Select a file to open"));
    connect(openFileAction,&QAction::triggered,this,&MainWindow::openFile);


    openMultipleFilesAction = new QAction(tr("Open Multiple Files..."),this);
    openMultipleFilesAction->setIcon(QIcon(":/images/icons/openFile.png"));
    openMultipleFilesAction->setShortcut(QKeySequence(Qt::CTRL+Qt::SHIFT+Qt::Key_O));
    openMultipleFilesAction->setStatusTip(tr("Select Multiple files for opening"));
    connect(openMultipleFilesAction,&QAction::triggered,this,&MainWindow::openMultipleFiles);

    openFolderAction = new QAction(tr("Open Folder..."),this);
    openFolderAction->setIcon(QIcon(":/images/icons/openFolder.png"));
    openFolderAction->setShortcuts(QKeySequence::Find);
    openFolderAction->setStatusTip(tr("Select A folder to open"));
    connect(openFolderAction,&QAction::triggered,this,&MainWindow::openFolder);

    openDiscAction = new QAction(tr("Open Disk..."),this);
    openDiscAction->setIcon(QIcon(":/images/icons/openDisc.png"));
    openDiscAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_D));
    openDiscAction->setStatusTip(tr("Select A disk to open"));
    connect(openDiscAction,&QAction::triggered,this,&MainWindow::openDisc);

    openNetworkStreamAction = new QAction(tr("Open Network Stream..."),this);
    openNetworkStreamAction->setIcon(QIcon(":/images/icons/openNetworkStream.png"));
    openNetworkStreamAction->setStatusTip("Select a netwrork stream to open");
    openNetworkStreamAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_N));
    connect(openNetworkStreamAction,&QAction::triggered,this,&MainWindow::openNetworkStream);

    openCaptureDeviceAction = new QAction(tr("Open Capture Device..."),this);
    openCaptureDeviceAction->setIcon(QIcon(":/images/icons/openCaptureDevice.jpg"));
    openCaptureDeviceAction->setStatusTip(tr("Select a device to use for capture"));
    openCaptureDeviceAction->setShortcut(QKeySequence::Copy);
    connect(openCaptureDeviceAction,&QAction::triggered,this,&MainWindow::openCaptureDevice);

    openLocationFromClipBoardAction = new QAction(tr("Open Location from clipboard"),this);
    openLocationFromClipBoardAction->setStatusTip(tr("Open a location from the clipboard"));
    openLocationFromClipBoardAction->setShortcut(QKeySequence::Paste);
    connect(openLocationFromClipBoardAction,&QAction::triggered,this,&MainWindow::openLocationFromClipBoard);

    //actions for the new open recent media submenu
    clearAction = new QAction("Clear");
    connect(clearAction,&QAction::triggered,this,&MainWindow::clearRecentMedia);

    saveToPlaylistAction = new QAction("Save To Playlist");
    for(int j=0; j<MaxRecentFiles;j++){
        recentFileActions[j] = new QAction;
        recentFileActions[j]->setVisible(false);
    }

    savePlayListToFileAction = new QAction(tr("Save Playlist to File..."),this);
    savePlayListToFileAction->setStatusTip(tr("Save the playlist to the hard disk"));
    savePlayListToFileAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_Y));
    connect(savePlayListToFileAction,&QAction::triggered,this,&MainWindow::savePlayListToFile);

    convertAndSaveAction = new QAction(tr("Convert/Save..."),this);
    convertAndSaveAction->setStatusTip(tr("Convert the File before saving"));
    convertAndSaveAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_R));
    connect(convertAndSaveAction,&QAction::triggered,this,&MainWindow::convertAndSave);

    streamAction = new QAction(tr("Stream..."),this);
    streamAction->setStatusTip(tr("Select a device to stream from"));
    streamAction->setIcon(QIcon(":/images/icons/stream.png"));
    streamAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_S));
    connect(streamAction,&QAction::triggered,this,&MainWindow::stream);

    quitAtEndOfPlaylistAction = new QAction(tr("Quit at the end of playlist"),this);
    quitAtEndOfPlaylistAction->setStatusTip(tr("Exit media player when the playlist is finishes"));
    quitAtEndOfPlaylistAction->setCheckable(true);
    quitAtEndOfPlaylistAction->setChecked(false);
    connect(quitAtEndOfPlaylistAction,&QAction::toggled,this,&MainWindow::quitAtEndOfPlaylist);

    quitAction = new QAction(tr("Quit..."),this);
    quitAction->setStatusTip(tr("Stop playing media and close media player"));
    quitAction->setIcon(QIcon(":/images/icons/quit.png"));
    quitAction->setShortcut(QKeySequence::Quit);
    connect(quitAction,&QAction::triggered,this,&QMainWindow::close);


    //add actions for submenus here

        fasterAction = new QAction(tr("Faster"),this);
        //fasterAction->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
        fasterAction->setStatusTip(tr(""));//setstatus tip
        connect(fasterAction,&QAction::triggered,playerPage,&PlayerPage::faster);

        fasterFineAction = new QAction(tr("Faster(fine)"),this);
        //fasterFineAction->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
        fasterFineAction->setStatusTip(tr(""));//setstatus tip
        connect(fasterFineAction,&QAction::triggered,playerPage,&PlayerPage::fasterFine);

        normalSpeedAction = new QAction(tr("Normal Speed"),this);
        //normalSpeedAction->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
        normalSpeedAction->setStatusTip(tr(""));//setstatus tip
        connect(normalSpeedAction,&QAction::triggered,playerPage,&PlayerPage::normalSpeed);

        slowerFineAction = new QAction(tr("Slower(fine)"),this);
        //slowerFineAction->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
        slowerFineAction->setStatusTip(tr(""));//setstatus tip
        connect(slowerFineAction,&QAction::triggered,playerPage,&PlayerPage::slowerFine);

        slowerAction = new QAction(tr("Slower"),this);
        //slowerAction->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
        slowerAction->setStatusTip(tr(""));//setstatus tip
        connect(slowerAction,&QAction::triggered,playerPage,&PlayerPage::slower);

    //Actions for the playBack menu
    jumpForwardAction = new QAction(tr("Jump Forward"),this);
    jumpForwardAction->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
    jumpForwardAction->setStatusTip("");//setstatus tip
    connect(jumpForwardAction,&QAction::triggered,playerPage,&PlayerPage::jumpForward);
    //jumpForwardAction->setEnabled(false);

    jumpBackwardAction = new QAction(tr("Jump Backward"),this);
    jumpBackwardAction->setIcon(style()->standardIcon(QStyle::SP_MediaSkipBackward));
    jumpBackwardAction->setStatusTip("");//setstatus tip
    connect(jumpBackwardAction,&QAction::triggered,playerPage,&PlayerPage::jumpBackward);
    //jumpBackwardAction->setEnabled(false);

    jumpToSpecificTimeAction = new QAction(tr("Jump to Specific Time"),this);
    jumpToSpecificTimeAction->setStatusTip("");//setstatus tip
    jumpToSpecificTimeAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_T));
    connect(jumpToSpecificTimeAction,&QAction::triggered,this,&MainWindow::jumpToSpecificTime);

    playAction = new QAction(tr("Play"),this);
    playAction->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    playAction->setStatusTip(tr(""));//setstatus tip
    connect(playAction,&QAction::triggered,this,&MainWindow::play);
    connect(playerPage,&PlayerPage::mediaStateChanged,this,&MainWindow::togglePlayAction);

    stopAction = new QAction(tr("Stop"),this);
    stopAction->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    stopAction->setStatusTip(tr(""));//setstatus tip
    connect(stopAction,&QAction::triggered,playerPage,&PlayerPage::stop);
    //stopAction->setEnabled(false);

    previousAction = new QAction(tr("Previous"),this);
    previousAction->setIcon(style()->standardIcon(QStyle::SP_MediaSkipBackward));
    previousAction->setStatusTip(tr(""));//setstatus tip
    connect(previousAction,&QAction::triggered,playerPage,&PlayerPage::previous);
    //previousAction->setEnabled(false);

    nextAction = new QAction(tr("Next"),this);
    nextAction->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
    nextAction->setStatusTip(tr(""));//setstatus tip
    connect(nextAction,&QAction::triggered,playerPage,&PlayerPage::next);
    //nextAction->setEnabled(false);

    recordAction = new QAction(tr("Record"),this);
    recordAction->setIcon(QIcon(":/images/icons/record.png"));
    recordAction->setStatusTip(tr(""));//setstatus tip
    connect(recordAction,&QAction::triggered,this,&MainWindow::record);
    //recordAction->setEnabled(false);


    //add actions for submenus here


    //Actions for the audio menu
    //Audio Track submenu
    audioTrackActionGroup = new QActionGroup(this);

        audioTrack_disableAction = new QAction(tr("Disable"),audioTrackActionGroup);
        audioTrack_disableAction->setCheckable(true);
        audioTrack_disableAction->setStatusTip(tr(""));//set the status tip

        audioTrack_track1Action = new QAction(tr("Track 1 - [%1]").arg("English"),audioTrackActionGroup);
        audioTrack_track1Action->setCheckable(true);
        audioTrack_track1Action->setStatusTip(tr(""));//set the status tip

    audioDeviceActionGroup = new QActionGroup(this);

        audioDevice_defaultAction = new QAction(tr("Default"),audioDeviceActionGroup);
        audioDevice_defaultAction->setCheckable(true);
        audioDevice_defaultAction->setStatusTip(tr(""));//set the status tip

    //Stereomode sub menu
    stereoModeActionGroup = new QActionGroup(this);

        stereoMode_stereoAction = new QAction(tr("Stereo"),stereoModeActionGroup);
        stereoMode_stereoAction->setCheckable(true);
        stereoMode_stereoAction->setStatusTip(tr(""));//set the status tip

        stereoMode_leftAction = new QAction(tr("Left"),stereoModeActionGroup);
        stereoMode_leftAction->setCheckable(true);
        stereoMode_leftAction->setStatusTip(tr(""));//set the status tip

        stereoMode_rightAction = new QAction(tr("Right"),stereoModeActionGroup);
        stereoMode_rightAction->setCheckable(true);
        stereoMode_rightAction->setStatusTip(tr(""));//set the status tip

        stereoMode_reverseAction = new QAction(tr("Reverse"),stereoModeActionGroup);
        stereoMode_reverseAction->setCheckable(true);
        stereoMode_reverseAction->setStatusTip(tr(""));//set the status tip

    //visualizations sub menu
    visualizationsActionGroup = new QActionGroup(this);

        visualizations_disableAction = new QAction(tr("Disable"),visualizationsActionGroup);
        visualizations_disableAction->setCheckable(true);
        visualizations_disableAction->setStatusTip(tr(""));//set the status tip

        visualizations_spectrometerAction = new QAction(tr("Spectrometer"),visualizationsActionGroup);
        visualizations_spectrometerAction->setCheckable(true);
        visualizations_spectrometerAction->setStatusTip(tr(""));//set the status tip

        visualizations_scopeAction = new QAction(tr("Scope"),visualizationsActionGroup);
        visualizations_scopeAction->setCheckable(true);
        visualizations_scopeAction->setStatusTip(tr(""));//set the status tip

        visualizations_spectrumAction = new QAction(tr("Spectrum"),visualizationsActionGroup);
        visualizations_spectrumAction->setCheckable(true);
        visualizations_spectrumAction->setStatusTip(tr(""));//set the status tip

        visualizations_vuMeterAction = new QAction(tr("Vu meter"),visualizationsActionGroup);
        visualizations_vuMeterAction->setCheckable(true);
        visualizations_vuMeterAction->setStatusTip(tr(""));//set the status tip

        visualizations_goomAction = new QAction(tr("Goom"),visualizationsActionGroup);
        visualizations_goomAction->setCheckable(true);
        visualizations_goomAction->setStatusTip(tr(""));//set the status tip

    increaseVolumeAction = new QAction(tr("Increase Volume"),this);
    increaseVolumeAction->setIcon(QIcon(":/images/icons/increaseVolume.png"));
    increaseVolumeAction->setStatusTip(tr(""));//setstatus tip
    connect(increaseVolumeAction,&QAction::triggered,playerPage,&PlayerPage::increaseVolume);

    decreaseVolumeAction = new QAction(tr("Decrease Volume"),this);
    decreaseVolumeAction->setIcon(QIcon(":/images/icons/decreaseVolume.png"));
    decreaseVolumeAction->setStatusTip(tr(""));//setstatus tip
    connect(decreaseVolumeAction,&QAction::triggered,playerPage,&PlayerPage::decreaseVolume);

    muteVolumeAction = new QAction(tr("Mute"),this);
    muteVolumeAction->setIcon(QIcon(":/images/icons/muteVolume.png"));
    muteVolumeAction->setStatusTip(tr(""));//setstatus tip
    muteVolumeAction->setCheckable(true);
    connect(muteVolumeAction,&QAction::toggled,playerPage,&PlayerPage::mute);
    connect(playerPage,&PlayerPage::muted,muteVolumeAction,&QAction::setChecked);


     //add actions for submenus here

    //Actions for the video menu. Actions belonging to submenus have been created first
        //video Track submenu
        videoTrackActionGroup = new QActionGroup(this);

        videoTrack_disableAction = new QAction(tr("Disable"),videoTrackActionGroup);
        videoTrack_disableAction->setCheckable(true);
        videoTrack_disableAction->setStatusTip(tr(""));//set the status tip

        videoTrack_track1Action = new QAction(tr("Track 1"),videoTrackActionGroup);
        videoTrack_track1Action->setCheckable(true);
        videoTrack_track1Action->setStatusTip(tr(""));//set the status tip

        //Zoom submenu
        zoomActionGroup = new QActionGroup(this);

        zoom_quarterAction = new QAction(tr("1:4 Quarter"),zoomActionGroup);
        zoom_quarterAction->setCheckable(true);
        zoom_quarterAction->setStatusTip(tr(""));//set the status tip

        zoom_halfAction = new QAction(tr("1:2 Half"),zoomActionGroup);
        zoom_halfAction->setCheckable(true);
        zoom_halfAction->setStatusTip(tr(""));//set the status tip

        zoom_originalAction = new QAction(tr("1:1 Original"),zoomActionGroup);
        zoom_originalAction->setCheckable(true);
        zoom_originalAction->setStatusTip(tr(""));//set the status tip

        zoom_doubleAction = new QAction(tr("1:4 Double"),zoomActionGroup);
        zoom_doubleAction->setCheckable(true);
        zoom_doubleAction->setStatusTip(tr(""));//set the status tip


        //Aspect Ratio submenu
        aspectRatioActionGroup = new QActionGroup(this);

        aspectRatio_defaultAction = new QAction(tr("Default"),aspectRatioActionGroup);
        aspectRatio_defaultAction->setCheckable(true);
        aspectRatio_defaultAction->setStatusTip(tr(""));//set the status tip

        aspectRatio_16_9_Action = new QAction(tr("16:9"),aspectRatioActionGroup);
        aspectRatio_16_9_Action->setCheckable(true);
        aspectRatio_16_9_Action->setStatusTip(tr(""));//set the status tip

        aspectRatio_4_3_Action = new QAction(tr("4:3"),aspectRatioActionGroup);
        aspectRatio_4_3_Action->setCheckable(true);
        aspectRatio_4_3_Action->setStatusTip(tr(""));//set the status tip

        aspectRatio_1_1_Action = new QAction(tr("1:1"),aspectRatioActionGroup);
        aspectRatio_1_1_Action->setCheckable(true);
        aspectRatio_1_1_Action->setStatusTip(tr(""));//set the status tip

        aspectRatio_16_10_Action = new QAction(tr("16:10"),aspectRatioActionGroup);
        aspectRatio_16_10_Action->setCheckable(true);
        aspectRatio_16_10_Action->setStatusTip(tr(""));//set the status tip

        aspectRatio_2_21_1_Action = new QAction(tr("2.21:1"),aspectRatioActionGroup);
        aspectRatio_2_21_1_Action->setCheckable(true);
        aspectRatio_2_21_1_Action->setStatusTip(tr(""));//set the status tip

        aspectRatio_2_35_1_Action = new QAction(tr("2.35:1"),aspectRatioActionGroup);
        aspectRatio_2_35_1_Action->setCheckable(true);
        aspectRatio_2_35_1_Action->setStatusTip(tr(""));//set the status tip

        aspectRatio_2_39_1_Action = new QAction(tr("2.39:1"),aspectRatioActionGroup);
        aspectRatio_2_39_1_Action->setCheckable(true);
        aspectRatio_2_39_1_Action->setStatusTip(tr(""));//set the status tip

        aspectRatio_5_4_Action = new QAction(tr("5:4"),aspectRatioActionGroup);
        aspectRatio_5_4_Action->setCheckable(true);
        aspectRatio_5_4_Action->setStatusTip(tr(""));//set the status tip


        //Crop submenu
        cropActionGroup = new QActionGroup(this);

        crop_defaultAction = new QAction(tr("Default"),cropActionGroup);
        crop_defaultAction->setCheckable(true);
        crop_defaultAction->setStatusTip(tr(""));//set the status tip

        crop_16_9_Action = new QAction(tr("16:9"),cropActionGroup);
        crop_16_9_Action->setCheckable(true);
        crop_16_9_Action->setStatusTip(tr(""));//set the status tip

        crop_4_3_Action = new QAction(tr("4:3"),cropActionGroup);
        crop_4_3_Action->setCheckable(true);
        crop_4_3_Action->setStatusTip(tr(""));//set the status tip

        crop_1_1_Action = new QAction(tr("1:1"),cropActionGroup);
        crop_1_1_Action->setCheckable(true);
        crop_1_1_Action->setStatusTip(tr(""));//set the status tip

        crop_16_10_Action = new QAction(tr("16:10"),cropActionGroup);
        crop_16_10_Action->setCheckable(true);
        crop_16_10_Action->setStatusTip(tr(""));//set the status tip

        crop_2_21_1_Action = new QAction(tr("2.21:1"),cropActionGroup);
        crop_2_21_1_Action->setCheckable(true);
        crop_2_21_1_Action->setStatusTip(tr(""));//set the status tip

        crop_1_85_1_Action = new QAction(tr("1.85:1"),cropActionGroup);
        crop_1_85_1_Action->setCheckable(true);
        crop_1_85_1_Action->setStatusTip(tr(""));//set the status tip

        crop_2_35_1_Action = new QAction(tr("2.35:1"),cropActionGroup);
        crop_2_35_1_Action->setCheckable(true);
        crop_2_35_1_Action->setStatusTip(tr(""));//set the status tip

        crop_2_39_1_Action = new QAction(tr("2.39:1"),cropActionGroup);
        crop_2_39_1_Action->setCheckable(true);
        crop_2_39_1_Action->setStatusTip(tr(""));//set the status tip

        crop_5_3_Action = new QAction(tr("5:3"),cropActionGroup);
        crop_5_3_Action->setCheckable(true);
        crop_5_3_Action->setStatusTip(tr(""));//set the status tip

        crop_5_4_Action = new QAction(tr("5:4"),cropActionGroup);
        crop_5_4_Action->setCheckable(true);
        crop_5_4_Action->setStatusTip(tr(""));//set the status tip


        //Deinterlace submenu
        deInterlaceActionGroup= new QActionGroup(this);

        deInterlace_offAction = new QAction(tr("Off"),deInterlaceActionGroup);
        deInterlace_offAction->setCheckable(true);
        deInterlace_offAction->setStatusTip(tr(""));//set status tip

        deInterlace_automaticAction = new QAction(tr("Automatic"),deInterlaceActionGroup);
        deInterlace_automaticAction->setCheckable(true);
        deInterlace_automaticAction->setStatusTip(tr(""));//set status tip

        deInterlace_onAction = new QAction(tr("On"),deInterlaceActionGroup);
        deInterlace_onAction->setCheckable(true);
        deInterlace_onAction->setStatusTip(tr(""));//set status tip

        //Deinterlace Mode submenu
        deInterlaceModeActionGroup= new QActionGroup(this);

        deInterlaceMode_discardAction = new QAction(tr("Discard"),deInterlaceModeActionGroup);
        deInterlaceMode_discardAction->setCheckable(true);
        deInterlaceMode_discardAction->setStatusTip(tr(""));//set status tip

        deInterlaceMode_blendAction = new QAction(tr("Blend"),deInterlaceModeActionGroup);
        deInterlaceMode_blendAction->setCheckable(true);
        deInterlaceMode_blendAction->setStatusTip(tr(""));//set status tip

        deInterlaceMode_meanAction = new QAction(tr("Mean"),deInterlaceModeActionGroup);
        deInterlaceMode_meanAction->setCheckable(true);
        deInterlaceMode_meanAction->setStatusTip(tr(""));//set status tip

        deInterlaceMode_bobAction = new QAction(tr("Bob"),deInterlaceModeActionGroup);
        deInterlaceMode_bobAction->setCheckable(true);
        deInterlaceMode_bobAction->setStatusTip(tr(""));//set status tip

        deInterlaceMode_linearAction = new QAction(tr("Linear"),deInterlaceModeActionGroup);
        deInterlaceMode_linearAction->setCheckable(true);
        deInterlaceMode_linearAction->setStatusTip(tr(""));//set status tip

        deInterlaceMode_xAction = new QAction(tr("X"),deInterlaceModeActionGroup);
        deInterlaceMode_xAction->setCheckable(true);
        deInterlaceMode_xAction->setStatusTip(tr(""));//set status tip

        deInterlaceMode_yadifAction = new QAction(tr("Yadif"),deInterlaceModeActionGroup);
        deInterlaceMode_yadifAction->setCheckable(true);
        deInterlaceMode_yadifAction->setStatusTip(tr(""));//set status tip

        deInterlaceMode_yadif_2x_Action = new QAction(tr("Yadif(2x)"),deInterlaceModeActionGroup);
        deInterlaceMode_yadif_2x_Action->setCheckable(true);
        deInterlaceMode_yadif_2x_Action->setStatusTip(tr(""));//set status tip

        deInterlaceMode_phosphorAction = new QAction(tr("Phosphor"),deInterlaceModeActionGroup);
        deInterlaceMode_phosphorAction->setCheckable(true);
        deInterlaceMode_phosphorAction->setStatusTip(tr(""));//set status tip

        deInterlaceMode_filmAction = new QAction(tr("Film NTSC(IVTC)"),deInterlaceModeActionGroup);
        deInterlaceMode_filmAction->setCheckable(true);
        deInterlaceMode_filmAction->setStatusTip(tr(""));//set status tip

        //post processing submenu
        postProcessingActionGroup= new QActionGroup(this);

        postProcessing_disableAction = new QAction(tr("Disable"),postProcessingActionGroup);
        postProcessing_disableAction->setCheckable(true);
        postProcessing_disableAction->setStatusTip(tr(""));//set status tip

        postProcessing_lowestAction = new QAction(tr("Lowest"),postProcessingActionGroup);
        postProcessing_lowestAction->setCheckable(true);
        postProcessing_lowestAction->setStatusTip(tr(""));//set status tip

        postProcessing_middleAction = new QAction(tr("Middle"),postProcessingActionGroup);
        postProcessing_middleAction->setCheckable(true);
        postProcessing_middleAction->setStatusTip(tr(""));//set status tip

        postProcessing_highestAction = new QAction(tr("Highest"),postProcessingActionGroup);
        postProcessing_highestAction->setCheckable(true);
        postProcessing_highestAction->setStatusTip(tr(""));//set status tip

    fullScreenAction = new QAction(tr("FullScreen"),this);
    fullScreenAction->setStatusTip(tr(""));//setstatus tip
    fullScreenAction->setCheckable(true);
    fullScreenAction->setChecked(false);
    connect(fullScreenAction,&QAction::toggled,this,&MainWindow::fullScreen);

    alwaysFitWindowAction = new QAction(tr("Always Fit Window"),this);
    alwaysFitWindowAction->setStatusTip(tr(""));//setstatus tip
    alwaysFitWindowAction->setCheckable(true);
    alwaysFitWindowAction->setChecked(false);
    connect(alwaysFitWindowAction,&QAction::toggled,this,&MainWindow::alwaysFitWindow);
    alwaysFitWindowAction->setEnabled(false);

    alwaysOnTopAction = new QAction(tr("Always On Top"),this);
    alwaysOnTopAction->setStatusTip(tr(""));//setstatus tip
    alwaysOnTopAction->setCheckable(true);
    alwaysOnTopAction->setChecked(false);
    connect(alwaysOnTopAction,&QAction::toggled,this,&MainWindow::alwaysOnTop);

    setAsWallpaperAction = new QAction(tr("Set as Wallpaper"),this);
    setAsWallpaperAction->setStatusTip(tr(""));//setstatus tip
    setAsWallpaperAction->setCheckable(true);
    setAsWallpaperAction->setChecked(false);
    connect(setAsWallpaperAction,&QAction::toggled,this,&MainWindow::setAsWallpaper);

    takeSnapshotAction = new QAction(tr("Take Snapshot"));
    takeSnapshotAction->setStatusTip(tr(""));//setstatus tip
    connect(takeSnapshotAction,&QAction::triggered,this,&MainWindow::takeSnapshot);
    takeSnapshotAction->setEnabled(false);

     //add actions for submenus here

    //Actions for the subtitle menu
    addSubtitleFileAction = new QAction(tr("Add SubTitle File..."));
    addSubtitleFileAction->setStatusTip(tr(""));//setstatus tip
    connect(addSubtitleFileAction,&QAction::triggered,this,&MainWindow::addSubtitleFile);

    //add actions for submenus here

    //Actions for the tools menu

    effectsAndFiltersAction = new QAction(tr("Effects and Filters"),this);
    effectsAndFiltersAction->setIcon(QIcon(":/images/icons/effectsAndFilters.png"));
    effectsAndFiltersAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_E));
    effectsAndFiltersAction->setStatusTip(tr(""));//set status tip
    connect(effectsAndFiltersAction,&QAction::triggered,this,&MainWindow::effectsAndFilters);


    trackSynchronizationAction = new QAction(tr("Track Synchronization"),this);
    trackSynchronizationAction->setIcon(QIcon(":/images/icons/effectsAndFilters.png"));
    trackSynchronizationAction->setStatusTip(tr(""));//set status tip
    connect(trackSynchronizationAction,&QAction::triggered,this,&MainWindow::trackSynchronization);


    mediaInformationAction = new QAction(tr("Media Information"),this);
    mediaInformationAction->setIcon(QIcon(":/images/icons/information.jpg"));
    mediaInformationAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_I));
    mediaInformationAction->setStatusTip(tr(""));//set status tip
    connect(mediaInformationAction,&QAction::triggered,this,&MainWindow::mediaInformation);


    codecInformationAction = new QAction(tr("Codec Information"),this);
    codecInformationAction->setIcon(QIcon(":/images/icons/information.jpg"));
    codecInformationAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_J));
    codecInformationAction->setStatusTip(tr(""));//set status tip
    connect(codecInformationAction,&QAction::triggered,this,&MainWindow::codecInformation);

    VLMConfigurationAction = new QAction(tr("VLM Configuration"),this);
    VLMConfigurationAction->setShortcut(QKeySequence(Qt::CTRL+Qt::SHIFT+Qt::Key_W));
    VLMConfigurationAction->setStatusTip(tr(""));//set status tip
    connect(VLMConfigurationAction,&QAction::triggered,this,&MainWindow::VLMConfiguration);

    programGuideAction = new QAction(tr("Program Guide"),this);
    programGuideAction->setStatusTip(tr(""));//set status tip
    connect(programGuideAction,&QAction::triggered,this,&MainWindow::programGuide);

    messagesAction = new QAction(tr("Messages"),this);
    messagesAction->setIcon(QIcon(":/images/icons/messages.png"));
    messagesAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_M));
    messagesAction->setStatusTip(tr(""));//set status tip
    connect(messagesAction,&QAction::triggered,this,&MainWindow::messages);

    pluginsAndExtensionsAction = new QAction(tr("Plugins and extensions"),this);
    pluginsAndExtensionsAction->setStatusTip(tr(""));//set status tip
    connect(pluginsAndExtensionsAction,&QAction::triggered,this,&MainWindow::pluginsAndExtensions);

    customiseInterfaceAction = new QAction(tr("Customise Interface..."),this);
    customiseInterfaceAction->setIcon(QIcon(":/images/icons/preferences.png"));
    customiseInterfaceAction->setStatusTip(tr(""));//set status tip
    connect(customiseInterfaceAction,&QAction::triggered,this,&MainWindow::customiseInterface);

    preferencesAction = new QAction(tr("Preferences"),this);
    preferencesAction->setIcon(QIcon(":/images/icons/preferences.png"));
    preferencesAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_P));
    preferencesAction->setStatusTip(tr(""));//set status tip
    connect(preferencesAction,&QAction::triggered,this,&MainWindow::preferences);


    //Actions for the view menu
    playListAction = new QAction(tr("PlayList"),this);
    playListAction->setIcon(QIcon(":/images/icons/playlist.png"));//make image file name match with action and slot names
    playListAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_L));
    playListAction->setStatusTip(tr(""));//set status tip
    playListAction->setCheckable(true);
    playListAction->setChecked(false);
    connect(playListAction,&QAction::toggled,this,&MainWindow::playlistView);


    dockedPlayListAction = new QAction(tr("Docked PlayList"),this);
    dockedPlayListAction->setStatusTip(tr(""));//setstatus tip
    dockedPlayListAction->setCheckable(true);
    dockedPlayListAction->setChecked(true);
    playerPage->setDockedView(dockedPlayListAction->isChecked());
    connect(dockedPlayListAction,&QAction::toggled,this,&MainWindow::dockedPlayList);
    connect(dockedPlayListAction,&QAction::toggled,playerPage,&PlayerPage::setDockedView);

        //playlist view submenu
        playListViewModeActionGroup = new QActionGroup(this);

        iconsAction = new QAction(tr("Icons"),playListViewModeActionGroup);
        iconsAction->setStatusTip(tr(""));
        iconsAction->setCheckable(true);
        iconsAction->setData(QVariant("Icons"));
        connect(iconsAction,&QAction::toggled,this,&MainWindow::iconViewMode);

        detailedListAction = new QAction(tr("Detailed List"),playListViewModeActionGroup);
        detailedListAction->setStatusTip(tr(""));
        detailedListAction->setCheckable(true);
        detailedListAction->setData(QVariant("DetailedList"));
        connect(detailedListAction,&QAction::toggled,this,&MainWindow::detailedViewMode);

        listAction = new QAction(tr("List"),playListViewModeActionGroup);
        listAction->setStatusTip(tr(""));
        listAction->setCheckable(true);
        detailedListAction->setData(QVariant("List"));
        connect(listAction,&QAction::toggled,this,&MainWindow::listViewMode);

        pictureFlowAction = new QAction(tr("Picture Flow"),playListViewModeActionGroup);
        pictureFlowAction->setStatusTip(tr(""));
        pictureFlowAction->setCheckable(true);
        detailedListAction->setData(QVariant("PictureFlow"));
        connect(pictureFlowAction,&QAction::toggled,this,&MainWindow::PictureFlowViewMode);

    minimalInterfaceAction = new QAction(tr("Minimal Interface"),this);
    minimalInterfaceAction->setStatusTip(tr(""));//setstatus tip
    minimalInterfaceAction->setCheckable(true);
    minimalInterfaceAction->setChecked(false);
    minimalInterfaceAction->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_H));
    connect(minimalInterfaceAction,&QAction::toggled,this,&MainWindow::minimalInterface);

    fullScreenInterfaceAction = new QAction(tr("Fullscreen Interface"),this);
    fullScreenInterfaceAction->setStatusTip(tr(""));//setstatus tip
    fullScreenInterfaceAction->setCheckable(true);
    fullScreenInterfaceAction->setChecked(false);
    fullScreenInterfaceAction->setShortcut(QKeySequence(Qt::Key_F11));
    connect(fullScreenInterfaceAction,&QAction::toggled,this,&MainWindow::fullScreenInterface);

    advancedControlsAction = new QAction(tr("Advanced Controls"),this);
    advancedControlsAction->setStatusTip(tr(""));//setstatus tip
    advancedControlsAction->setCheckable(true);
    advancedControlsAction->setChecked(false);
    connect(advancedControlsAction,&QAction::toggled,this,&MainWindow::advancedControls);

    statusBarAction = new QAction(tr("Status Bar"),this);
    statusBarAction->setStatusTip(tr(""));//setstatus tip
    statusBarAction->setCheckable(true);
    connect(statusBarAction,&QAction::toggled,this,&MainWindow::showStatusBar);

    addInterfaceActionGroup = new QActionGroup(this);

        consoleAction = new QAction(tr("Console"),addInterfaceActionGroup);
        consoleAction->setCheckable(true);
        consoleAction->setStatusTip(tr(""));//set status tip

        telnetAction = new QAction(tr("Console"),addInterfaceActionGroup);
        telnetAction->setCheckable(true);
        telnetAction->setStatusTip(tr(""));//

        webAction = new QAction(tr("Web"),addInterfaceActionGroup);
        webAction->setCheckable(true);
        webAction->setStatusTip(tr(""));//set status tip

        debugLoggingAction = new QAction(tr("Debug Logging"),addInterfaceActionGroup);
        debugLoggingAction->setCheckable(true);
        debugLoggingAction->setStatusTip(tr(""));//set status tip

        mouseGesturesAction = new QAction(tr("mouseGestures"),addInterfaceActionGroup);
        mouseGesturesAction->setCheckable(true);
        mouseGesturesAction->setStatusTip(tr(""));//set status tip

    downloadSubtitlesAction = new QAction(tr("Download Subtitles"),this);
    downloadSubtitlesAction->setStatusTip(tr(""));//setstatus tip
    connect(downloadSubtitlesAction,&QAction::toggled,this,&MainWindow::donwloadSubtitles);

    //add actions for submenus here


    //Actions for the help menu
    helpAction = new QAction(tr("Help"),this);
    helpAction->setIcon(QIcon(":/images/icons/help.png"));
    helpAction->setShortcuts(QKeySequence::HelpContents);
    helpAction->setStatusTip(tr(""));//set status tip
    connect(helpAction,&QAction::triggered,this,&MainWindow::help);

    checkForUpdatesAction = new QAction(tr("Check for Updates..."),this);
    checkForUpdatesAction->setStatusTip(tr(""));//set status tip
    connect(checkForUpdatesAction,&QAction::triggered,this,&MainWindow::checkForUpdates);

    aboutAction = new QAction(tr("About"),this);
    aboutAction->setIcon(QIcon(":/images/icons/information.jpg"));
    aboutAction->setShortcuts(QKeySequence::WhatsThis);
    aboutAction->setStatusTip(tr(""));//setstatus tip
    connect(aboutAction,&QAction::triggered,this,&MainWindow::about);

}

void MainWindow::createStatusBar()
{
   statBar = this->statusBar();
   titleLabel = new QLabel(QString(strippedName(currentFile)));
   rateLabel = new QLabel("1.00X");
   timeLabel = new QLabel("00:00/00:00");

   statBar->addWidget(titleLabel,4);
   statBar->addWidget(rateLabel,0);
   statBar->addWidget(timeLabel,0);

   //statBar->setLayout(layout);
   statBar->setContentsMargins(10,5,5,5);
   statBar->setVisible(statusBarAction->isChecked());

   connect(playerPage,&PlayerPage::mediaPosChanged,this,MainWindow::updateStatusBar);
}
void MainWindow::updateStatusBar(){

     qreal rate = playerPage->mediaRate();
     qint64 tElapsed = playerPage->mediaPosition()/1000;
     qint64 dur = playerPage->mediaDuration()/1000;
     titleLabel->setText(strippedName(currentFile));
     rateLabel->setText(QString::number(rate).append("x"));

     qint64 tLeft/*time left*/ = dur - tElapsed;
     QString timeElapsedFormat;
     QString timeLeftFormat;
     QString durationFormat;

     timeElapsedFormat = tElapsed<3600? QString("mm:ss") : QString("hh:mm:ss");
     timeLeftFormat = tLeft<3600? QString("mm:ss") : QString("hh:mm:ss");
     durationFormat = dur <3600? QString("mm:ss") : QString("hh:mm:ss");

     QTime elapsedTime(tElapsed/3600,tElapsed/60,tElapsed%60);
     QTime leftTime(tLeft/3600,tLeft/60,tLeft%60);
     QTime durationTime(dur/3600,dur/60,dur%60);

     QString displayTime = tr("%1/%2").arg(elapsedTime.toString(timeElapsedFormat)).arg(durationTime.toString(durationFormat));

     timeLabel->setText(displayTime);
}
void MainWindow::showStatusBar(bool show)
{
            statBar->setVisible(show);
}
void MainWindow::createToolBar()
{

}

QString MainWindow::strippedName(const QString &fullFileName)
{
    return QFileInfo(fullFileName).fileName();
}

void MainWindow::loadFile(const QString &fileName)
{
    setCurrentFile(fileName);
}

void MainWindow::updateRecentMediaActions()
{
     QMutableStringListIterator i(recentFileNames);

     //remove all files that no longer exist
     while(i.hasNext()){
         if(!QFile::exists(i.next())){
             i.remove();
         }
     }

     for(int j=0; j<MaxRecentFiles && j<recentFileNames.count();j++){
         recentFileActions[j]->setText(tr("%1: %2").arg(j+1).arg(recentFileNames.at(j)));
         recentFileActions[j]->setData(recentFileNames.at(j));
         recentFileActions[j]->setVisible(true);
         recentFileActions[j]->setShortcut(QKeySequence(Qt::CTRL+(j+ Qt::Key_1)));
         connect(recentFileActions[j],&QAction::triggered,this,&MainWindow::openRecentMedia);
     }

     bool isEmpty = recentFileNames.isEmpty();
     seperatorAction->setVisible(!isEmpty);
     clearAction->setVisible(!isEmpty);
     saveToPlaylistAction->setVisible(!isEmpty);

}

void MainWindow::togglePlayAction(QMediaPlayer::State state)
{
    switch (state) {
    case QMediaPlayer::PlayingState :
          playAction->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
          playAction->setText(tr("Pause"));
          playAction->setStatusTip(tr(""));
        break;
    case QMediaPlayer::PausedState :
    case QMediaPlayer::StoppedState :
        playAction->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
        playAction->setText(tr("Play"));
        playAction->setStatusTip(tr(""));
       break;
    default:
        break;
    }
}

void MainWindow::setCurrentFile(const QString &fileName)
{
    currentFile = fileName;

    QString showName = currentFile.isEmpty()? QString(""): strippedName(currentFile) + " -" ;

    setWindowTitle(tr("%1 %2").arg(showName).arg(tr("VLC Media Player")));


        updateStatusBar();
}
