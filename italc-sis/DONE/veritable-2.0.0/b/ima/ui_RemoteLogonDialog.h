/********************************************************************************
** Form generated from reading UI file 'RemoteLogonDialog.ui'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTELOGONDIALOG_H
#define UI_REMOTELOGONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoteLogonDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLineEdit *userNameEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *domainEdit;
    QLineEdit *passwordEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemoteLogonDialog)
    {
        if (RemoteLogonDialog->objectName().isEmpty())
            RemoteLogonDialog->setObjectName(QString::fromUtf8("RemoteLogonDialog"));
        RemoteLogonDialog->resize(394, 302);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/remotelogon_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        RemoteLogonDialog->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(RemoteLogonDialog);
        vboxLayout->setSpacing(16);
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(10);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(RemoteLogonDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/remotelogon_48.png")));

        hboxLayout->addWidget(label);

        label_2 = new QLabel(RemoteLogonDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        hboxLayout->addWidget(label_2);


        vboxLayout->addLayout(hboxLayout);

        label_3 = new QLabel(RemoteLogonDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(0, 64));
        label_3->setWordWrap(true);

        vboxLayout->addWidget(label_3);

        gridLayout = new QGridLayout();
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(16);
        gridLayout->setVerticalSpacing(6);
        userNameEdit = new QLineEdit(RemoteLogonDialog);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));

        gridLayout->addWidget(userNameEdit, 0, 1, 1, 1);

        label_4 = new QLabel(RemoteLogonDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(RemoteLogonDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(RemoteLogonDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        domainEdit = new QLineEdit(RemoteLogonDialog);
        domainEdit->setObjectName(QString::fromUtf8("domainEdit"));

        gridLayout->addWidget(domainEdit, 2, 1, 1, 1);

        passwordEdit = new QLineEdit(RemoteLogonDialog);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordEdit, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(RemoteLogonDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(userNameEdit, passwordEdit);
        QWidget::setTabOrder(passwordEdit, domainEdit);

        retranslateUi(RemoteLogonDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemoteLogonDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemoteLogonDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RemoteLogonDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoteLogonDialog)
    {
        RemoteLogonDialog->setWindowTitle(QApplication::translate("RemoteLogonDialog", "Remote logon", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("RemoteLogonDialog", "Remote logon", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RemoteLogonDialog", "Use the fields below to enter the username, password and optional the domain name. These information will be used to logon the computer(s).", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RemoteLogonDialog", "Username", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RemoteLogonDialog", "Password", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RemoteLogonDialog", "Domain", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RemoteLogonDialog: public Ui_RemoteLogonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTELOGONDIALOG_H
