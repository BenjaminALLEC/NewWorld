/********************************************************************************
** Form generated from reading UI file 'dialog_connection.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CONNECTION_H
#define UI_DIALOG_CONNECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_connection
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_pseudo;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_pseudo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_mdp;
    QLineEdit *lineEdit_mdp;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_exit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ok;
    QLabel *label_erreur;

    void setupUi(QDialog *Dialog_connection)
    {
        if (Dialog_connection->objectName().isEmpty())
            Dialog_connection->setObjectName(QString::fromUtf8("Dialog_connection"));
        Dialog_connection->resize(269, 159);
        verticalLayout = new QVBoxLayout(Dialog_connection);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_pseudo = new QLabel(Dialog_connection);
        label_pseudo->setObjectName(QString::fromUtf8("label_pseudo"));

        horizontalLayout_3->addWidget(label_pseudo);

        horizontalSpacer_2 = new QSpacerItem(32, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lineEdit_pseudo = new QLineEdit(Dialog_connection);
        lineEdit_pseudo->setObjectName(QString::fromUtf8("lineEdit_pseudo"));

        horizontalLayout_3->addWidget(lineEdit_pseudo);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_mdp = new QLabel(Dialog_connection);
        label_mdp->setObjectName(QString::fromUtf8("label_mdp"));

        horizontalLayout_2->addWidget(label_mdp);

        lineEdit_mdp = new QLineEdit(Dialog_connection);
        lineEdit_mdp->setObjectName(QString::fromUtf8("lineEdit_mdp"));
        lineEdit_mdp->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_mdp);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_exit = new QPushButton(Dialog_connection);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));

        horizontalLayout->addWidget(pushButton_exit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_ok = new QPushButton(Dialog_connection);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setEnabled(false);
        pushButton_ok->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(pushButton_ok);


        verticalLayout->addLayout(horizontalLayout);

        label_erreur = new QLabel(Dialog_connection);
        label_erreur->setObjectName(QString::fromUtf8("label_erreur"));

        verticalLayout->addWidget(label_erreur);

        QWidget::setTabOrder(lineEdit_pseudo, lineEdit_mdp);
        QWidget::setTabOrder(lineEdit_mdp, pushButton_ok);
        QWidget::setTabOrder(pushButton_ok, pushButton_exit);

        retranslateUi(Dialog_connection);

        QMetaObject::connectSlotsByName(Dialog_connection);
    } // setupUi

    void retranslateUi(QDialog *Dialog_connection)
    {
        Dialog_connection->setWindowTitle(QApplication::translate("Dialog_connection", "Connection", 0, QApplication::UnicodeUTF8));
        label_pseudo->setText(QApplication::translate("Dialog_connection", "Pseudo : ", 0, QApplication::UnicodeUTF8));
        label_mdp->setText(QApplication::translate("Dialog_connection", "Mot de passe :", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("Dialog_connection", "&Exit", 0, QApplication::UnicodeUTF8));
        pushButton_ok->setText(QApplication::translate("Dialog_connection", "&OK", 0, QApplication::UnicodeUTF8));
        label_erreur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_connection: public Ui_Dialog_connection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CONNECTION_H
