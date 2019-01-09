/********************************************************************************
** Form generated from reading UI file 'Overview.ui'
**
** Created: Fri Jun 22 23:19:47 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEW_H
#define UI_OVERVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Overview
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QLabel *label6;
    QLabel *label1;
    QHBoxLayout *hboxLayout1;
    QLabel *label7;
    QLabel *label2;
    QHBoxLayout *hboxLayout2;
    QLabel *label9;
    QLabel *label4;
    QHBoxLayout *hboxLayout3;
    QLabel *label10;
    QLabel *label5;
    QSpacerItem *spacerItem;
    QPushButton *aboutButton;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *Overview)
    {
        if (Overview->objectName().isEmpty())
            Overview->setObjectName(QString::fromUtf8("Overview"));
        Overview->resize(256, 571);
        verticalLayout = new QVBoxLayout(Overview);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Overview);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 38));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(15);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label6 = new QLabel(Overview);
        label6->setObjectName(QString::fromUtf8("label6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label6->sizePolicy().hasHeightForWidth());
        label6->setSizePolicy(sizePolicy);
        label6->setPixmap(QPixmap(QString::fromUtf8(":/resources/back.png")));

        hboxLayout->addWidget(label6);

        label1 = new QLabel(Overview);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setWordWrap(true);

        hboxLayout->addWidget(label1);


        verticalLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(15);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label7 = new QLabel(Overview);
        label7->setObjectName(QString::fromUtf8("label7"));
        sizePolicy.setHeightForWidth(label7->sizePolicy().hasHeightForWidth());
        label7->setSizePolicy(sizePolicy);
        label7->setPixmap(QPixmap(QString::fromUtf8(":/resources/classroom_manager_48.png")));

        hboxLayout1->addWidget(label7);

        label2 = new QLabel(Overview);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setWordWrap(true);

        hboxLayout1->addWidget(label2);


        verticalLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(15);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label9 = new QLabel(Overview);
        label9->setObjectName(QString::fromUtf8("label9"));
        sizePolicy.setHeightForWidth(label9->sizePolicy().hasHeightForWidth());
        label9->setSizePolicy(sizePolicy);
        label9->setPixmap(QPixmap(QString::fromUtf8(":/resources/snapshot_48.png")));

        hboxLayout2->addWidget(label9);

        label4 = new QLabel(Overview);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setWordWrap(true);

        hboxLayout2->addWidget(label4);


        verticalLayout->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(15);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label10 = new QLabel(Overview);
        label10->setObjectName(QString::fromUtf8("label10"));
        sizePolicy.setHeightForWidth(label10->sizePolicy().hasHeightForWidth());
        label10->setSizePolicy(sizePolicy);
        label10->setPixmap(QPixmap(QString::fromUtf8(":/resources/config_48.png")));

        hboxLayout3->addWidget(label10);

        label5 = new QLabel(Overview);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setWordWrap(true);

        hboxLayout3->addWidget(label5);


        verticalLayout->addLayout(hboxLayout3);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(spacerItem);

        aboutButton = new QPushButton(Overview);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setMinimumSize(QSize(0, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/info_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutButton->setIcon(icon);

        verticalLayout->addWidget(aboutButton);

        spacerItem1 = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem1);


        retranslateUi(Overview);

        QMetaObject::connectSlotsByName(Overview);
    } // setupUi

    void retranslateUi(QWidget *Overview)
    {
        label->setText(QApplication::translate("Overview", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Welcome to vERITABLE!</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("Overview", "Here you see the working-bar which contains several buttons. Each button is connected to a workspace. Just take a look at the available workspaces by clicking on the corresponding button.", 0, QApplication::UnicodeUTF8));
        label2->setText(QApplication::translate("Overview", "Using the classroom-manager you can manage your classrooms and computers. You can also see which users are logged in.", 0, QApplication::UnicodeUTF8));
        label4->setText(QApplication::translate("Overview", "The snapshot-workspace is a very useful tool. It let's you manage the snapshots you made.", 0, QApplication::UnicodeUTF8));
        label5->setText(QApplication::translate("Overview", "Of course you can configure vERITABLE. This is usually done using the configuration-workspace.", 0, QApplication::UnicodeUTF8));
        aboutButton->setText(QApplication::translate("Overview", "About vERITABLE", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Overview);
    } // retranslateUi

};

namespace Ui {
    class Overview: public Ui_Overview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEW_H
