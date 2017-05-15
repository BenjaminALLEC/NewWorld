/********************************************************************************
** Form generated from reading UI file 'controledesproducteurs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLEDESPRODUCTEURS_H
#define UI_CONTROLEDESPRODUCTEURS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_controleDesProducteurs
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *controleDesProducteurs)
    {
        if (controleDesProducteurs->objectName().isEmpty())
            controleDesProducteurs->setObjectName(QString::fromUtf8("controleDesProducteurs"));
        controleDesProducteurs->resize(399, 298);
        buttonBox = new QDialogButtonBox(controleDesProducteurs);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(controleDesProducteurs);
        QObject::connect(buttonBox, SIGNAL(accepted()), controleDesProducteurs, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), controleDesProducteurs, SLOT(reject()));

        QMetaObject::connectSlotsByName(controleDesProducteurs);
    } // setupUi

    void retranslateUi(QDialog *controleDesProducteurs)
    {
        controleDesProducteurs->setWindowTitle(QApplication::translate("controleDesProducteurs", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class controleDesProducteurs: public Ui_controleDesProducteurs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLEDESPRODUCTEURS_H
