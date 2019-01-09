/********************************************************************************
** Form generated from reading UI file 'Config.ui'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Config
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QDoubleSpinBox *updateIntervalSB;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QLabel *label_6;
    QLabel *label_5;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem2;
    QCheckBox *balloonToolTips;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem3;
    QCheckBox *iconOnlyToolButtons;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout5;
    QLabel *label_12;
    QLabel *label_13;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem5;
    QComboBox *roleCB;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout7;
    QLabel *label_10;
    QLabel *label_11;
    QHBoxLayout *hboxLayout8;
    QSpacerItem *spacerItem6;
    QLabel *label_15;
    QLineEdit *domainEdit;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout9;
    QLabel *label_16;
    QLabel *label_17;
    QSpacerItem *spacerItem7;
    QHBoxLayout *hboxLayout10;
    QSpacerItem *spacerItem8;
    QComboBox *clientDoubleClickActionCB;
    QHBoxLayout *hboxLayout11;
    QLabel *label_8;
    QLabel *label_7;
    QSpacerItem *spacerItem9;

    void setupUi(QWidget *Config)
    {
        if (Config->objectName().isEmpty())
            Config->setObjectName(QString::fromUtf8("Config"));
        Config->resize(229, 510);
        verticalLayout = new QVBoxLayout(Config);
        verticalLayout->setSpacing(24);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_2 = new QLabel(Config);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/clock.png")));

        hboxLayout->addWidget(label_2);

        label = new QLabel(Config);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        updateIntervalSB = new QDoubleSpinBox(Config);
        updateIntervalSB->setObjectName(QString::fromUtf8("updateIntervalSB"));
        updateIntervalSB->setDecimals(1);
        updateIntervalSB->setMinimum(0.1);
        updateIntervalSB->setMaximum(10);
        updateIntervalSB->setSingleStep(0.5);
        updateIntervalSB->setValue(0.5);

        hboxLayout1->addWidget(updateIntervalSB);


        vboxLayout->addLayout(hboxLayout1);


        verticalLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(3);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_6 = new QLabel(Config);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/resources/userinterface.png")));

        hboxLayout2->addWidget(label_6);

        label_5 = new QLabel(Config);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout2->addWidget(label_5);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem2 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        balloonToolTips = new QCheckBox(Config);
        balloonToolTips->setObjectName(QString::fromUtf8("balloonToolTips"));

        hboxLayout3->addWidget(balloonToolTips);


        vboxLayout1->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem3 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem3);

        iconOnlyToolButtons = new QCheckBox(Config);
        iconOnlyToolButtons->setObjectName(QString::fromUtf8("iconOnlyToolButtons"));

        hboxLayout4->addWidget(iconOnlyToolButtons);


        vboxLayout1->addLayout(hboxLayout4);


        verticalLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout5 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout5->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        label_12 = new QLabel(Config);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/resources/authors.png")));

        hboxLayout5->addWidget(label_12);

        label_13 = new QLabel(Config);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        hboxLayout5->addWidget(label_13);

        spacerItem4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem4);


        vboxLayout2->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout6->setSpacing(6);
#endif
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        spacerItem5 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem5);

        roleCB = new QComboBox(Config);
        roleCB->setObjectName(QString::fromUtf8("roleCB"));

        hboxLayout6->addWidget(roleCB);


        vboxLayout2->addLayout(hboxLayout6);


        verticalLayout->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout7 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout7->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        label_10 = new QLabel(Config);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/resources/remotelogon_22.png")));

        hboxLayout7->addWidget(label_10);

        label_11 = new QLabel(Config);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        hboxLayout7->addWidget(label_11);


        vboxLayout3->addLayout(hboxLayout7);

        hboxLayout8 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout8->setSpacing(6);
#endif
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        spacerItem6 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem6);

        label_15 = new QLabel(Config);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        hboxLayout8->addWidget(label_15);

        domainEdit = new QLineEdit(Config);
        domainEdit->setObjectName(QString::fromUtf8("domainEdit"));

        hboxLayout8->addWidget(domainEdit);


        vboxLayout3->addLayout(hboxLayout8);


        verticalLayout->addLayout(vboxLayout3);

        vboxLayout4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout9 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout9->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout9->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        label_16 = new QLabel(Config);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/resources/thinclient.png")));

        hboxLayout9->addWidget(label_16);

        label_17 = new QLabel(Config);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        hboxLayout9->addWidget(label_17);

        spacerItem7 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem7);


        vboxLayout4->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout10->setSpacing(6);
#endif
        hboxLayout10->setContentsMargins(0, 0, 0, 0);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        spacerItem8 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout10->addItem(spacerItem8);

        clientDoubleClickActionCB = new QComboBox(Config);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/remote_control.png"), QSize(), QIcon::Normal, QIcon::Off);
        clientDoubleClickActionCB->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/viewmag.png"), QSize(), QIcon::Normal, QIcon::Off);
        clientDoubleClickActionCB->addItem(icon1, QString());
        clientDoubleClickActionCB->setObjectName(QString::fromUtf8("clientDoubleClickActionCB"));

        hboxLayout10->addWidget(clientDoubleClickActionCB);


        vboxLayout4->addLayout(hboxLayout10);


        verticalLayout->addLayout(vboxLayout4);

        hboxLayout11 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout11->setSpacing(6);
#endif
        hboxLayout11->setContentsMargins(0, 0, 0, 0);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        label_8 = new QLabel(Config);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/resources/info_22.png")));

        hboxLayout11->addWidget(label_8);

        label_7 = new QLabel(Config);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        hboxLayout11->addWidget(label_7);


        verticalLayout->addLayout(hboxLayout11);

        spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem9);


        retranslateUi(Config);

        QMetaObject::connectSlotsByName(Config);
    } // setupUi

    void retranslateUi(QWidget *Config)
    {
        label_2->setText(QString());
        label->setText(QApplication::translate("Config", "Interval between updates", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        updateIntervalSB->setWhatsThis(QApplication::translate("Config", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Here you can set the interval between updates of clients. Higher values result in lower network-traffic and lower CPU-usage on this computer.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        updateIntervalSB->setSuffix(QApplication::translate("Config", " seconds", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        label_5->setText(QApplication::translate("Config", "User interface", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        balloonToolTips->setToolTip(QApplication::translate("Config", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Do not show balloon-tooltips for toolbar-buttons</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        balloonToolTips->setWhatsThis(QApplication::translate("Config", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Check this option if you're annoyed by the balloon-tooltips appearing when moving mouse-cursor over toolbar-buttons.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        balloonToolTips->setText(QApplication::translate("Config", "No balloon-tooltips", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        iconOnlyToolButtons->setToolTip(QApplication::translate("Config", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Do not show texts on toolbar-buttons</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        iconOnlyToolButtons->setText(QApplication::translate("Config", "No texts on toolbar-buttons", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Config", "Your role (needs according keys!)", 0, QApplication::UnicodeUTF8));
        roleCB->clear();
        roleCB->insertItems(0, QStringList()
         << QApplication::translate("Config", "Teacher", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Config", "Administrator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Config", "Supporter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Config", "Other", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        roleCB->setWhatsThis(QApplication::translate("Config", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Here you can select your role. Only change this if you know what you're doing. Otherwise you won't be able to access any clients until you restore your old role.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_11->setText(QApplication::translate("Config", "Settings for multi-logon", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Config", "Domain", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Config", "Double-click action for client-window", 0, QApplication::UnicodeUTF8));
        clientDoubleClickActionCB->setItemText(0, QApplication::translate("Config", "Remote control", 0, QApplication::UnicodeUTF8));
        clientDoubleClickActionCB->setItemText(1, QApplication::translate("Config", "View live in fullscreen", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_WHATSTHIS
        clientDoubleClickActionCB->setWhatsThis(QApplication::translate("Config", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Here you can set what should happen if you double-click a client-window.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QString());
        label_7->setText(QApplication::translate("Config", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-style:italic;\">Please note, that some changes won't take effect until you restart vERITABLE.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Config);
    } // retranslateUi

};

namespace Ui {
    class Config: public Ui_Config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
