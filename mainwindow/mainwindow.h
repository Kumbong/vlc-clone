 #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QMediaPlayer>
class QLabel;
class QActionGroup;
class PlayerPage;
class QMediaPlayer;
class QVideoWidget;
class QStatusBar;
class PlaylistPage;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //slots for media menu
    void openFile();
    void openMultipleFiles();
    void openFolder();
    void openDisc();
    void openNetworkStream();
    void openCaptureDevice();
    void openLocationFromClipBoard();
    void openRecentMedia();
        //slots for the submenu
        void clearRecentMedia();
        void saveToPlaylist();
    void savePlayListToFile();
    void convertAndSave();
    void stream();
    void quitAtEndOfPlaylist(bool);

    //slots for playBack menu
    void menu();
    void faster();
    void slower();
    void jumpForward();
    void jumpBackward();
    void jumpToSpecificTime();
    void play();
    void stop();
    void previous();
    void next();
    void record();

    //slots for audio menu
    void disableAudio();
    void track1();
    void spectrometerVisualization();
    void scopeVisualization();
    void spectrumVisaulization();
    void vuMeterVisualization();
    void goomVisualization();

    //slots for the video menu
    void disableVideo();
    void fullScreen(bool);
    void alwaysFitWindow(bool);
    void alwaysOnTop(bool);
    void setAsWallpaper(bool);
    void zoom();
    void setAspectRatio();
    void deInterlace();
    void deInterLaceMode();
    void postProcessing();
    void takeSnapshot();

    //slots for the subtitle menu
    void addSubtitleFile();
    void subTrack();

    //slots for the tool menu
    void effectsAndFilters();
    void trackSynchronization();
    void mediaInformation();
    void codecInformation();
    void VLMConfiguration();
    void programGuide();
    void messages();
    void pluginsAndExtensions();
    void customiseInterface();
    void preferences();

    //slots for the view menu
    void dockedPlayList(bool);
    void minimalInterface(bool);
    void fullScreenInterface(bool);
    void advancedControls(bool);
    void showStatusBar(bool show);
    void donwloadSubtitles();

    //slots for the help menu
    void help();
    void checkForUpdates();
    void about();

  //helper slots
   void updateStatusBar();
   void loadFile(const QString &fileName);

private:

    //helper functions
    void createMenus();
    void createActions();
    void createStatusBar();
    void createToolBar();
    QString strippedName(const QString &fullFileName);
    void setCurrentFile(const QString &fileName);
    void updateRecentMediaActions();
    void togglePlayAction(QMediaPlayer::State);

/********************** pointers to the various menus and submenus *****************************************/

    QMenu *mediaMenu;
       //submenus under media menu
        QMenu *openRecentMediaSubMenu;

    QMenu *playBackMenu;
        //submenus under playBack menu
        QMenu *titleSubMenu;
        QMenu *chapterSubMenu;
        QMenu *programmeSubMenu;
        QMenu *customBookmarksSubMenu;
        QMenu *speedSubMenu;

    QMenu *audioMenu;
        //submenus under audio menu
        QMenu *audioTrackSubMenu;
        QMenu *audioDeviceSubMenu;
        QMenu *stereoModeSubMenu;
        QMenu *visualizationsSubMenu;

    QMenu *videoMenu;
        //submenus under the video menu
        QMenu *videoTrackSubMenu;
        QMenu *zoomSubMenu;
        QMenu *aspectRatioSubMenu;
        QMenu *cropSubMenu;
        QMenu *deInterlaceSubMenu;
        QMenu *deInterlaceModeSubMenu;
        QMenu *postProcessingSubMenu;

    QMenu *subtitleMenu;
        //submenus under the vidoemenu
        QMenu *subTrackSubMenu;

    QMenu *toolsMenu;
    QMenu *viewMenu;
         //submenus under the view menu
        QMenu *playListViewModeSubMenu;
        QMenu *addInterfaceSubMenu;
    QMenu *helpMenu;
/***********************************************************************************************************/

