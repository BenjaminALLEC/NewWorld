/********************************************************************************
** Form generated from reading UI file 'controller.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLLER_H
#define UI_CONTROLLER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_controller
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_10;
    QTabWidget *tabWidget_controller;
    QWidget *tab_planningVisits;
    QWidget *tab_productManagement;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *controller)
    {
        if (controller->objectName().isEmpty())
            controller->setObjectName(QString::fromUtf8("controller"));
        controller->resize(610, 691);
        centralwidget = new QWidget(controller);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_10 = new QVBoxLayout(centralwidget);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        tabWidget_controller = new QTabWidget(centralwidget);
        tabWidget_controller->setObjectName(QString::fromUtf8("tabWidget_controller"));
        tab_planningVisits = new QWidget();
        tab_planningVisits->setObjectName(QString::fromUtf8("tab_planningVisits"));
        tabWidget_controller->addTab(tab_planningVisits, QString());
        tab_productManagement = new QWidget();
        tab_productManagement->setObjectName(QString::fromUtf8("tab_productManagement"));
        tabWidget_controller->addTab(tab_productManagement, QString());

        verticalLayout_10->addWidget(tabWidget_controller);

        controller->setCentralWidget(centralwidget);
        menubar = new QMenuBar(controller);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 610, 27));
        controller->setMenuBar(menubar);
        statusbar = new QStatusBar(controller);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        controller->setStatusBar(statusbar);

        retranslateUi(controller);

        tabWidget_controller->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(controller);
    } // setupUi

    void retranslateUi(QMainWindow *controller)
    {
        controller->setWindowTitle(QApplication::translate("controller", "Controller", 0, QApplication::UnicodeUTF8));
        tabWidget_controller->setTabText(tabWidget_controller->indexOf(tab_planningVisits), QApplication::translate("controller", "Planning visits", 0, QApplication::UnicodeUTF8));
        tabWidget_controller->setTabText(tabWidget_controller->indexOf(tab_productManagement), QApplication::translate("controller", "Product Management", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class controller: public Ui_controller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLLER_H
