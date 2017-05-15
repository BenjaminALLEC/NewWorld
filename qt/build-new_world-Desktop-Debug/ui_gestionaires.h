/********************************************************************************
** Form generated from reading UI file 'gestionaires.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONAIRES_H
#define UI_GESTIONAIRES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_gestionaires
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_gestProduit;
    QPushButton *pushButton_gestPersonnel;
    QPushButton *pushButton_gestStatistique;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *gestionaires)
    {
        if (gestionaires->objectName().isEmpty())
            gestionaires->setObjectName(QString::fromUtf8("gestionaires"));
        gestionaires->resize(381, 275);
        verticalLayout = new QVBoxLayout(gestionaires);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_gestProduit = new QPushButton(gestionaires);
        pushButton_gestProduit->setObjectName(QString::fromUtf8("pushButton_gestProduit"));

        verticalLayout->addWidget(pushButton_gestProduit);

        pushButton_gestPersonnel = new QPushButton(gestionaires);
        pushButton_gestPersonnel->setObjectName(QString::fromUtf8("pushButton_gestPersonnel"));

        verticalLayout->addWidget(pushButton_gestPersonnel);

        pushButton_gestStatistique = new QPushButton(gestionaires);
        pushButton_gestStatistique->setObjectName(QString::fromUtf8("pushButton_gestStatistique"));

        verticalLayout->addWidget(pushButton_gestStatistique);

        buttonBox = new QDialogButtonBox(gestionaires);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(gestionaires);
        QObject::connect(buttonBox, SIGNAL(accepted()), gestionaires, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), gestionaires, SLOT(reject()));

        QMetaObject::connectSlotsByName(gestionaires);
    } // setupUi

    void retranslateUi(QDialog *gestionaires)
    {
        gestionaires->setWindowTitle(QApplication::translate("gestionaires", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_gestProduit->setText(QApplication::translate("gestionaires", "Gestion des Produits", 0, QApplication::UnicodeUTF8));
        pushButton_gestPersonnel->setText(QApplication::translate("gestionaires", "Gestion du personnel", 0, QApplication::UnicodeUTF8));
        pushButton_gestStatistique->setText(QApplication::translate("gestionaires", "Gestion des statistiques", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gestionaires: public Ui_gestionaires {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONAIRES_H
