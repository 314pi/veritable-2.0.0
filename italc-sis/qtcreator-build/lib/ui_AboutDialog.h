/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created: Tue 15. May 10:39:01 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

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
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout1;
    QPlainTextEdit *authors;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_4;
    QGridLayout *gridLayout2;
    QPlainTextEdit *license;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(571, 390);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
        AboutDialog->setModal(true);
        vboxLayout = new QVBoxLayout(AboutDialog);
        vboxLayout->setSpacing(10);
        vboxLayout->setContentsMargins(15, 15, 15, 15);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(20);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/icon64.png")));

        hboxLayout->addWidget(label);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        hboxLayout->addWidget(label_2);


        vboxLayout->addLayout(hboxLayout);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(16);
        gridLayout->setContentsMargins(24, 24, 9, 9);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setOpenExternalLinks(true);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        tabWidget->addTab(tab, icon, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout1 = new QGridLayout(tab_2);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        authors = new QPlainTextEdit(tab_2);
        authors->setObjectName(QString::fromUtf8("authors"));
        authors->setFrameShape(QFrame::NoFrame);
        authors->setReadOnly(true);

        gridLayout1->addWidget(authors, 0, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/authors.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon1, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout = new QVBoxLayout(tab_3);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(24, 24, 24, 24);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        verticalLayout->addWidget(label_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/locale.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout2 = new QGridLayout(tab_4);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setContentsMargins(-1, -1, -1, 9);
        license = new QPlainTextEdit(tab_4);
        license->setObjectName(QString::fromUtf8("license"));
        license->setFrameShape(QFrame::NoFrame);
        license->setReadOnly(true);

        gridLayout2->addWidget(license, 0, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/license.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon3, QString());

        vboxLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About vERITABLE", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("AboutDialog", "About vERITABLE", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AboutDialog", "vERITABLE - Intelligent Teaching And Learning with Computers\n"
"\n"
"Copyright \302\251 2004-2011 Tobias Doerffel / vERITABLE Solutions", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AboutDialog", "<a href=\"http://veritable.sourceforge.net\">http://veritable.sourceforge.net</a>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AboutDialog", "About", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AboutDialog", "Authors", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AboutDialog", "Current language not translated yet (or native English).\n"
"\n"
"If you're interested in translating vERITABLE into your local or another language or want to improve an existing translation, please contact an vERITABLE developer!", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AboutDialog", "Translation", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("AboutDialog", "License", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
