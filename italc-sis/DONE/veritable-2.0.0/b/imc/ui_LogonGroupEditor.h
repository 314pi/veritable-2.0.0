/********************************************************************************
** Form generated from reading UI file 'LogonGroupEditor.ui'
**
** Created: Fri Jun 22 23:20:21 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGONGROUPEDITOR_H
#define UI_LOGONGROUPEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogonGroupEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QToolButton *addLogonGroup;
    QToolButton *removeLogonGroup;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_6;
    QListWidget *allGroups;
    QListWidget *logonGroups;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogonGroupEditor)
    {
        if (LogonGroupEditor->objectName().isEmpty())
            LogonGroupEditor->setObjectName(QString::fromUtf8("LogonGroupEditor"));
        LogonGroupEditor->resize(452, 279);
        gridLayout = new QGridLayout(LogonGroupEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label_3 = new QLabel(LogonGroupEditor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 0, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(431, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 3);

        label_4 = new QLabel(LogonGroupEditor);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        addLogonGroup = new QToolButton(LogonGroupEditor);
        addLogonGroup->setObjectName(QString::fromUtf8("addLogonGroup"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/go-next.png"), QSize(), QIcon::Normal, QIcon::Off);
        addLogonGroup->setIcon(icon);

        verticalLayout_3->addWidget(addLogonGroup);

        removeLogonGroup = new QToolButton(LogonGroupEditor);
        removeLogonGroup->setObjectName(QString::fromUtf8("removeLogonGroup"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/go-previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeLogonGroup->setIcon(icon1);

        verticalLayout_3->addWidget(removeLogonGroup);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);


        gridLayout->addLayout(verticalLayout_3, 3, 1, 1, 1);

        label_6 = new QLabel(LogonGroupEditor);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        allGroups = new QListWidget(LogonGroupEditor);
        allGroups->setObjectName(QString::fromUtf8("allGroups"));
        allGroups->setSelectionMode(QAbstractItemView::MultiSelection);
        allGroups->setSortingEnabled(true);

        gridLayout->addWidget(allGroups, 3, 0, 1, 1);

        logonGroups = new QListWidget(LogonGroupEditor);
        logonGroups->setObjectName(QString::fromUtf8("logonGroups"));
        logonGroups->setSelectionMode(QAbstractItemView::MultiSelection);
        logonGroups->setSortingEnabled(true);

        gridLayout->addWidget(logonGroups, 3, 2, 1, 1);

        buttonBox = new QDialogButtonBox(LogonGroupEditor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 3);


        retranslateUi(LogonGroupEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), LogonGroupEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LogonGroupEditor, SLOT(reject()));
        QObject::connect(addLogonGroup, SIGNAL(clicked()), LogonGroupEditor, SLOT(addLogonGroup()));
        QObject::connect(removeLogonGroup, SIGNAL(clicked()), LogonGroupEditor, SLOT(removeLogonGroup()));

        QMetaObject::connectSlotsByName(LogonGroupEditor);
    } // setupUi

    void retranslateUi(QDialog *LogonGroupEditor)
    {
        LogonGroupEditor->setWindowTitle(QApplication::translate("LogonGroupEditor", "Logon group editor", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LogonGroupEditor", "Please add the groups whose members should be allowed to access computers in your vERITABLE network.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("LogonGroupEditor", "All groups", 0, QApplication::UnicodeUTF8));
        addLogonGroup->setText(QApplication::translate("LogonGroupEditor", "...", 0, QApplication::UnicodeUTF8));
        removeLogonGroup->setText(QApplication::translate("LogonGroupEditor", "...", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("LogonGroupEditor", "Groups with vERITABLE privileges", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LogonGroupEditor: public Ui_LogonGroupEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGONGROUPEDITOR_H
