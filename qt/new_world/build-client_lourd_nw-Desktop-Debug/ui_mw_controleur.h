/********************************************************************************
** Form generated from reading UI file 'mw_controleur.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_CONTROLEUR_H
#define UI_MW_CONTROLEUR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mw_manager
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mw_manager)
    {
        if (mw_manager->objectName().isEmpty())
            mw_manager->setObjectName(QString::fromUtf8("mw_manager"));
        mw_manager->resize(1050, 648);
        centralWidget = new QWidget(mw_manager);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mw_manager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mw_manager);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1050, 27));
        mw_manager->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mw_manager);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mw_manager->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mw_manager);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mw_manager->setStatusBar(statusBar);

        retranslateUi(mw_manager);

        QMetaObject::connectSlotsByName(mw_manager);
    } // setupUi

    void retranslateUi(QMainWindow *mw_manager)
    {
        mw_manager->setWindowTitle(QApplication::translate("mw_manager", "mw_controleur", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mw_manager: public Ui_mw_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_CONTROLEUR_H
