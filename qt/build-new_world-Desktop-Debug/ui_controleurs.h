/********************************************************************************
** Form generated from reading UI file 'controleurs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLEURS_H
#define UI_CONTROLEURS_H

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

class Ui_controleurs
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_ctrlProducteur;
    QPushButton *pushButton_ctrlPointVente;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *controleurs)
    {
        if (controleurs->objectName().isEmpty())
            controleurs->setObjectName(QString::fromUtf8("controleurs"));
        controleurs->resize(264, 165);
        verticalLayout = new QVBoxLayout(controleurs);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_ctrlProducteur = new QPushButton(controleurs);
        pushButton_ctrlProducteur->setObjectName(QString::fromUtf8("pushButton_ctrlProducteur"));

        verticalLayout->addWidget(pushButton_ctrlProducteur);

        pushButton_ctrlPointVente = new QPushButton(controleurs);
        pushButton_ctrlPointVente->setObjectName(QString::fromUtf8("pushButton_ctrlPointVente"));

        verticalLayout->addWidget(pushButton_ctrlPointVente);

        buttonBox = new QDialogButtonBox(controleurs);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(controleurs);
        QObject::connect(buttonBox, SIGNAL(accepted()), controleurs, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), controleurs, SLOT(reject()));

        QMetaObject::connectSlotsByName(controleurs);
    } // setupUi

    void retranslateUi(QDialog *controleurs)
    {
        controleurs->setWindowTitle(QApplication::translate("controleurs", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_ctrlProducteur->setText(QApplication::translate("controleurs", "Contr\303\264le des producteurs", 0, QApplication::UnicodeUTF8));
        pushButton_ctrlPointVente->setText(QApplication::translate("controleurs", "Contr\303\264le des points de ventes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class controleurs: public Ui_controleurs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLEURS_H
