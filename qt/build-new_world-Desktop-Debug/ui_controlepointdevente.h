/********************************************************************************
** Form generated from reading UI file 'controlepointdevente.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLEPOINTDEVENTE_H
#define UI_CONTROLEPOINTDEVENTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_controlePointDeVente
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *controlePointDeVente)
    {
        if (controlePointDeVente->objectName().isEmpty())
            controlePointDeVente->setObjectName(QString::fromUtf8("controlePointDeVente"));
        controlePointDeVente->resize(387, 288);
        buttonBox = new QDialogButtonBox(controlePointDeVente);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(controlePointDeVente);
        QObject::connect(buttonBox, SIGNAL(accepted()), controlePointDeVente, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), controlePointDeVente, SLOT(reject()));

        QMetaObject::connectSlotsByName(controlePointDeVente);
    } // setupUi

    void retranslateUi(QDialog *controlePointDeVente)
    {
        controlePointDeVente->setWindowTitle(QApplication::translate("controlePointDeVente", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class controlePointDeVente: public Ui_controlePointDeVente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLEPOINTDEVENTE_H
