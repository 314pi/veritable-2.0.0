/********************************************************************************
** Form generated from reading UI file 'KeyFileAssistant.ui'
**
** Created: Fri Jun 22 23:20:21 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYFILEASSISTANT_H
#define UI_KEYFILEASSISTANT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWizard>
#include <QtGui/QWizardPage>
#include "KeyDirectoriesPage.h"
#include "KeyFileAssistantModePage.h"

QT_BEGIN_NAMESPACE

class Ui_KeyFileAssistant
{
public:
    QWizardPage *welcomePage;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLabel *label_3;
    KeyFileAssistantModePage *assistantModePage;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_6;
    QRadioButton *modeCreateKeys;
    QRadioButton *modeImportPublicKey;
    QWizardPage *userRolePage;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *userRole;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    KeyDirectoriesPage *directoriesPage;
    QGridLayout *gridLayout_2;
    QCheckBox *exportPublicKey;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *publicKeyDir;
    QToolButton *openPubKeyDir;
    QSpacerItem *verticalSpacer_8;
    QCheckBox *useCustomDestDir;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *destDirEdit;
    QToolButton *openDestDir;
    QLabel *importKeyLabel;
    QWizardPage *summaryPage;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *actionCreateKeys;
    QHBoxLayout *horizontalLayout;
    QLabel *actionImportPublicKey;
    QLabel *importKeySourceDisplayLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *actionWriteKeyFile;
    QLabel *destDirDisplayLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *actionExportPublicKey;
    QLabel *exportKeyDestDisplayLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *actionUserRoleLabel;
    QLabel *userRoleDisplayLabel;
    QSpacerItem *horizontalSpacer_6;
    QButtonGroup *assistantModeButtonGroup;

    void setupUi(QWizard *KeyFileAssistant)
    {
        if (KeyFileAssistant->objectName().isEmpty())
            KeyFileAssistant->setObjectName(QString::fromUtf8("KeyFileAssistant"));
        KeyFileAssistant->resize(520, 345);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Authentication.png"), QSize(), QIcon::Normal, QIcon::Off);
        KeyFileAssistant->setWindowIcon(icon);
        KeyFileAssistant->setSizeGripEnabled(true);
        KeyFileAssistant->setWizardStyle(QWizard::ModernStyle);
        welcomePage = new QWizardPage();
        welcomePage->setObjectName(QString::fromUtf8("welcomePage"));
        verticalLayout = new QVBoxLayout(welcomePage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(24, -1, 24, 24);
        label = new QLabel(welcomePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(welcomePage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(welcomePage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        KeyFileAssistant->addPage(welcomePage);
        assistantModePage = new KeyFileAssistantModePage();
        assistantModePage->setObjectName(QString::fromUtf8("assistantModePage"));
        verticalLayout_2 = new QVBoxLayout(assistantModePage);
        verticalLayout_2->setSpacing(16);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(24, -1, 24, -1);
        label_8 = new QLabel(assistantModePage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        verticalLayout_2->addWidget(label_8);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        modeCreateKeys = new QRadioButton(assistantModePage);
        assistantModeButtonGroup = new QButtonGroup(KeyFileAssistant);
        assistantModeButtonGroup->setObjectName(QString::fromUtf8("assistantModeButtonGroup"));
        assistantModeButtonGroup->addButton(modeCreateKeys);
        modeCreateKeys->setObjectName(QString::fromUtf8("modeCreateKeys"));

        verticalLayout_2->addWidget(modeCreateKeys);

        modeImportPublicKey = new QRadioButton(assistantModePage);
        assistantModeButtonGroup->addButton(modeImportPublicKey);
        modeImportPublicKey->setObjectName(QString::fromUtf8("modeImportPublicKey"));

        verticalLayout_2->addWidget(modeImportPublicKey);

        KeyFileAssistant->addPage(assistantModePage);
        userRolePage = new QWizardPage();
        userRolePage->setObjectName(QString::fromUtf8("userRolePage"));
        gridLayout = new QGridLayout(userRolePage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(16);
        gridLayout->setContentsMargins(24, -1, 24, -1);
        label_5 = new QLabel(userRolePage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 0, 0, 1, 4);

        userRole = new QComboBox(userRolePage);
        userRole->setObjectName(QString::fromUtf8("userRole"));

        gridLayout->addWidget(userRole, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 1, 2);

        label_4 = new QLabel(userRolePage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 8, 1, 1, 3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 7, 1, 1, 3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 9, 1, 1, 3);

        label_6 = new QLabel(userRolePage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(48, 48));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Resources/help-hint.png")));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 4);

        KeyFileAssistant->addPage(userRolePage);
        directoriesPage = new KeyDirectoriesPage();
        directoriesPage->setObjectName(QString::fromUtf8("directoriesPage"));
        gridLayout_2 = new QGridLayout(directoriesPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(24, -1, 24, -1);
        exportPublicKey = new QCheckBox(directoriesPage);
        exportPublicKey->setObjectName(QString::fromUtf8("exportPublicKey"));
        exportPublicKey->setChecked(true);

        gridLayout_2->addWidget(exportPublicKey, 0, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(20, 24, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        publicKeyDir = new QLineEdit(directoriesPage);
        publicKeyDir->setObjectName(QString::fromUtf8("publicKeyDir"));

        gridLayout_2->addWidget(publicKeyDir, 2, 1, 1, 1);

        openPubKeyDir = new QToolButton(directoriesPage);
        openPubKeyDir->setObjectName(QString::fromUtf8("openPubKeyDir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openPubKeyDir->setIcon(icon1);

        gridLayout_2->addWidget(openPubKeyDir, 2, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_8, 3, 1, 1, 2);

        useCustomDestDir = new QCheckBox(directoriesPage);
        useCustomDestDir->setObjectName(QString::fromUtf8("useCustomDestDir"));

        gridLayout_2->addWidget(useCustomDestDir, 4, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 5, 0, 1, 1);

        destDirEdit = new QLineEdit(directoriesPage);
        destDirEdit->setObjectName(QString::fromUtf8("destDirEdit"));
        destDirEdit->setEnabled(false);

        gridLayout_2->addWidget(destDirEdit, 5, 1, 1, 1);

        openDestDir = new QToolButton(directoriesPage);
        openDestDir->setObjectName(QString::fromUtf8("openDestDir"));
        openDestDir->setEnabled(false);
        openDestDir->setIcon(icon1);

        gridLayout_2->addWidget(openDestDir, 5, 2, 1, 1);

        importKeyLabel = new QLabel(directoriesPage);
        importKeyLabel->setObjectName(QString::fromUtf8("importKeyLabel"));

        gridLayout_2->addWidget(importKeyLabel, 1, 0, 1, 2);

        KeyFileAssistant->addPage(directoriesPage);
        summaryPage = new QWizardPage();
        summaryPage->setObjectName(QString::fromUtf8("summaryPage"));
        gridLayout_3 = new QGridLayout(summaryPage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(24, -1, 24, -1);
        label_9 = new QLabel(summaryPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);

        gridLayout_3->addWidget(label_9, 0, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(24, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        actionCreateKeys = new QLabel(summaryPage);
        actionCreateKeys->setObjectName(QString::fromUtf8("actionCreateKeys"));

        verticalLayout_3->addWidget(actionCreateKeys);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        actionImportPublicKey = new QLabel(summaryPage);
        actionImportPublicKey->setObjectName(QString::fromUtf8("actionImportPublicKey"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(actionImportPublicKey->sizePolicy().hasHeightForWidth());
        actionImportPublicKey->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(actionImportPublicKey);

        importKeySourceDisplayLabel = new QLabel(summaryPage);
        importKeySourceDisplayLabel->setObjectName(QString::fromUtf8("importKeySourceDisplayLabel"));

        horizontalLayout->addWidget(importKeySourceDisplayLabel);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        actionWriteKeyFile = new QLabel(summaryPage);
        actionWriteKeyFile->setObjectName(QString::fromUtf8("actionWriteKeyFile"));
        sizePolicy.setHeightForWidth(actionWriteKeyFile->sizePolicy().hasHeightForWidth());
        actionWriteKeyFile->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(actionWriteKeyFile);

        destDirDisplayLabel = new QLabel(summaryPage);
        destDirDisplayLabel->setObjectName(QString::fromUtf8("destDirDisplayLabel"));

        horizontalLayout_4->addWidget(destDirDisplayLabel);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        actionExportPublicKey = new QLabel(summaryPage);
        actionExportPublicKey->setObjectName(QString::fromUtf8("actionExportPublicKey"));
        sizePolicy.setHeightForWidth(actionExportPublicKey->sizePolicy().hasHeightForWidth());
        actionExportPublicKey->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(actionExportPublicKey);

        exportKeyDestDisplayLabel = new QLabel(summaryPage);
        exportKeyDestDisplayLabel->setObjectName(QString::fromUtf8("exportKeyDestDisplayLabel"));

        horizontalLayout_3->addWidget(exportKeyDestDisplayLabel);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        actionUserRoleLabel = new QLabel(summaryPage);
        actionUserRoleLabel->setObjectName(QString::fromUtf8("actionUserRoleLabel"));
        sizePolicy.setHeightForWidth(actionUserRoleLabel->sizePolicy().hasHeightForWidth());
        actionUserRoleLabel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(actionUserRoleLabel);

        userRoleDisplayLabel = new QLabel(summaryPage);
        userRoleDisplayLabel->setObjectName(QString::fromUtf8("userRoleDisplayLabel"));
        userRoleDisplayLabel->setFont(font);

        horizontalLayout_2->addWidget(userRoleDisplayLabel);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout_3->addLayout(verticalLayout_3, 2, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 2, 2, 1, 1);

        KeyFileAssistant->addPage(summaryPage);

        retranslateUi(KeyFileAssistant);
        QObject::connect(useCustomDestDir, SIGNAL(toggled(bool)), destDirEdit, SLOT(setEnabled(bool)));
        QObject::connect(useCustomDestDir, SIGNAL(toggled(bool)), openDestDir, SLOT(setEnabled(bool)));
        QObject::connect(modeImportPublicKey, SIGNAL(toggled(bool)), exportPublicKey, SLOT(setHidden(bool)));
        QObject::connect(modeCreateKeys, SIGNAL(toggled(bool)), importKeyLabel, SLOT(setHidden(bool)));
        QObject::connect(modeImportPublicKey, SIGNAL(toggled(bool)), actionCreateKeys, SLOT(setHidden(bool)));
        QObject::connect(modeCreateKeys, SIGNAL(toggled(bool)), actionImportPublicKey, SLOT(setHidden(bool)));
        QObject::connect(exportPublicKey, SIGNAL(toggled(bool)), actionExportPublicKey, SLOT(setVisible(bool)));
        QObject::connect(modeCreateKeys, SIGNAL(toggled(bool)), exportPublicKey, SLOT(setChecked(bool)));
        QObject::connect(modeImportPublicKey, SIGNAL(toggled(bool)), exportKeyDestDisplayLabel, SLOT(setHidden(bool)));
        QObject::connect(modeCreateKeys, SIGNAL(toggled(bool)), importKeySourceDisplayLabel, SLOT(setHidden(bool)));
        QObject::connect(destDirEdit, SIGNAL(textChanged(QString)), destDirDisplayLabel, SLOT(setText(QString)));
        QObject::connect(userRole, SIGNAL(currentIndexChanged(QString)), userRoleDisplayLabel, SLOT(setText(QString)));
        QObject::connect(modeImportPublicKey, SIGNAL(toggled(bool)), publicKeyDir, SLOT(setEnabled(bool)));
        QObject::connect(exportPublicKey, SIGNAL(toggled(bool)), publicKeyDir, SLOT(setEnabled(bool)));
        QObject::connect(exportPublicKey, SIGNAL(toggled(bool)), openPubKeyDir, SLOT(setEnabled(bool)));
        QObject::connect(modeImportPublicKey, SIGNAL(toggled(bool)), openPubKeyDir, SLOT(setEnabled(bool)));
        QObject::connect(exportPublicKey, SIGNAL(toggled(bool)), exportKeyDestDisplayLabel, SLOT(setVisible(bool)));
        QObject::connect(publicKeyDir, SIGNAL(textChanged(QString)), importKeySourceDisplayLabel, SLOT(setText(QString)));
        QObject::connect(publicKeyDir, SIGNAL(textChanged(QString)), exportKeyDestDisplayLabel, SLOT(setText(QString)));
        QObject::connect(modeImportPublicKey, SIGNAL(toggled(bool)), actionExportPublicKey, SLOT(setHidden(bool)));

        QMetaObject::connectSlotsByName(KeyFileAssistant);
    } // setupUi

    void retranslateUi(QWizard *KeyFileAssistant)
    {
        KeyFileAssistant->setWindowTitle(QApplication::translate("KeyFileAssistant", "vERITABLE Access Key Assistant", 0, QApplication::UnicodeUTF8));
        welcomePage->setTitle(QApplication::translate("KeyFileAssistant", "Create/import vERITABLE access keys", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("KeyFileAssistant", "This assistant will help you to create or import vERITABLE access keys.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("KeyFileAssistant", "How does it work?", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("KeyFileAssistant", "vERITABLE access keys consist of two parts belonging together, a private and a public key part.\n"
"\n"
"Using the private key part, users on the master computer will be able to access client computers. It is important that only authorized users have read access to the private key file.\n"
"\n"
"The public key part is used on the client computers to verify that any incoming connection request is authorized.", 0, QApplication::UnicodeUTF8));
        assistantModePage->setTitle(QApplication::translate("KeyFileAssistant", "Assistant mode", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("KeyFileAssistant", "Please choose whether to create new access keys or import a public key on a client.", 0, QApplication::UnicodeUTF8));
        modeCreateKeys->setText(QApplication::translate("KeyFileAssistant", "Create new access keys (master computer)", 0, QApplication::UnicodeUTF8));
        modeImportPublicKey->setText(QApplication::translate("KeyFileAssistant", "Import public key (client computer)", 0, QApplication::UnicodeUTF8));
        userRolePage->setTitle(QApplication::translate("KeyFileAssistant", "Select user role", 0, QApplication::UnicodeUTF8));
        userRolePage->setSubTitle(QString());
        label_5->setText(QApplication::translate("KeyFileAssistant", "Please select a user role for which to create or import the access keys:", 0, QApplication::UnicodeUTF8));
        userRole->clear();
        userRole->insertItems(0, QStringList()
         << QApplication::translate("KeyFileAssistant", "Teacher", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KeyFileAssistant", "Administrator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KeyFileAssistant", "Support team member", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KeyFileAssistant", "Other", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("KeyFileAssistant", "User roles allow using multiple access keys in parallel. For example there can be different teacher access keys for each classroom while the support access keys are the same for the whole school.", 0, QApplication::UnicodeUTF8));
        directoriesPage->setTitle(QApplication::translate("KeyFileAssistant", "Directories", 0, QApplication::UnicodeUTF8));
        exportPublicKey->setText(QApplication::translate("KeyFileAssistant", "Export public key part (master computer)", 0, QApplication::UnicodeUTF8));
        openPubKeyDir->setText(QApplication::translate("KeyFileAssistant", "...", 0, QApplication::UnicodeUTF8));
        useCustomDestDir->setText(QApplication::translate("KeyFileAssistant", "Use custom destination directory for access keys", 0, QApplication::UnicodeUTF8));
        openDestDir->setText(QApplication::translate("KeyFileAssistant", "...", 0, QApplication::UnicodeUTF8));
        importKeyLabel->setText(QApplication::translate("KeyFileAssistant", "Please specify the location of the public access key to be imported.", 0, QApplication::UnicodeUTF8));
        summaryPage->setTitle(QApplication::translate("KeyFileAssistant", "Summary", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("KeyFileAssistant", "The following actions will be taken:", 0, QApplication::UnicodeUTF8));
        actionCreateKeys->setText(QApplication::translate("KeyFileAssistant", "\342\200\242 Create new access keys", 0, QApplication::UnicodeUTF8));
        actionImportPublicKey->setText(QApplication::translate("KeyFileAssistant", "\342\200\242 Import public access key from", 0, QApplication::UnicodeUTF8));
        importKeySourceDisplayLabel->setText(QApplication::translate("KeyFileAssistant", "<unknown>", 0, QApplication::UnicodeUTF8));
        actionWriteKeyFile->setText(QApplication::translate("KeyFileAssistant", "\342\200\242 Write access key(s) to", 0, QApplication::UnicodeUTF8));
        destDirDisplayLabel->setText(QApplication::translate("KeyFileAssistant", "<unknown>", 0, QApplication::UnicodeUTF8));
        actionExportPublicKey->setText(QApplication::translate("KeyFileAssistant", "\342\200\242 Export public key to", 0, QApplication::UnicodeUTF8));
        exportKeyDestDisplayLabel->setText(QApplication::translate("KeyFileAssistant", "<unknown>", 0, QApplication::UnicodeUTF8));
        actionUserRoleLabel->setText(QApplication::translate("KeyFileAssistant", "\342\200\242 Configure for user role", 0, QApplication::UnicodeUTF8));
        userRoleDisplayLabel->setText(QApplication::translate("KeyFileAssistant", "Teacher", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KeyFileAssistant: public Ui_KeyFileAssistant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYFILEASSISTANT_H
