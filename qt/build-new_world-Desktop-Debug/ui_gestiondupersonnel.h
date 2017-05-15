/********************************************************************************
** Form generated from reading UI file 'gestiondupersonnel.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONDUPERSONNEL_H
#define UI_GESTIONDUPERSONNEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_gestionDuPersonnel
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *gestionDuPersonnel)
    {
        if (gestionDuPersonnel->objectName().isEmpty())
            gestionDuPersonnel->setObjectName(QString::fromUtf8("gestionDuPersonnel"));
        gestionDuPersonnel->resize(400, 300);
        buttonBox = new QDialogButtonBox(gestionDuPersonnel);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(gestionDuPersonnel);
        QObject::connect(buttonBox, SIGNAL(accepted()), gestionDuPersonnel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), gestionDuPersonnel, SLOT(reject()));

        QMetaObject::connectSlotsByName(gestionDuPersonnel);
    } // setupUi

    void retranslateUi(QDialog *gestionDuPersonnel)
    {
        gestionDuPersonnel->setWindowTitle(QApplication::translate("gestionDuPersonnel", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gestionDuPersonnel: public Ui_gestionDuPersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONDUPERSONNEL_H