/**************************** Pointers to the actions in the various menus and submenus ********************/
    //Actions for the media menu
    QAction *openFileAction;
    QAction *openMultipleFilesAction;
    QAction *openFolderAction;
    QAction *openDiscAction;
    QAction *openNetworkStreamAction;
    QAction *openCaptureDeviceAction;
    QAction *openLocationFromClipBoardAction;
    QAction *savePlayListToFileAction;
    QAction *convertAndSaveAction;
    QAction *streamAction;
    QAction *quitAtEndOfPlaylistAction;
    QAction *quitAction;

    //add actions for recent media submenu
        QAction *clearAction;
        QAction *saveToPlaylistAction;

    //Actions for the playBack menu
        //Actions for the speed submenu
        QAction *fasterAction;
        QAction *fasterFineAction;
        QAction *normalSpeedAction;
        QAction *slowerFineAction;
        QAction *slowerAction;
    QAction *jumpForwardAction;
    QAction *jumpBackwardAction;
    QAction *jumpToSpecificTimeAction;
    QAction *playAction;
    QAction *stopAction;
    QAction *previousAction;
    QAction *nextAction;
    QAction *recordAction;

    //add actions for submenus here


    //Actions for the audio menu
    QAction *increaseVolumeAction;
    QAction *decreaseVolumeAction;
    QAction *muteVolumeAction;

     //Audio Track submenu
        QActionGroup *audioTrackActionGroup;
        QAction *audioTrack_disableAction;
        QAction *audioTrack_track1Action;

     //Audio device submenu
        QActionGroup *audioDeviceActionGroup;
        QAction *audioDevice_defaultAction;
        //add actions for other devices

     //Stereo mode submenu
        QActionGroup *stereoModeActionGroup;
        QAction *stereoMode_stereoAction;
        QAction *stereoMode_leftAction;
        QAction *stereoMode_rightAction;
        QAction *stereoMode_reverseAction;

     //Visualizations mode submenu
        QActionGroup *visualizationsActionGroup;
        QAction *visualizations_disableAction;
        QAction *visualizations_spectrometerAction;
        QAction *visualizations_scopeAction;
        QAction *visualizations_spectrumAction;
        QAction *visualizations_vuMeterAction;
        QAction *visualizations_goomAction;

    //Actions for the video menu
    QAction *fullScreenAction;
    QAction *alwaysFitWindowAction;
    QAction *alwaysOnTopAction;
    QAction *setAsWallpaperAction;
    QAction *takeSnapshotAction;

        //video Track submenu
        QActionGroup *videoTrackActionGroup;
        QAction *videoTrack_disableAction;
        QAction *videoTrack_track1Action;

        //Zoom submenu
        QActionGroup *zoomActionGroup;
        QAction *zoom_quarterAction;
        QAction *zoom_halfAction;
        QAction *zoom_originalAction;
        QAction *zoom_doubleAction;

        //Aspect Ratio submenu
        QActionGroup *aspectRatioActionGroup;
        QAction *aspectRatio_defaultAction;
        QAction *aspectRatio_16_9_Action;
        QAction *aspectRatio_4_3_Action;
        QAction *aspectRatio_1_1_Action;
        QAction *aspectRatio_16_10_Action;
        QAction *aspectRatio_2_21_1_Action;
        QAction *aspectRatio_2_35_1_Action;
        QAction *aspectRatio_2_39_1_Action;
        QAction *aspectRatio_5_4_Action;

        //Crop submenu
        QActionGroup *cropActionGroup;
        QAction *crop_defaultAction;
        QAction *crop_16_10_Action;
        QAction *crop_16_9_Action;
        QAction *crop_4_3_Action;
        QAction *crop_1_85_1_Action;
        QAction *crop_2_21_1_Action;
        QAction *crop_2_35_1_Action;
        QAction *crop_2_39_1_Action;
        QAction *crop_5_3_Action;
        QAction *crop_5_4_Action;
        QAction *crop_1_1_Action;

        //Deinterlace submenu
        QActionGroup *deInterlaceActionGroup;
        QAction *deInterlace_offAction;
        QAction *deInterlace_automaticAction;
        QAction *deInterlace_onAction;

        //Deinterlace Mode submenu
        QActionGroup *deInterlaceModeActionGroup;
        QAction *deInterlaceMode_discardAction;
        QAction *deInterlaceMode_blendAction;
        QAction *deInterlaceMode_meanAction;
        QAction *deInterlaceMode_bobAction;
        QAction *deInterlaceMode_linearAction;
        QAction *deInterlaceMode_xAction;
        QAction *deInterlaceMode_yadifAction;
        QAction *deInterlaceMode_yadif_2x_Action;
        QAction *deInterlaceMode_phosphorAction;
        QAction *deInterlaceMode_filmAction;

        //post processing submenu
        QActionGroup *postProcessingActionGroup;
        QAction *postProcessing_disableAction;
        QAction *postProcessing_lowestAction;
        QAction *postProcessing_middleAction;
        QAction *postProcessing_highestAction;


    //Actions for the subtitle menu
    QAction *addSubtitleFileAction;
    //add actions for submenus here

    //Actions for the tools menu
    QAction *effectsAndFiltersAction;
    QAction *trackSynchronizationAction;
    QAction *mediaInformationAction;
    QAction *codecInformationAction;
    QAction *VLMConfigurationAction;
    QAction *programGuideAction;
    QAction *messagesAction;
    QAction *pluginsAndExtensionsAction;
    QAction *customiseInterfaceAction;
    QAction *preferencesAction;

    //Actions for the view menu
    QAction *playListAction;
    QAction *dockedPlayListAction;
    QAction *minimalInterfaceAction;
    QAction *fullScreenInterfaceAction;
    QAction *advancedControlsAction;
    QAction *statusBarAction;
    QAction *downloadSubtitlesAction;
        //Actions for the playlist view mode sub menu
        QActionGroup *playListViewModeActionGroup;
        QAction *iconsAction;
        QAction *detailedListAction;
        QAction *listAction;
        QAction *pictureFlowAction;

        //Actions for the add interface sub menu
        QActionGroup *addInterfaceActionGroup;
        QAction *consoleAction;
        QAction *telnetAction;
        QAction *webAction;
        QAction *debugLoggingAction;
        QAction *mouseGesturesAction;

    //Actions for the help menu
    QAction *helpAction;
    QAction *checkForUpdatesAction;
    QAction *aboutAction;

 /**********************************************************************************************************/

   QList<QUrl> playlist;
   QString currentFile;
   QStringList recentFileNames;
   enum {MaxRecentFiles=10};
   QAction *seperatorAction;
   QAction *recentFileActions[MaxRecentFiles];
   PlayerPage *playerPage;
   PlaylistPage *playlistPage;
   //QMediaPlayer *mediaPlayer;
   //QVideoWidget *videoWidget;

   QLabel *titleLabel;
   QLabel *timeLabel;
   QLabel *rateLabel;
   QStatusBar *statBar;
};

#endif // MAINWINDOW_H
