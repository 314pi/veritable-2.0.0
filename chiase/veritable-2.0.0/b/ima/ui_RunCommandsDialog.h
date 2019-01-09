/********************************************************************************
** Form generated from reading UI file 'RunCommandsDialog.ui'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNCOMMANDSDIALOG_H
#define UI_RUNCOMMANDSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RunCommandsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *cmdInputTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RunCommandsDialog)
    {
        if (RunCommandsDialog->objectName().isEmpty())
            RunCommandsDialog->setObjectName(QString::fromUtf8("RunCommandsDialog"));
        RunCommandsDialog->resize(400, 353);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/text_message_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        RunCommandsDialog->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(RunCommandsDialog);
        vboxLayout->setSpacing(16);
        vboxLayout->setContentsMargins(15, 15, 15, 15);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(10);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(RunCommandsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/run.png")));

        hboxLayout->addWidget(label);

        label_2 = new QLabel(RunCommandsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        hboxLayout->addWidget(label_2);


        vboxLayout->addLayout(hboxLayout);

        label_3 = new QLabel(RunCommandsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        vboxLayout->addWidget(label_3);

        cmdInputTextEdit = new QTextEdit(RunCommandsDialog);
        cmdInputTextEdit->setObjectName(QString::fromUtf8("cmdInputTextEdit"));

        vboxLayout->addWidget(cmdInputTextEdit);

        buttonBox = new QDialogButtonBox(RunCommandsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(RunCommandsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RunCommandsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RunCommandsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RunCommandsDialog);
    } // setupUi

    void retranslateUi(QDialog *RunCommandsDialog)
    {
        RunCommandsDialog->setWindowTitle(QApplication::translate("RunCommandsDialog", "Run commands", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("RunCommandsDialog", "Run commands", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RunCommandsDialog", "Please enter the commands to run on the selected client(s). You can separate multiple commands by line.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RunCommandsDialog: public Ui_RunCommandsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNCOMMANDSDIALOG_H
