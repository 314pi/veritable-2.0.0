/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Fri Jun 22 23:20:21 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionSaveSettings;
    QAction *actionLoadSettings;
    QAction *actionAboutVeritable;
    QAction *actionAboutQt;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QListWidget *pageSelector;
    QStackedWidget *configPages;
    QWidget *generalSettingsPage;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_10;
    QCheckBox *isTrayIconHidden;
    QCheckBox *autostartService;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_9;
    QLineEdit *serviceArguments;
    QPushButton *startService;
    QPushButton *stopService;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_15;
    QLabel *serviceState;
    QCheckBox *lockWithDesktopSwitching;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_9;
    QLabel *label_10;
    QLineEdit *logFileDirectory;
    QToolButton *openLogFileDirectory;
    QLabel *label_11;
    QComboBox *logLevel;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *limittedLogFileSize;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *logFileSizeLimit;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *logToStdErr;
    QCheckBox *logToWindowsEventLog;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearLogFiles;
    QSpacerItem *verticalSpacer_2;
    QWidget *veritableServerSettingsPage;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QCheckBox *vncCaptureLayeredWindows;
    QCheckBox *vncPollFullScreen;
    QCheckBox *vncLowAccuracy;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QComboBox *demoServerBackend;
    QSpacerItem *horizontalSpacer_15;
    QCheckBox *isDemoServerMultithreaded;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_11;
    QLabel *label_12;
    QSpinBox *coreServerPort;
    QLabel *label_13;
    QSpinBox *demoServerPort;
    QCheckBox *isFirewallExceptionEnabled;
    QCheckBox *isHttpServerEnabled;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *httpServerPortLabel;
    QSpinBox *httpServerPort;
    QSpacerItem *horizontalSpacer_11;
    QCheckBox *localConnectOnly;
    QSpacerItem *verticalSpacer_6;
    QWidget *pathSettingsPage;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLineEdit *globalConfigurationPath;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *personalConfigurationPath;
    QToolButton *openGlobalConfig;
    QToolButton *openPersonalConfig;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *snapshotDirectory;
    QLabel *label;
    QToolButton *openSnapshotDirectory;
    QSpacerItem *verticalSpacer;
    QWidget *authSettingsPage;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QCheckBox *isKeyAuthenticationEnabled;
    QCheckBox *isLogonAuthenticationEnabled;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *keyManagement;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QLineEdit *publicKeyBaseDir;
    QLabel *label_8;
    QLineEdit *privateKeyBaseDir;
    QToolButton *openPublicKeyBaseDir;
    QToolButton *openPrivateKeyBaseDir;
    QPushButton *launchKeyFileAssistant;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *logonManagement;
    QGridLayout *gridLayout;
    QPushButton *manageACLs;
    QPushButton *testLogonAuthentication;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QCheckBox *isPermissionRequiredWithKeyAuthentication;
    QCheckBox *isPermissionRequiredWithLogonAuthentication;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_12;
    QCheckBox *isSameUserConfirmationDisabled;
    QSpacerItem *verticalSpacer_7;
    QWidget *debugPage;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_25;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_19;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_21;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *generateBugReportArchive;
    QSpacerItem *horizontalSpacer_14;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_23;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_24;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_9;
    QFrame *line;
    QDialogButtonBox *buttonBox;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(715, 565);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/imc.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSaveSettings = new QAction(MainWindow);
        actionSaveSettings->setObjectName(QString::fromUtf8("actionSaveSettings"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSettings->setIcon(icon1);
        actionLoadSettings = new QAction(MainWindow);
        actionLoadSettings->setObjectName(QString::fromUtf8("actionLoadSettings"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadSettings->setIcon(icon2);
        actionAboutVeritable = new QAction(MainWindow);
        actionAboutVeritable->setObjectName(QString::fromUtf8("actionAboutVeritable"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutVeritable->setIcon(icon3);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pageSelector = new QListWidget(centralwidget);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/General.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(pageSelector);
        __qlistwidgetitem->setIcon(icon4);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Vnc.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(pageSelector);
        __qlistwidgetitem1->setIcon(icon5);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Paths.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(pageSelector);
        __qlistwidgetitem2->setIcon(icon6);
        __qlistwidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/Authentication.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(pageSelector);
        __qlistwidgetitem3->setIcon(icon7);
        __qlistwidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/kbugbuster.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(pageSelector);
        __qlistwidgetitem4->setIcon(icon8);
        pageSelector->setObjectName(QString::fromUtf8("pageSelector"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pageSelector->sizePolicy().hasHeightForWidth());
        pageSelector->setSizePolicy(sizePolicy);
        pageSelector->setMinimumSize(QSize(200, 200));
        pageSelector->setMaximumSize(QSize(200, 16777215));
        pageSelector->setStyleSheet(QString::fromUtf8("::item { width:120; height:50 }\n"
""));
        pageSelector->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pageSelector->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pageSelector->setIconSize(QSize(48, 48));
        pageSelector->setSpacing(4);
        pageSelector->setViewMode(QListView::ListMode);

        gridLayout_4->addWidget(pageSelector, 0, 0, 1, 1);

        configPages = new QStackedWidget(centralwidget);
        configPages->setObjectName(QString::fromUtf8("configPages"));
        generalSettingsPage = new QWidget();
        generalSettingsPage->setObjectName(QString::fromUtf8("generalSettingsPage"));
        verticalLayout_2 = new QVBoxLayout(generalSettingsPage);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(generalSettingsPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_10 = new QGridLayout(groupBox_3);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        isTrayIconHidden = new QCheckBox(groupBox_3);
        isTrayIconHidden->setObjectName(QString::fromUtf8("isTrayIconHidden"));

        gridLayout_10->addWidget(isTrayIconHidden, 0, 0, 1, 5);

        autostartService = new QCheckBox(groupBox_3);
        autostartService->setObjectName(QString::fromUtf8("autostartService"));

        gridLayout_10->addWidget(autostartService, 2, 0, 1, 5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(24, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        serviceArguments = new QLineEdit(groupBox_3);
        serviceArguments->setObjectName(QString::fromUtf8("serviceArguments"));

        horizontalLayout_2->addWidget(serviceArguments);


        gridLayout_10->addLayout(horizontalLayout_2, 3, 0, 1, 5);

        startService = new QPushButton(groupBox_3);
        startService->setObjectName(QString::fromUtf8("startService"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        startService->setIcon(icon9);

        gridLayout_10->addWidget(startService, 4, 3, 1, 1);

        stopService = new QPushButton(groupBox_3);
        stopService->setObjectName(QString::fromUtf8("stopService"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/system-shutdown.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopService->setIcon(icon10);

        gridLayout_10->addWidget(stopService, 4, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_8, 4, 2, 1, 1);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_10->addWidget(label_15, 4, 0, 1, 1);

        serviceState = new QLabel(groupBox_3);
        serviceState->setObjectName(QString::fromUtf8("serviceState"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        serviceState->setFont(font);

        gridLayout_10->addWidget(serviceState, 4, 1, 1, 1);

        lockWithDesktopSwitching = new QCheckBox(groupBox_3);
        lockWithDesktopSwitching->setObjectName(QString::fromUtf8("lockWithDesktopSwitching"));

        gridLayout_10->addWidget(lockWithDesktopSwitching, 1, 0, 1, 5);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_7 = new QGroupBox(generalSettingsPage);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_8 = new QVBoxLayout(groupBox_7);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_9->addWidget(label_10, 0, 0, 1, 1);

        logFileDirectory = new QLineEdit(groupBox_7);
        logFileDirectory->setObjectName(QString::fromUtf8("logFileDirectory"));

        gridLayout_9->addWidget(logFileDirectory, 0, 1, 1, 1);

        openLogFileDirectory = new QToolButton(groupBox_7);
        openLogFileDirectory->setObjectName(QString::fromUtf8("openLogFileDirectory"));
        openLogFileDirectory->setIcon(icon2);

        gridLayout_9->addWidget(openLogFileDirectory, 0, 2, 1, 1);

        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_9->addWidget(label_11, 1, 0, 1, 1);

        logLevel = new QComboBox(groupBox_7);
        logLevel->setObjectName(QString::fromUtf8("logLevel"));

        gridLayout_9->addWidget(logLevel, 1, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        limittedLogFileSize = new QCheckBox(groupBox_7);
        limittedLogFileSize->setObjectName(QString::fromUtf8("limittedLogFileSize"));

        horizontalLayout_3->addWidget(limittedLogFileSize);

        horizontalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        logFileSizeLimit = new QSpinBox(groupBox_7);
        logFileSizeLimit->setObjectName(QString::fromUtf8("logFileSizeLimit"));
        logFileSizeLimit->setEnabled(false);
        logFileSizeLimit->setValue(10);

        horizontalLayout_3->addWidget(logFileSizeLimit);

        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_3->addWidget(label_14);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_8->addLayout(horizontalLayout_3);

        logToStdErr = new QCheckBox(groupBox_7);
        logToStdErr->setObjectName(QString::fromUtf8("logToStdErr"));

        verticalLayout_8->addWidget(logToStdErr);

        logToWindowsEventLog = new QCheckBox(groupBox_7);
        logToWindowsEventLog->setObjectName(QString::fromUtf8("logToWindowsEventLog"));

        verticalLayout_8->addWidget(logToWindowsEventLog);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(281, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clearLogFiles = new QPushButton(groupBox_7);
        clearLogFiles->setObjectName(QString::fromUtf8("clearLogFiles"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Resources/edit-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearLogFiles->setIcon(icon11);

        horizontalLayout->addWidget(clearLogFiles);


        verticalLayout_8->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_7);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_2->setStretch(2, 1);
        configPages->addWidget(generalSettingsPage);
        veritableServerSettingsPage = new QWidget();
        veritableServerSettingsPage->setObjectName(QString::fromUtf8("veritableServerSettingsPage"));
        verticalLayout_6 = new QVBoxLayout(veritableServerSettingsPage);
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_6 = new QGroupBox(veritableServerSettingsPage);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        vncCaptureLayeredWindows = new QCheckBox(groupBox_6);
        vncCaptureLayeredWindows->setObjectName(QString::fromUtf8("vncCaptureLayeredWindows"));

        gridLayout_7->addWidget(vncCaptureLayeredWindows, 0, 0, 1, 1);

        vncPollFullScreen = new QCheckBox(groupBox_6);
        vncPollFullScreen->setObjectName(QString::fromUtf8("vncPollFullScreen"));

        gridLayout_7->addWidget(vncPollFullScreen, 1, 0, 1, 1);

        vncLowAccuracy = new QCheckBox(groupBox_6);
        vncLowAccuracy->setObjectName(QString::fromUtf8("vncLowAccuracy"));

        gridLayout_7->addWidget(vncLowAccuracy, 2, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox_6);

        groupBox_9 = new QGroupBox(veritableServerSettingsPage);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_7 = new QVBoxLayout(groupBox_9);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(16);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(groupBox_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_11->addWidget(label_6);

        demoServerBackend = new QComboBox(groupBox_9);
        demoServerBackend->setObjectName(QString::fromUtf8("demoServerBackend"));

        horizontalLayout_11->addWidget(demoServerBackend);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_15);

        horizontalLayout_11->setStretch(1, 1);
        horizontalLayout_11->setStretch(2, 2);

        verticalLayout_7->addLayout(horizontalLayout_11);

        isDemoServerMultithreaded = new QCheckBox(groupBox_9);
        isDemoServerMultithreaded->setObjectName(QString::fromUtf8("isDemoServerMultithreaded"));

        verticalLayout_7->addWidget(isDemoServerMultithreaded);


        verticalLayout_6->addWidget(groupBox_9);

        groupBox_8 = new QGroupBox(veritableServerSettingsPage);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_11 = new QGridLayout(groupBox_8);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_12 = new QLabel(groupBox_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_11->addWidget(label_12, 0, 0, 1, 1);

        coreServerPort = new QSpinBox(groupBox_8);
        coreServerPort->setObjectName(QString::fromUtf8("coreServerPort"));
        coreServerPort->setMinimum(1024);
        coreServerPort->setMaximum(65535);

        gridLayout_11->addWidget(coreServerPort, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_11->addWidget(label_13, 1, 0, 1, 1);

        demoServerPort = new QSpinBox(groupBox_8);
        demoServerPort->setObjectName(QString::fromUtf8("demoServerPort"));
        demoServerPort->setMinimum(1024);
        demoServerPort->setMaximum(65535);

        gridLayout_11->addWidget(demoServerPort, 1, 1, 1, 1);

        isFirewallExceptionEnabled = new QCheckBox(groupBox_8);
        isFirewallExceptionEnabled->setObjectName(QString::fromUtf8("isFirewallExceptionEnabled"));

        gridLayout_11->addWidget(isFirewallExceptionEnabled, 2, 0, 1, 2);

        isHttpServerEnabled = new QCheckBox(groupBox_8);
        isHttpServerEnabled->setObjectName(QString::fromUtf8("isHttpServerEnabled"));

        gridLayout_11->addWidget(isHttpServerEnabled, 4, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        httpServerPortLabel = new QLabel(groupBox_8);
        httpServerPortLabel->setObjectName(QString::fromUtf8("httpServerPortLabel"));
        httpServerPortLabel->setEnabled(false);

        horizontalLayout_5->addWidget(httpServerPortLabel);

        httpServerPort = new QSpinBox(groupBox_8);
        httpServerPort->setObjectName(QString::fromUtf8("httpServerPort"));
        httpServerPort->setEnabled(false);
        httpServerPort->setMinimum(1024);
        httpServerPort->setMaximum(65535);

        horizontalLayout_5->addWidget(httpServerPort);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);


        gridLayout_11->addLayout(horizontalLayout_5, 5, 0, 1, 2);

        localConnectOnly = new QCheckBox(groupBox_8);
        localConnectOnly->setObjectName(QString::fromUtf8("localConnectOnly"));

        gridLayout_11->addWidget(localConnectOnly, 3, 0, 1, 2);


        verticalLayout_6->addWidget(groupBox_8);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        verticalLayout_6->setStretch(3, 1);
        configPages->addWidget(veritableServerSettingsPage);
        pathSettingsPage = new QWidget();
        pathSettingsPage->setObjectName(QString::fromUtf8("pathSettingsPage"));
        verticalLayout = new QVBoxLayout(pathSettingsPage);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(pathSettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(10);
        gridLayout_3->setContentsMargins(10, -1, -1, -1);
        globalConfigurationPath = new QLineEdit(groupBox);
        globalConfigurationPath->setObjectName(QString::fromUtf8("globalConfigurationPath"));

        gridLayout_3->addWidget(globalConfigurationPath, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        personalConfigurationPath = new QLineEdit(groupBox);
        personalConfigurationPath->setObjectName(QString::fromUtf8("personalConfigurationPath"));

        gridLayout_3->addWidget(personalConfigurationPath, 1, 1, 1, 1);

        openGlobalConfig = new QToolButton(groupBox);
        openGlobalConfig->setObjectName(QString::fromUtf8("openGlobalConfig"));
        openGlobalConfig->setIcon(icon2);

        gridLayout_3->addWidget(openGlobalConfig, 0, 2, 1, 1);

        openPersonalConfig = new QToolButton(groupBox);
        openPersonalConfig->setObjectName(QString::fromUtf8("openPersonalConfig"));
        openPersonalConfig->setIcon(icon2);

        gridLayout_3->addWidget(openPersonalConfig, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(pathSettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setContentsMargins(10, -1, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        snapshotDirectory = new QLineEdit(groupBox_2);
        snapshotDirectory->setObjectName(QString::fromUtf8("snapshotDirectory"));

        gridLayout_2->addWidget(snapshotDirectory, 1, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        openSnapshotDirectory = new QToolButton(groupBox_2);
        openSnapshotDirectory->setObjectName(QString::fromUtf8("openSnapshotDirectory"));
        openSnapshotDirectory->setIcon(icon2);

        gridLayout_2->addWidget(openSnapshotDirectory, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(2, 1);
        configPages->addWidget(pathSettingsPage);
        authSettingsPage = new QWidget();
        authSettingsPage->setObjectName(QString::fromUtf8("authSettingsPage"));
        verticalLayout_5 = new QVBoxLayout(authSettingsPage);
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        groupBox_5 = new QGroupBox(authSettingsPage);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(6);
        gridLayout_6->setVerticalSpacing(2);
        gridLayout_6->setContentsMargins(10, -1, -1, -1);
        isKeyAuthenticationEnabled = new QCheckBox(groupBox_5);
        isKeyAuthenticationEnabled->setObjectName(QString::fromUtf8("isKeyAuthenticationEnabled"));

        gridLayout_6->addWidget(isKeyAuthenticationEnabled, 0, 0, 1, 1);

        isLogonAuthenticationEnabled = new QCheckBox(groupBox_5);
        isLogonAuthenticationEnabled->setObjectName(QString::fromUtf8("isLogonAuthenticationEnabled"));

        gridLayout_6->addWidget(isLogonAuthenticationEnabled, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 2, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_5);

        keyManagement = new QGroupBox(authSettingsPage);
        keyManagement->setObjectName(QString::fromUtf8("keyManagement"));
        keyManagement->setEnabled(false);
        gridLayout_12 = new QGridLayout(keyManagement);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setVerticalSpacing(2);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(10);
        gridLayout_8->setVerticalSpacing(7);
        label_7 = new QLabel(keyManagement);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        publicKeyBaseDir = new QLineEdit(keyManagement);
        publicKeyBaseDir->setObjectName(QString::fromUtf8("publicKeyBaseDir"));

        gridLayout_8->addWidget(publicKeyBaseDir, 0, 1, 1, 1);

        label_8 = new QLabel(keyManagement);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_8->addWidget(label_8, 1, 0, 1, 1);

        privateKeyBaseDir = new QLineEdit(keyManagement);
        privateKeyBaseDir->setObjectName(QString::fromUtf8("privateKeyBaseDir"));

        gridLayout_8->addWidget(privateKeyBaseDir, 1, 1, 1, 1);

        openPublicKeyBaseDir = new QToolButton(keyManagement);
        openPublicKeyBaseDir->setObjectName(QString::fromUtf8("openPublicKeyBaseDir"));
        openPublicKeyBaseDir->setIcon(icon2);

        gridLayout_8->addWidget(openPublicKeyBaseDir, 0, 2, 1, 1);

        openPrivateKeyBaseDir = new QToolButton(keyManagement);
        openPrivateKeyBaseDir->setObjectName(QString::fromUtf8("openPrivateKeyBaseDir"));
        openPrivateKeyBaseDir->setIcon(icon2);

        gridLayout_8->addWidget(openPrivateKeyBaseDir, 1, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_8, 0, 0, 1, 2);

        launchKeyFileAssistant = new QPushButton(keyManagement);
        launchKeyFileAssistant->setObjectName(QString::fromUtf8("launchKeyFileAssistant"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Resources/tools-wizard.png"), QSize(), QIcon::Normal, QIcon::Off);
        launchKeyFileAssistant->setIcon(icon12);

        gridLayout_12->addWidget(launchKeyFileAssistant, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        verticalLayout_5->addWidget(keyManagement);

        logonManagement = new QGroupBox(authSettingsPage);
        logonManagement->setObjectName(QString::fromUtf8("logonManagement"));
        logonManagement->setEnabled(false);
        gridLayout = new QGridLayout(logonManagement);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        manageACLs = new QPushButton(logonManagement);
        manageACLs->setObjectName(QString::fromUtf8("manageACLs"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Resources/preferences-other.png"), QSize(), QIcon::Normal, QIcon::Off);
        manageACLs->setIcon(icon13);

        gridLayout->addWidget(manageACLs, 0, 0, 1, 1);

        testLogonAuthentication = new QPushButton(logonManagement);
        testLogonAuthentication->setObjectName(QString::fromUtf8("testLogonAuthentication"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Resources/task-accepted.png"), QSize(), QIcon::Normal, QIcon::Off);
        testLogonAuthentication->setIcon(icon14);

        gridLayout->addWidget(testLogonAuthentication, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(209, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 2, 1, 1);


        verticalLayout_5->addWidget(logonManagement);

        groupBox_4 = new QGroupBox(authSettingsPage);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 36));
        label_3->setWordWrap(true);

        verticalLayout_4->addWidget(label_3);

        isPermissionRequiredWithKeyAuthentication = new QCheckBox(groupBox_4);
        isPermissionRequiredWithKeyAuthentication->setObjectName(QString::fromUtf8("isPermissionRequiredWithKeyAuthentication"));

        verticalLayout_4->addWidget(isPermissionRequiredWithKeyAuthentication);

        isPermissionRequiredWithLogonAuthentication = new QCheckBox(groupBox_4);
        isPermissionRequiredWithLogonAuthentication->setObjectName(QString::fromUtf8("isPermissionRequiredWithLogonAuthentication"));

        verticalLayout_4->addWidget(isPermissionRequiredWithLogonAuthentication);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_12 = new QSpacerItem(24, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        isSameUserConfirmationDisabled = new QCheckBox(groupBox_4);
        isSameUserConfirmationDisabled->setObjectName(QString::fromUtf8("isSameUserConfirmationDisabled"));
        isSameUserConfirmationDisabled->setEnabled(false);

        horizontalLayout_6->addWidget(isSameUserConfirmationDisabled);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_5->addWidget(groupBox_4);

        verticalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);

        verticalLayout_5->setStretch(4, 1);
        configPages->addWidget(authSettingsPage);
        debugPage = new QWidget();
        debugPage->setObjectName(QString::fromUtf8("debugPage"));
        verticalLayout_9 = new QVBoxLayout(debugPage);
        verticalLayout_9->setSpacing(4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, -1, -1, 0);
        groupBox_10 = new QGroupBox(debugPage);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        verticalLayout_12 = new QVBoxLayout(groupBox_10);
        verticalLayout_12->setSpacing(16);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_4 = new QLabel(groupBox_10);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setWordWrap(true);

        verticalLayout_12->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_17 = new QLabel(groupBox_10);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        horizontalLayout_4->addWidget(label_17);

        label_18 = new QLabel(groupBox_10);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setWordWrap(true);

        horizontalLayout_4->addWidget(label_18);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_12->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_25 = new QLabel(groupBox_10);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font);

        verticalLayout_10->addWidget(label_25);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_5);


        horizontalLayout_10->addLayout(verticalLayout_10);

        label_26 = new QLabel(groupBox_10);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setWordWrap(true);

        horizontalLayout_10->addWidget(label_26);

        horizontalLayout_10->setStretch(1, 1);

        verticalLayout_12->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_19 = new QLabel(groupBox_10);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        horizontalLayout_7->addWidget(label_19);

        label_20 = new QLabel(groupBox_10);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setWordWrap(true);

        horizontalLayout_7->addWidget(label_20);

        horizontalLayout_7->setStretch(1, 1);

        verticalLayout_12->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_21 = new QLabel(groupBox_10);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        verticalLayout_11->addWidget(label_21);

        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_8);


        horizontalLayout_8->addLayout(verticalLayout_11);

        label_22 = new QLabel(groupBox_10);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setWordWrap(true);

        horizontalLayout_8->addWidget(label_22);

        horizontalLayout_8->setStretch(1, 1);

        verticalLayout_12->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_13);

        generateBugReportArchive = new QPushButton(groupBox_10);
        generateBugReportArchive->setObjectName(QString::fromUtf8("generateBugReportArchive"));

        horizontalLayout_9->addWidget(generateBugReportArchive);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);

        horizontalLayout_9->setStretch(2, 1);

        verticalLayout_12->addLayout(horizontalLayout_9);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_23 = new QLabel(groupBox_10);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

        verticalLayout_3->addWidget(label_23);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 2, 1);

        label_24 = new QLabel(groupBox_10);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        sizePolicy1.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy1);
        label_24->setWordWrap(true);
        label_24->setOpenExternalLinks(true);

        gridLayout_5->addWidget(label_24, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 1, 1, 1, 1);

        gridLayout_5->setRowStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout_12->addLayout(gridLayout_5);


        verticalLayout_9->addWidget(groupBox_10);

        verticalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_9);

        verticalLayout_9->setStretch(1, 1);
        configPages->addWidget(debugPage);

        gridLayout_4->addWidget(configPages, 0, 1, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Reset);
        buttonBox->setCenterButtons(true);

        gridLayout_4->addWidget(buttonBox, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 715, 25));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionLoadSettings);
        menu_File->addAction(actionSaveSettings);
        menu_File->addSeparator();
        menu_File->addAction(actionQuit);
        menu_Help->addAction(actionAboutVeritable);
        menu_Help->addAction(actionAboutQt);

        retranslateUi(MainWindow);
        QObject::connect(pageSelector, SIGNAL(currentRowChanged(int)), configPages, SLOT(setCurrentIndex(int)));
        QObject::connect(limittedLogFileSize, SIGNAL(toggled(bool)), logFileSizeLimit, SLOT(setEnabled(bool)));
        QObject::connect(isKeyAuthenticationEnabled, SIGNAL(toggled(bool)), keyManagement, SLOT(setEnabled(bool)));
        QObject::connect(isLogonAuthenticationEnabled, SIGNAL(toggled(bool)), logonManagement, SLOT(setEnabled(bool)));
        QObject::connect(isHttpServerEnabled, SIGNAL(toggled(bool)), httpServerPort, SLOT(setEnabled(bool)));
        QObject::connect(isHttpServerEnabled, SIGNAL(toggled(bool)), httpServerPortLabel, SLOT(setEnabled(bool)));
        QObject::connect(isPermissionRequiredWithLogonAuthentication, SIGNAL(toggled(bool)), isSameUserConfirmationDisabled, SLOT(setEnabled(bool)));
        QObject::connect(actionAboutVeritable, SIGNAL(triggered()), MainWindow, SLOT(aboutVeritable()));
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        pageSelector->setCurrentRow(0);
        configPages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "vERITABLE Management Console", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionSaveSettings->setText(QApplication::translate("MainWindow", "&Save settings into file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveSettings->setToolTip(QApplication::translate("MainWindow", "Save settings into file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionLoadSettings->setText(QApplication::translate("MainWindow", "L&oad settings from file", 0, QApplication::UnicodeUTF8));
        actionLoadSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionAboutVeritable->setText(QApplication::translate("MainWindow", "About vERITABLE", 0, QApplication::UnicodeUTF8));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = pageSelector->isSortingEnabled();
        pageSelector->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = pageSelector->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "General", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = pageSelector->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "vERITABLE Server", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = pageSelector->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "Paths", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = pageSelector->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "Authentication", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = pageSelector->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "Debugging", 0, QApplication::UnicodeUTF8));
        pageSelector->setSortingEnabled(__sortingEnabled);

        groupBox_3->setTitle(QApplication::translate("MainWindow", "vERITABLE Service", 0, QApplication::UnicodeUTF8));
        isTrayIconHidden->setText(QApplication::translate("MainWindow", "Hide tray icon", 0, QApplication::UnicodeUTF8));
        autostartService->setText(QApplication::translate("MainWindow", "Autostart", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Additional arguments", 0, QApplication::UnicodeUTF8));
        startService->setText(QApplication::translate("MainWindow", "Start service", 0, QApplication::UnicodeUTF8));
        stopService->setText(QApplication::translate("MainWindow", "Stop service", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "State:", 0, QApplication::UnicodeUTF8));
        serviceState->setText(QApplication::translate("MainWindow", "Stopped", 0, QApplication::UnicodeUTF8));
        lockWithDesktopSwitching->setText(QApplication::translate("MainWindow", "Enable desktop switching for screen lock (experimental)", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Logging", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Log file directory", 0, QApplication::UnicodeUTF8));
        openLogFileDirectory->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Log level", 0, QApplication::UnicodeUTF8));
        logLevel->clear();
        logLevel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Nothing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Only critical messages", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Errors and critical messages", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Warnings and errors", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Information, warnings and errors", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Debug messages and everything else", 0, QApplication::UnicodeUTF8)
        );
        limittedLogFileSize->setText(QApplication::translate("MainWindow", "Limit log file size", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "MB", 0, QApplication::UnicodeUTF8));
        logToStdErr->setText(QApplication::translate("MainWindow", "Log to standard error output", 0, QApplication::UnicodeUTF8));
        logToWindowsEventLog->setText(QApplication::translate("MainWindow", "Log to Windows event log", 0, QApplication::UnicodeUTF8));
        clearLogFiles->setText(QApplication::translate("MainWindow", "Clear all log files", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Desktop capturing", 0, QApplication::UnicodeUTF8));
        vncCaptureLayeredWindows->setText(QApplication::translate("MainWindow", "Enable capturing of layered (semi-transparent) windows", 0, QApplication::UnicodeUTF8));
        vncPollFullScreen->setText(QApplication::translate("MainWindow", "Poll full screen", 0, QApplication::UnicodeUTF8));
        vncLowAccuracy->setText(QApplication::translate("MainWindow", "Low accuracy (turbo mode)", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Demo server", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Backend", 0, QApplication::UnicodeUTF8));
        demoServerBackend->clear();
        demoServerBackend->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "VNC reflector", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "vERITABLE 1 demo server", 0, QApplication::UnicodeUTF8)
        );
        isDemoServerMultithreaded->setText(QApplication::translate("MainWindow", "Multithreading (can be enabled when using the VNC reflector backend)", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Network", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Core server port", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Demo server port", 0, QApplication::UnicodeUTF8));
        isFirewallExceptionEnabled->setText(QApplication::translate("MainWindow", "Enable firewall exception", 0, QApplication::UnicodeUTF8));
        isHttpServerEnabled->setText(QApplication::translate("MainWindow", "Enable HTTP server which provides a JavaViewer applet", 0, QApplication::UnicodeUTF8));
        httpServerPortLabel->setText(QApplication::translate("MainWindow", "HTTP server port", 0, QApplication::UnicodeUTF8));
        localConnectOnly->setText(QApplication::translate("MainWindow", "Allow connections from localhost only", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Configuration files", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Global configuration", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Personal configuration", 0, QApplication::UnicodeUTF8));
        openGlobalConfig->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        openPersonalConfig->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Data directories", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Snapshots", 0, QApplication::UnicodeUTF8));
        openSnapshotDirectory->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Authentication methods", 0, QApplication::UnicodeUTF8));
        isKeyAuthenticationEnabled->setText(QApplication::translate("MainWindow", "Key file authentication", 0, QApplication::UnicodeUTF8));
        isLogonAuthenticationEnabled->setText(QApplication::translate("MainWindow", "ACL-based logon authentication", 0, QApplication::UnicodeUTF8));
        keyManagement->setTitle(QApplication::translate("MainWindow", "Access key management", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Public key file base directory", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Private key file base directory", 0, QApplication::UnicodeUTF8));
        openPublicKeyBaseDir->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        openPrivateKeyBaseDir->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        launchKeyFileAssistant->setText(QApplication::translate("MainWindow", "Launch key file assistant", 0, QApplication::UnicodeUTF8));
        logonManagement->setTitle(QApplication::translate("MainWindow", "Logon settings", 0, QApplication::UnicodeUTF8));
        manageACLs->setText(QApplication::translate("MainWindow", "Manage permissions", 0, QApplication::UnicodeUTF8));
        testLogonAuthentication->setText(QApplication::translate("MainWindow", "Test", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Access confirmation", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "You can configure vERITABLE to ask the user for permission to access the desktop when using certain authentication methods.", 0, QApplication::UnicodeUTF8));
        isPermissionRequiredWithKeyAuthentication->setText(QApplication::translate("MainWindow", "Key file authentication", 0, QApplication::UnicodeUTF8));
        isPermissionRequiredWithLogonAuthentication->setText(QApplication::translate("MainWindow", "Logon authentication", 0, QApplication::UnicodeUTF8));
        isSameUserConfirmationDisabled->setText(QApplication::translate("MainWindow", "Allow same user to access desktop without confirmation", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Debugging vERITABLE", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "When encountering bugs or other misbehaviour in vERITABLE it is important to inform the developers about them, so that the bugs can be fixed in future releases. This page allows you to submit a helpful bug report easily.\n"
"\n"
"If the bug is not reproducible, skip step 1) - 3).", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "1)", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Clear the logfiles in the \"General\" section.", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "2)", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "In the \"General\" section set the log level to \"Debug messages and everything else\".", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "3)", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Repeat the actions leading to the bug or misbehaviour.", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "4)", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Click the following button and save the file to a known location.", 0, QApplication::UnicodeUTF8));
        generateBugReportArchive->setText(QApplication::translate("MainWindow", "Generate bug report archive", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "5)", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "Go to the <a href=\"http://sourceforge.net/tracker/?group_id=132465&amp;atid=724375\">vERITABLE bug tracker</a>, open a new bug, describe what you did in step 3) and attach the file you saved in step 4).</p>\n"
"<br/>\n"
"<br/>\n"
"Note: if the bug involves both a master and client computer, attach bug report archives for both computers.", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
