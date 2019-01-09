/********************************************************************************
** Form generated from reading UI file 'ClientSettingsDialog.ui'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTSETTINGSDIALOG_H
#define UI_CLIENTSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_2;
    QLabel *label;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *hostnameEdit;
    QLabel *label_3;
    QLineEdit *nameEdit;
    QLabel *label_5;
    QLineEdit *macEdit;
    QLabel *label_7;
    QComboBox *classRoomComboBox;
    QLabel *label_9;
    QComboBox *typeComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClientSettingsDialog)
    {
        if (ClientSettingsDialog->objectName().isEmpty())
            ClientSettingsDialog->setObjectName(QString::fromUtf8("ClientSettingsDialog"));
        ClientSettingsDialog->resize(388, 288);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/client_settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        ClientSettingsDialog->setWindowIcon(icon);
        ClientSettingsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ClientSettingsDialog);
        verticalLayout->setSpacing(16);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        _2 = new QHBoxLayout();
        _2->setSpacing(10);
#ifndef Q_OS_MAC
        _2->setContentsMargins(0, 0, 0, 0);
#endif
        _2->setObjectName(QString::fromUtf8("_2"));
        label = new QLabel(ClientSettingsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/client_settings.png")));
        label->setScaledContents(false);

        _2->addWidget(label);

        label_2 = new QLabel(ClientSettingsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        _2->addWidget(label_2);


        verticalLayout->addLayout(_2);

        gridLayout = new QGridLayout();
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        label_4 = new QLabel(ClientSettingsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        hostnameEdit = new QLineEdit(ClientSettingsDialog);
        hostnameEdit->setObjectName(QString::fromUtf8("hostnameEdit"));

        gridLayout->addWidget(hostnameEdit, 0, 1, 1, 1);

        label_3 = new QLabel(ClientSettingsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        nameEdit = new QLineEdit(ClientSettingsDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_5 = new QLabel(ClientSettingsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        macEdit = new QLineEdit(ClientSettingsDialog);
        macEdit->setObjectName(QString::fromUtf8("macEdit"));

        gridLayout->addWidget(macEdit, 2, 1, 1, 1);

        label_7 = new QLabel(ClientSettingsDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        classRoomComboBox = new QComboBox(ClientSettingsDialog);
        classRoomComboBox->setObjectName(QString::fromUtf8("classRoomComboBox"));

        gridLayout->addWidget(classRoomComboBox, 3, 1, 1, 1);

        label_9 = new QLabel(ClientSettingsDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        typeComboBox = new QComboBox(ClientSettingsDialog);
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));

        gridLayout->addWidget(typeComboBox, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(ClientSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ClientSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ClientSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ClientSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ClientSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientSettingsDialog)
    {
        ClientSettingsDialog->setWindowTitle(QApplication::translate("ClientSettingsDialog", "Client settings", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("ClientSettingsDialog", "Client settings", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ClientSettingsDialog", "IP/hostname", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        hostnameEdit->setToolTip(QApplication::translate("ClientSettingsDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">enter an IP-address or hostname under which vERITABLE can reach the client (use ':' for specifying an optional port-number)</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("ClientSettingsDialog", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nameEdit->setToolTip(QApplication::translate("ClientSettingsDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Optional nickname of the host which is displayed in vERITABLE.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("ClientSettingsDialog", "MAC address", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        macEdit->setToolTip(QApplication::translate("ClientSettingsDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hardware/MAC-address of client - only used for powering on client</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("ClientSettingsDialog", "Classroom", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ClientSettingsDialog", "Type", 0, QApplication::UnicodeUTF8));
        typeComboBox->clear();
        typeComboBox->insertItems(0, QStringList()
         << QApplication::translate("ClientSettingsDialog", "Student computer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ClientSettingsDialog", "Teacher computer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ClientSettingsDialog", "Other/undefined computer", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class ClientSettingsDialog: public Ui_ClientSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTSETTINGSDIALOG_H
