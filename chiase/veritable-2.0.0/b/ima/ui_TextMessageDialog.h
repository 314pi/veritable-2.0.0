/********************************************************************************
** Form generated from reading UI file 'TextMessageDialog.ui'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTMESSAGEDIALOG_H
#define UI_TEXTMESSAGEDIALOG_H

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

class Ui_TextMessageDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TextMessageDialog)
    {
        if (TextMessageDialog->objectName().isEmpty())
            TextMessageDialog->setObjectName(QString::fromUtf8("TextMessageDialog"));
        TextMessageDialog->resize(400, 353);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/text_message_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TextMessageDialog->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(TextMessageDialog);
        vboxLayout->setSpacing(16);
        vboxLayout->setContentsMargins(15, 15, 15, 15);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(10);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(TextMessageDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/text_message_48.png")));

        hboxLayout->addWidget(label);

        label_2 = new QLabel(TextMessageDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        hboxLayout->addWidget(label_2);


        vboxLayout->addLayout(hboxLayout);

        label_3 = new QLabel(TextMessageDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        vboxLayout->addWidget(label_3);

        textEdit = new QTextEdit(TextMessageDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        vboxLayout->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(TextMessageDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(TextMessageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TextMessageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TextMessageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TextMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *TextMessageDialog)
    {
        TextMessageDialog->setWindowTitle(QApplication::translate("TextMessageDialog", "Send text message", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("TextMessageDialog", "Send text message", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TextMessageDialog", "Use the field below to type your message which will be sent to all selected users.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TextMessageDialog: public Ui_TextMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTMESSAGEDIALOG_H
