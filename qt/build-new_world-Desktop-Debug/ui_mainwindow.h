/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
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
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gestionnaire
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_pseudo;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_mdp;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ok;
    QLabel *label_erreur;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Gestionnaire)
    {
        if (Gestionnaire->objectName().isEmpty())
            Gestionnaire->setObjectName(QString::fromUtf8("Gestionnaire"));
        Gestionnaire->resize(262, 199);
        centralWidget = new QWidget(Gestionnaire);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_pseudo = new QLabel(centralWidget);
        label_pseudo->setObjectName(QString::fromUtf8("label_pseudo"));

        horizontalLayout_3->addWidget(label_pseudo);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_mdp = new QLabel(centralWidget);
        label_mdp->setObjectName(QString::fromUtf8("label_mdp"));

        horizontalLayout_2->addWidget(label_mdp);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));

        horizontalLayout->addWidget(pushButton_exit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_ok = new QPushButton(centralWidget);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));

        horizontalLayout->addWidget(pushButton_ok);


        verticalLayout->addLayout(horizontalLayout);

        label_erreur = new QLabel(centralWidget);
        label_erreur->setObjectName(QString::fromUtf8("label_erreur"));

        verticalLayout->addWidget(label_erreur);

        Gestionnaire->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Gestionnaire);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Gestionnaire->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Gestionnaire);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Gestionnaire->setStatusBar(statusBar);

        retranslateUi(Gestionnaire);

        QMetaObject::connectSlotsByName(Gestionnaire);
    } // setupUi

    void retranslateUi(QMainWindow *Gestionnaire)
    {
        Gestionnaire->setWindowTitle(QApplication::translate("Gestionnaire", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_pseudo->setText(QApplication::translate("Gestionnaire", "Pseudo : ", 0, QApplication::UnicodeUTF8));
        label_mdp->setText(QApplication::translate("Gestionnaire", "Mot de passe :", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("Gestionnaire", "&Exit", 0, QApplication::UnicodeUTF8));
        pushButton_ok->setText(QApplication::translate("Gestionnaire", "&OK", 0, QApplication::UnicodeUTF8));
        label_erreur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Gestionnaire: public Ui_Gestionnaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
