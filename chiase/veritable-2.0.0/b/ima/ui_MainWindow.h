/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>
#include "MainToolBar.h"
#include "SideBar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *m_centralWidget;
    QHBoxLayout *m_centralLayout;
    QScrollArea *m_scrollArea;
    QWidget *scrollAreaWidgetContents;
    SideBar *m_sideBar;
    MainToolBar *m_toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(990, 693);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/icon64.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        m_centralWidget = new QWidget(MainWindow);
        m_centralWidget->setObjectName(QString::fromUtf8("m_centralWidget"));
        m_centralLayout = new QHBoxLayout(m_centralWidget);
        m_centralLayout->setSpacing(0);
        m_centralLayout->setContentsMargins(0, 0, 0, 0);
        m_centralLayout->setObjectName(QString::fromUtf8("m_centralLayout"));
        m_scrollArea = new QScrollArea(m_centralWidget);
        m_scrollArea->setObjectName(QString::fromUtf8("m_scrollArea"));
        m_scrollArea->setFrameShape(QFrame::NoFrame);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setEnabled(false);
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 0, 0));
        m_scrollArea->setWidget(scrollAreaWidgetContents);

        m_centralLayout->addWidget(m_scrollArea);

        MainWindow->setCentralWidget(m_centralWidget);
        m_sideBar = new SideBar(MainWindow);
        m_sideBar->setObjectName(QString::fromUtf8("m_sideBar"));
        m_sideBar->setMovable(false);
        m_sideBar->setIconSize(QSize(16, 16));
        m_sideBar->setFloatable(false);
        MainWindow->addToolBar(Qt::LeftToolBarArea, m_sideBar);
        m_toolBar = new MainToolBar(MainWindow);
        m_toolBar->setObjectName(QString::fromUtf8("m_toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, m_toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        m_sideBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        m_toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
