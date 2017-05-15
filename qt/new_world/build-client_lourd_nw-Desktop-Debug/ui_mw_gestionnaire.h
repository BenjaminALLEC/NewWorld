/********************************************************************************
** Form generated from reading UI file 'mw_gestionnaire.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_GESTIONNAIRE_H
#define UI_MW_GESTIONNAIRE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mw_gestionnaire
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mw_gestionnaire)
    {
        if (mw_gestionnaire->objectName().isEmpty())
            mw_gestionnaire->setObjectName(QString::fromUtf8("mw_gestionnaire"));
        mw_gestionnaire->resize(800, 600);
        menubar = new QMenuBar(mw_gestionnaire);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        mw_gestionnaire->setMenuBar(menubar);
        centralwidget = new QWidget(mw_gestionnaire);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mw_gestionnaire->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(mw_gestionnaire);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mw_gestionnaire->setStatusBar(statusbar);

        retranslateUi(mw_gestionnaire);

        QMetaObject::connectSlotsByName(mw_gestionnaire);
    } // setupUi

    void retranslateUi(QMainWindow *mw_gestionnaire)
    {
        mw_gestionnaire->setWindowTitle(QApplication::translate("mw_gestionnaire", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mw_gestionnaire: public Ui_mw_gestionnaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_GESTIONNAIRE_H
