/********************************************************************************
** Form generated from reading UI file 'gestiondesstatistiques.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONDESSTATISTIQUES_H
#define UI_GESTIONDESSTATISTIQUES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_gestionDesStatistiques
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *gestionDesStatistiques)
    {
        if (gestionDesStatistiques->objectName().isEmpty())
            gestionDesStatistiques->setObjectName(QString::fromUtf8("gestionDesStatistiques"));
        gestionDesStatistiques->resize(400, 300);
        buttonBox = new QDialogButtonBox(gestionDesStatistiques);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(gestionDesStatistiques);
        QObject::connect(buttonBox, SIGNAL(accepted()), gestionDesStatistiques, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), gestionDesStatistiques, SLOT(reject()));

        QMetaObject::connectSlotsByName(gestionDesStatistiques);
    } // setupUi

    void retranslateUi(QDialog *gestionDesStatistiques)
    {
        gestionDesStatistiques->setWindowTitle(QApplication::translate("gestionDesStatistiques", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gestionDesStatistiques: public Ui_gestionDesStatistiques {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONDESSTATISTIQUES_H
