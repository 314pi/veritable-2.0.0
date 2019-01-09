/********************************************************************************
** Form generated from reading UI file 'PasswordDialog.ui'
**
** Created: Tue 15. May 10:39:01 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_PasswordDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *username;
    QLabel *label_3;
    QLineEdit *password;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName(QString::fromUtf8("PasswordDialog"));
        PasswordDialog->resize(340, 150);
        gridLayout = new QGridLayout(PasswordDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(PasswordDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(PasswordDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        username = new QLineEdit(PasswordDialog);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout->addWidget(username, 1, 1, 1, 1);

        label_3 = new QLabel(PasswordDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        password = new QLineEdit(PasswordDialog);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PasswordDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(PasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PasswordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PasswordDialog, SLOT(reject()));
        QObject::connect(password, SIGNAL(textChanged(QString)), PasswordDialog, SLOT(updateOkButton()));
        QObject::connect(username, SIGNAL(textChanged(QString)), PasswordDialog, SLOT(updateOkButton()));

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QApplication::translate("PasswordDialog", "vERITABLE Logon", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PasswordDialog", "Please enter your username and password in order to access vERITABLE clients.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PasswordDialog", "Username", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PasswordDialog", "Password", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
