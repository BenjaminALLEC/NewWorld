/********************************************************************************
** Form generated from reading UI file 'gestionproduit.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONPRODUIT_H
#define UI_GESTIONPRODUIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestionProduit
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_rayon;
    QComboBox *comboBox_rayon;
    QLabel *label_TypeProduit;
    QComboBox *comboBox_typeProduit;
    QLabel *label_produit;
    QLineEdit *lineEdit_prodduit;
    QPushButton *pushButton_ajoutProduit;
    QLabel *label_produitAjout;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_typeProduit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_ajoutRayon;
    QLineEdit *lineEdit_ajoutRayon;
    QPushButton *pushButton_ajoutRayon;

    void setupUi(QDialog *gestionProduit)
    {
        if (gestionProduit->objectName().isEmpty())
            gestionProduit->setObjectName(QString::fromUtf8("gestionProduit"));
        gestionProduit->resize(637, 464);
        buttonBox = new QDialogButtonBox(gestionProduit);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(451, 408, 176, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(gestionProduit);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 329, 609, 64));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_rayon = new QLabel(widget);
        label_rayon->setObjectName(QString::fromUtf8("label_rayon"));

        horizontalLayout_2->addWidget(label_rayon);

        comboBox_rayon = new QComboBox(widget);
        comboBox_rayon->setObjectName(QString::fromUtf8("comboBox_rayon"));

        horizontalLayout_2->addWidget(comboBox_rayon);

        label_TypeProduit = new QLabel(widget);
        label_TypeProduit->setObjectName(QString::fromUtf8("label_TypeProduit"));

        horizontalLayout_2->addWidget(label_TypeProduit);

        comboBox_typeProduit = new QComboBox(widget);
        comboBox_typeProduit->setObjectName(QString::fromUtf8("comboBox_typeProduit"));

        horizontalLayout_2->addWidget(comboBox_typeProduit);

        label_produit = new QLabel(widget);
        label_produit->setObjectName(QString::fromUtf8("label_produit"));

        horizontalLayout_2->addWidget(label_produit);

        lineEdit_prodduit = new QLineEdit(widget);
        lineEdit_prodduit->setObjectName(QString::fromUtf8("lineEdit_prodduit"));

        horizontalLayout_2->addWidget(lineEdit_prodduit);

        pushButton_ajoutProduit = new QPushButton(widget);
        pushButton_ajoutProduit->setObjectName(QString::fromUtf8("pushButton_ajoutProduit"));

        horizontalLayout_2->addWidget(pushButton_ajoutProduit);


        verticalLayout->addLayout(horizontalLayout_2);

        label_produitAjout = new QLabel(widget);
        label_produitAjout->setObjectName(QString::fromUtf8("label_produitAjout"));

        verticalLayout->addWidget(label_produitAjout);

        widget1 = new QWidget(gestionProduit);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 100, 321, 35));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_typeProduit = new QLabel(widget1);
        label_typeProduit->setObjectName(QString::fromUtf8("label_typeProduit"));

        horizontalLayout_3->addWidget(label_typeProduit);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        widget2 = new QWidget(gestionProduit);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(21, 51, 374, 35));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_ajoutRayon = new QLabel(widget2);
        label_ajoutRayon->setObjectName(QString::fromUtf8("label_ajoutRayon"));

        horizontalLayout->addWidget(label_ajoutRayon);

        lineEdit_ajoutRayon = new QLineEdit(widget2);
        lineEdit_ajoutRayon->setObjectName(QString::fromUtf8("lineEdit_ajoutRayon"));

        horizontalLayout->addWidget(lineEdit_ajoutRayon);

        pushButton_ajoutRayon = new QPushButton(widget2);
        pushButton_ajoutRayon->setObjectName(QString::fromUtf8("pushButton_ajoutRayon"));

        horizontalLayout->addWidget(pushButton_ajoutRayon);

        buttonBox->raise();
        lineEdit_prodduit->raise();
        label_rayon->raise();
        label_TypeProduit->raise();
        label_produit->raise();
        lineEdit_prodduit->raise();
        label_TypeProduit->raise();
        label_ajoutRayon->raise();
        lineEdit_ajoutRayon->raise();
        lineEdit_2->raise();
        pushButton_ajoutProduit->raise();
        label_produitAjout->raise();
        pushButton->raise();
        label_typeProduit->raise();

        retranslateUi(gestionProduit);
        QObject::connect(buttonBox, SIGNAL(accepted()), gestionProduit, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), gestionProduit, SLOT(reject()));

        QMetaObject::connectSlotsByName(gestionProduit);
    } // setupUi

    void retranslateUi(QDialog *gestionProduit)
    {
        gestionProduit->setWindowTitle(QApplication::translate("gestionProduit", "Dialog", 0, QApplication::UnicodeUTF8));
        label_rayon->setText(QApplication::translate("gestionProduit", "Rayon", 0, QApplication::UnicodeUTF8));
        label_TypeProduit->setText(QApplication::translate("gestionProduit", "Type produit", 0, QApplication::UnicodeUTF8));
        label_produit->setText(QApplication::translate("gestionProduit", "Produit", 0, QApplication::UnicodeUTF8));
        pushButton_ajoutProduit->setText(QApplication::translate("gestionProduit", "Ajout", 0, QApplication::UnicodeUTF8));
        label_produitAjout->setText(QString());
        label_typeProduit->setText(QApplication::translate("gestionProduit", "Type produit : ", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("gestionProduit", "PushButton", 0, QApplication::UnicodeUTF8));
        label_ajoutRayon->setText(QApplication::translate("gestionProduit", "Ajout d'un rayon : ", 0, QApplication::UnicodeUTF8));
        pushButton_ajoutRayon->setText(QApplication::translate("gestionProduit", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gestionProduit: public Ui_gestionProduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONPRODUIT_H
