/********************************************************************************
** Form generated from reading UI file 'Snapshots.ui'
**
** Created: Fri Jun 22 23:19:47 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAPSHOTS_H
#define UI_SNAPSHOTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Snapshots
{
public:
    QVBoxLayout *verticalLayout;
    QListView *list;
    QLabel *previewLbl;
    QGridLayout *gridLayout;
    QLabel *dateLbl;
    QLabel *userDescLbl;
    QLabel *userLbl;
    QLabel *timeLbl;
    QLabel *hostDescLbl;
    QLabel *dateDescLbl;
    QLabel *hostLbl;
    QLabel *timeDescLbl;
    QHBoxLayout *horizontalLayout;
    QPushButton *showBtn;
    QPushButton *deleteBtn;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *Snapshots)
    {
        if (Snapshots->objectName().isEmpty())
            Snapshots->setObjectName(QString::fromUtf8("Snapshots"));
        Snapshots->resize(236, 448);
        verticalLayout = new QVBoxLayout(Snapshots);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        list = new QListView(Snapshots);
        list->setObjectName(QString::fromUtf8("list"));

        verticalLayout->addWidget(list);

        previewLbl = new QLabel(Snapshots);
        previewLbl->setObjectName(QString::fromUtf8("previewLbl"));
        previewLbl->setScaledContents(true);

        verticalLayout->addWidget(previewLbl);

        gridLayout = new QGridLayout();
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(4);
        dateLbl = new QLabel(Snapshots);
        dateLbl->setObjectName(QString::fromUtf8("dateLbl"));

        gridLayout->addWidget(dateLbl, 1, 1, 1, 1);

        userDescLbl = new QLabel(Snapshots);
        userDescLbl->setObjectName(QString::fromUtf8("userDescLbl"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        userDescLbl->setFont(font);

        gridLayout->addWidget(userDescLbl, 0, 0, 1, 1);

        userLbl = new QLabel(Snapshots);
        userLbl->setObjectName(QString::fromUtf8("userLbl"));

        gridLayout->addWidget(userLbl, 0, 1, 1, 1);

        timeLbl = new QLabel(Snapshots);
        timeLbl->setObjectName(QString::fromUtf8("timeLbl"));

        gridLayout->addWidget(timeLbl, 2, 1, 1, 1);

        hostDescLbl = new QLabel(Snapshots);
        hostDescLbl->setObjectName(QString::fromUtf8("hostDescLbl"));
        hostDescLbl->setFont(font);

        gridLayout->addWidget(hostDescLbl, 3, 0, 1, 1);

        dateDescLbl = new QLabel(Snapshots);
        dateDescLbl->setObjectName(QString::fromUtf8("dateDescLbl"));
        dateDescLbl->setFont(font);

        gridLayout->addWidget(dateDescLbl, 1, 0, 1, 1);

        hostLbl = new QLabel(Snapshots);
        hostLbl->setObjectName(QString::fromUtf8("hostLbl"));

        gridLayout->addWidget(hostLbl, 3, 1, 1, 1);

        timeDescLbl = new QLabel(Snapshots);
        timeDescLbl->setObjectName(QString::fromUtf8("timeDescLbl"));
        timeDescLbl->setFont(font);

        gridLayout->addWidget(timeDescLbl, 2, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showBtn = new QPushButton(Snapshots);
        showBtn->setObjectName(QString::fromUtf8("showBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/client_show.png"), QSize(), QIcon::Normal, QIcon::Off);
        showBtn->setIcon(icon);

        horizontalLayout->addWidget(showBtn);

        deleteBtn = new QPushButton(Snapshots);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteBtn->setIcon(icon1);

        horizontalLayout->addWidget(deleteBtn);


        verticalLayout->addLayout(horizontalLayout);

        spacerItem = new QSpacerItem(16, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(spacerItem);


        retranslateUi(Snapshots);

        QMetaObject::connectSlotsByName(Snapshots);
    } // setupUi

    void retranslateUi(QWidget *Snapshots)
    {
#ifndef QT_NO_WHATSTHIS
        list->setWhatsThis(QApplication::translate("Snapshots", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">All snapshots you made are listed here. You can make snapshots by selecting the according entry in the context-menu of a client-window. These snapshosts can be managed using the buttons below.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        userDescLbl->setText(QApplication::translate("Snapshots", "User:", 0, QApplication::UnicodeUTF8));
        hostDescLbl->setText(QApplication::translate("Snapshots", "Host:", 0, QApplication::UnicodeUTF8));
        dateDescLbl->setText(QApplication::translate("Snapshots", "Date:", 0, QApplication::UnicodeUTF8));
        timeDescLbl->setText(QApplication::translate("Snapshots", "Time:", 0, QApplication::UnicodeUTF8));
        showBtn->setText(QApplication::translate("Snapshots", "Show", 0, QApplication::UnicodeUTF8));
        deleteBtn->setText(QApplication::translate("Snapshots", "Delete", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Snapshots);
    } // retranslateUi

};

namespace Ui {
    class Snapshots: public Ui_Snapshots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAPSHOTS_H
