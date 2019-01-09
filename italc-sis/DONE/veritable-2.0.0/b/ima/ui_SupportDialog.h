/********************************************************************************
** Form generated from reading UI file 'SupportDialog.ui'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPORTDIALOG_H
#define UI_SUPPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SupportDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *hostEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SupportDialog)
    {
        if (SupportDialog->objectName().isEmpty())
            SupportDialog->setObjectName(QString::fromUtf8("SupportDialog"));
        SupportDialog->resize(400, 215);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/remote_control_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        SupportDialog->setWindowIcon(icon);
        SupportDialog->setModal(true);
        vboxLayout = new QVBoxLayout(SupportDialog);
        vboxLayout->setSpacing(16);
        vboxLayout->setContentsMargins(15, 15, 15, 15);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(10);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(SupportDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/remote_control_48.png")));

        hboxLayout->addWidget(label);

        label_2 = new QLabel(SupportDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        hboxLayout->addWidget(label_2);


        vboxLayout->addLayout(hboxLayout);

        label_3 = new QLabel(SupportDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setWordWrap(true);

        vboxLayout->addWidget(label_3);

        hostEdit = new QLineEdit(SupportDialog);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));

        vboxLayout->addWidget(hostEdit);

        buttonBox = new QDialogButtonBox(SupportDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(SupportDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SupportDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SupportDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SupportDialog);
    } // setupUi

    void retranslateUi(QDialog *SupportDialog)
    {
        SupportDialog->setWindowTitle(QApplication::translate("SupportDialog", "Support", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("SupportDialog", "Support", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SupportDialog", "Please enter the IP address or the name of the host to which you want to connect.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SupportDialog: public Ui_SupportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPORTDIALOG_H
