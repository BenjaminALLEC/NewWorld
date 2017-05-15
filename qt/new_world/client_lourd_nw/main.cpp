#include "controller.h"
#include "dialog_connection.h"
#include "manager.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <QDialog>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //declaration de la base
    QSqlDatabase maBase= QSqlDatabase::addDatabase("QMYSQL");
    Dialog_connection monDialog;
    //valorisation des caractéristiques de la bases
    maBase.setDatabaseName("dbNewWorld");
    maBase.setHostName("localhost");
    maBase.setUserName("adminDbNewWorld");
    maBase.setPassword("passf005");
    maBase.open();
    if (maBase.open() && monDialog.exec()==QDialog::Accepted)
    {
        qDebug()<<"la base est ouverte";
        if(monDialog.getType()=="controller")
        {
            qDebug()<<"controller";
            controller c;
            c.show();
            return a.exec();
        }
        else//pas un controller
        {
            if(monDialog.getType()=="manager")
            {
                Manager g;
                g.show();
                return a.exec();
            }
            else //type inconnu
            {
                QMessageBox msgBox;
                msgBox.setText("This application is not intended for consumers.");
                msgBox.exec();

                Dialog_connection dia;
                dia.show();
                return a.exec();
            }
        }


    }

    else
    {
        return -1;
    }
}
