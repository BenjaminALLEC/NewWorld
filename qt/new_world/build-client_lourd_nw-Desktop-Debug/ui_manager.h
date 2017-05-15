/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manager
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget_manager;
    QWidget *tab_managementPersonnel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_listPersonnel;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_name;
    QVBoxLayout *verticalLayout_firstName;
    QLabel *label_firstName;
    QLineEdit *lineEdit_firstName;
    QVBoxLayout *verticalLayout_lastName;
    QLabel *label_lastName;
    QLineEdit *lineEdit_LastName;
    QVBoxLayout *verticalLayout_birthDate;
    QLabel *label_birthDate;
    QLineEdit *lineEdit_birthDate;
    QVBoxLayout *verticalLayout_personnel;
    QLabel *label;
    QHBoxLayout *horizontalLayout_radioButton;
    QRadioButton *radioButton_controller;
    QRadioButton *radioButton_manager;
    QVBoxLayout *verticalLayout_address;
    QLabel *label_iban;
    QLineEdit *lineEdit_iban;
    QLabel *label_;
    QLineEdit *lineEdit_address;
    QHBoxLayout *horizontalLayout_city;
    QVBoxLayout *verticalLayout_city;
    QLabel *label_city;
    QLineEdit *lineEdit_city;
    QVBoxLayout *verticalLayout_postalCode;
    QLabel *label_postalCode;
    QLineEdit *lineEdit_postalCode;
    QVBoxLayout *verticalLayout_Email;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QVBoxLayout *verticalLayout_phone;
    QLabel *label_phone;
    QLineEdit *lineEdit_phone;
    QHBoxLayout *horizontalLayout_action;
    QPushButton *pushButton_add;
    QPushButton *pushButton_modify;
    QPushButton *pushButton_delette;
    QPushButton *pushButton_resetPassword;
    QWidget *tab_statistics;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *manager)
    {
        if (manager->objectName().isEmpty())
            manager->setObjectName(QString::fromUtf8("manager"));
        manager->resize(610, 740);
        centralwidget = new QWidget(manager);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget_manager = new QTabWidget(centralwidget);
        tabWidget_manager->setObjectName(QString::fromUtf8("tabWidget_manager"));
        tab_managementPersonnel = new QWidget();
        tab_managementPersonnel->setObjectName(QString::fromUtf8("tab_managementPersonnel"));
        horizontalLayout = new QHBoxLayout(tab_managementPersonnel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_listPersonnel = new QLabel(tab_managementPersonnel);
        label_listPersonnel->setObjectName(QString::fromUtf8("label_listPersonnel"));

        verticalLayout->addWidget(label_listPersonnel);

        tableView = new QTableView(tab_managementPersonnel);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_name = new QHBoxLayout();
        horizontalLayout_name->setObjectName(QString::fromUtf8("horizontalLayout_name"));
        verticalLayout_firstName = new QVBoxLayout();
        verticalLayout_firstName->setObjectName(QString::fromUtf8("verticalLayout_firstName"));
        label_firstName = new QLabel(tab_managementPersonnel);
        label_firstName->setObjectName(QString::fromUtf8("label_firstName"));

        verticalLayout_firstName->addWidget(label_firstName);

        lineEdit_firstName = new QLineEdit(tab_managementPersonnel);
        lineEdit_firstName->setObjectName(QString::fromUtf8("lineEdit_firstName"));

        verticalLayout_firstName->addWidget(lineEdit_firstName);


        horizontalLayout_name->addLayout(verticalLayout_firstName);

        verticalLayout_lastName = new QVBoxLayout();
        verticalLayout_lastName->setObjectName(QString::fromUtf8("verticalLayout_lastName"));
        label_lastName = new QLabel(tab_managementPersonnel);
        label_lastName->setObjectName(QString::fromUtf8("label_lastName"));

        verticalLayout_lastName->addWidget(label_lastName);

        lineEdit_LastName = new QLineEdit(tab_managementPersonnel);
        lineEdit_LastName->setObjectName(QString::fromUtf8("lineEdit_LastName"));

        verticalLayout_lastName->addWidget(lineEdit_LastName);


        horizontalLayout_name->addLayout(verticalLayout_lastName);


        verticalLayout_2->addLayout(horizontalLayout_name);

        verticalLayout_birthDate = new QVBoxLayout();
        verticalLayout_birthDate->setObjectName(QString::fromUtf8("verticalLayout_birthDate"));
        label_birthDate = new QLabel(tab_managementPersonnel);
        label_birthDate->setObjectName(QString::fromUtf8("label_birthDate"));

        verticalLayout_birthDate->addWidget(label_birthDate);

        lineEdit_birthDate = new QLineEdit(tab_managementPersonnel);
        lineEdit_birthDate->setObjectName(QString::fromUtf8("lineEdit_birthDate"));

        verticalLayout_birthDate->addWidget(lineEdit_birthDate);


        verticalLayout_2->addLayout(verticalLayout_birthDate);

        verticalLayout_personnel = new QVBoxLayout();
        verticalLayout_personnel->setObjectName(QString::fromUtf8("verticalLayout_personnel"));
        label = new QLabel(tab_managementPersonnel);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_personnel->addWidget(label);

        horizontalLayout_radioButton = new QHBoxLayout();
        horizontalLayout_radioButton->setObjectName(QString::fromUtf8("horizontalLayout_radioButton"));
        radioButton_controller = new QRadioButton(tab_managementPersonnel);
        radioButton_controller->setObjectName(QString::fromUtf8("radioButton_controller"));
        radioButton_controller->setFocusPolicy(Qt::StrongFocus);
        radioButton_controller->setAcceptDrops(false);
        radioButton_controller->setAutoFillBackground(false);
        radioButton_controller->setChecked(true);

        horizontalLayout_radioButton->addWidget(radioButton_controller);

        radioButton_manager = new QRadioButton(tab_managementPersonnel);
        radioButton_manager->setObjectName(QString::fromUtf8("radioButton_manager"));

        horizontalLayout_radioButton->addWidget(radioButton_manager);


        verticalLayout_personnel->addLayout(horizontalLayout_radioButton);


        verticalLayout_2->addLayout(verticalLayout_personnel);

        verticalLayout_address = new QVBoxLayout();
        verticalLayout_address->setObjectName(QString::fromUtf8("verticalLayout_address"));
        label_iban = new QLabel(tab_managementPersonnel);
        label_iban->setObjectName(QString::fromUtf8("label_iban"));

        verticalLayout_address->addWidget(label_iban);

        lineEdit_iban = new QLineEdit(tab_managementPersonnel);
        lineEdit_iban->setObjectName(QString::fromUtf8("lineEdit_iban"));

        verticalLayout_address->addWidget(lineEdit_iban);

        label_ = new QLabel(tab_managementPersonnel);
        label_->setObjectName(QString::fromUtf8("label_"));

        verticalLayout_address->addWidget(label_);

        lineEdit_address = new QLineEdit(tab_managementPersonnel);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));

        verticalLayout_address->addWidget(lineEdit_address);


        verticalLayout_2->addLayout(verticalLayout_address);

        horizontalLayout_city = new QHBoxLayout();
        horizontalLayout_city->setObjectName(QString::fromUtf8("horizontalLayout_city"));
        verticalLayout_city = new QVBoxLayout();
        verticalLayout_city->setObjectName(QString::fromUtf8("verticalLayout_city"));
        label_city = new QLabel(tab_managementPersonnel);
        label_city->setObjectName(QString::fromUtf8("label_city"));

        verticalLayout_city->addWidget(label_city);

        lineEdit_city = new QLineEdit(tab_managementPersonnel);
        lineEdit_city->setObjectName(QString::fromUtf8("lineEdit_city"));

        verticalLayout_city->addWidget(lineEdit_city);


        horizontalLayout_city->addLayout(verticalLayout_city);

        verticalLayout_postalCode = new QVBoxLayout();
        verticalLayout_postalCode->setObjectName(QString::fromUtf8("verticalLayout_postalCode"));
        label_postalCode = new QLabel(tab_managementPersonnel);
        label_postalCode->setObjectName(QString::fromUtf8("label_postalCode"));

        verticalLayout_postalCode->addWidget(label_postalCode);

        lineEdit_postalCode = new QLineEdit(tab_managementPersonnel);
        lineEdit_postalCode->setObjectName(QString::fromUtf8("lineEdit_postalCode"));

        verticalLayout_postalCode->addWidget(lineEdit_postalCode);


        horizontalLayout_city->addLayout(verticalLayout_postalCode);


        verticalLayout_2->addLayout(horizontalLayout_city);

        verticalLayout_Email = new QVBoxLayout();
        verticalLayout_Email->setObjectName(QString::fromUtf8("verticalLayout_Email"));
        label_email = new QLabel(tab_managementPersonnel);
        label_email->setObjectName(QString::fromUtf8("label_email"));

        verticalLayout_Email->addWidget(label_email);

        lineEdit_email = new QLineEdit(tab_managementPersonnel);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));

        verticalLayout_Email->addWidget(lineEdit_email);


        verticalLayout_2->addLayout(verticalLayout_Email);

        verticalLayout_phone = new QVBoxLayout();
        verticalLayout_phone->setObjectName(QString::fromUtf8("verticalLayout_phone"));
        label_phone = new QLabel(tab_managementPersonnel);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));

        verticalLayout_phone->addWidget(label_phone);

        lineEdit_phone = new QLineEdit(tab_managementPersonnel);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));

        verticalLayout_phone->addWidget(lineEdit_phone);


        verticalLayout_2->addLayout(verticalLayout_phone);

        horizontalLayout_action = new QHBoxLayout();
        horizontalLayout_action->setObjectName(QString::fromUtf8("horizontalLayout_action"));
        pushButton_add = new QPushButton(tab_managementPersonnel);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));

        horizontalLayout_action->addWidget(pushButton_add);

        pushButton_modify = new QPushButton(tab_managementPersonnel);
        pushButton_modify->setObjectName(QString::fromUtf8("pushButton_modify"));

        horizontalLayout_action->addWidget(pushButton_modify);

        pushButton_delette = new QPushButton(tab_managementPersonnel);
        pushButton_delette->setObjectName(QString::fromUtf8("pushButton_delette"));

        horizontalLayout_action->addWidget(pushButton_delette);


        verticalLayout_2->addLayout(horizontalLayout_action);

        pushButton_resetPassword = new QPushButton(tab_managementPersonnel);
        pushButton_resetPassword->setObjectName(QString::fromUtf8("pushButton_resetPassword"));

        verticalLayout_2->addWidget(pushButton_resetPassword);


        horizontalLayout->addLayout(verticalLayout_2);

        tabWidget_manager->addTab(tab_managementPersonnel, QString());
        tab_statistics = new QWidget();
        tab_statistics->setObjectName(QString::fromUtf8("tab_statistics"));
        tabWidget_manager->addTab(tab_statistics, QString());

        horizontalLayout_2->addWidget(tabWidget_manager);

        manager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(manager);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 610, 27));
        manager->setMenuBar(menubar);
        statusbar = new QStatusBar(manager);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        manager->setStatusBar(statusbar);

        retranslateUi(manager);

        tabWidget_manager->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(manager);
    } // setupUi

    void retranslateUi(QMainWindow *manager)
    {
        manager->setWindowTitle(QApplication::translate("manager", "Manager", 0, QApplication::UnicodeUTF8));
        label_listPersonnel->setText(QApplication::translate("manager", "List of personnel :", 0, QApplication::UnicodeUTF8));
        label_firstName->setText(QApplication::translate("manager", "First name :", 0, QApplication::UnicodeUTF8));
        label_lastName->setText(QApplication::translate("manager", "lastName :", 0, QApplication::UnicodeUTF8));
        label_birthDate->setText(QApplication::translate("manager", "Birth date (DD/mm/yyyy) :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("manager", "Personnel :", 0, QApplication::UnicodeUTF8));
        radioButton_controller->setText(QApplication::translate("manager", "Controller", 0, QApplication::UnicodeUTF8));
        radioButton_manager->setText(QApplication::translate("manager", "Manager", 0, QApplication::UnicodeUTF8));
        label_iban->setText(QApplication::translate("manager", "IBAN :", 0, QApplication::UnicodeUTF8));
        label_->setText(QApplication::translate("manager", "Address :", 0, QApplication::UnicodeUTF8));
        label_city->setText(QApplication::translate("manager", "City :", 0, QApplication::UnicodeUTF8));
        label_postalCode->setText(QApplication::translate("manager", "Postal code :", 0, QApplication::UnicodeUTF8));
        label_email->setText(QApplication::translate("manager", "Email :", 0, QApplication::UnicodeUTF8));
        label_phone->setText(QApplication::translate("manager", "Phone :", 0, QApplication::UnicodeUTF8));
        pushButton_add->setText(QApplication::translate("manager", "&Add", 0, QApplication::UnicodeUTF8));
        pushButton_modify->setText(QApplication::translate("manager", "&Modify", 0, QApplication::UnicodeUTF8));
        pushButton_delette->setText(QApplication::translate("manager", "&Delette", 0, QApplication::UnicodeUTF8));
        pushButton_resetPassword->setText(QApplication::translate("manager", "Reset password", 0, QApplication::UnicodeUTF8));
        tabWidget_manager->setTabText(tabWidget_manager->indexOf(tab_managementPersonnel), QApplication::translate("manager", "Management of personnel", 0, QApplication::UnicodeUTF8));
        tabWidget_manager->setTabText(tabWidget_manager->indexOf(tab_statistics), QApplication::translate("manager", "Statistics", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class manager: public Ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
