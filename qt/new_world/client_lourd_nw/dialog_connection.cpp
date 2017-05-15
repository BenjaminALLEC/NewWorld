#include "dialog_connection.h"
#include "ui_dialog_connection.h"
#include <QDialog>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

Dialog_connection::Dialog_connection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_connection)
{
    ui->setupUi(this);
}

Dialog_connection::~Dialog_connection()
{
    delete ui;
}

QString Dialog_connection::getType()
{
    return typeUtilisateur;
}

void Dialog_connection::activeDesactiveConnect()
{
    bool ok=!ui->lineEdit_pseudo->text().isEmpty() && !ui->lineEdit_mdp->text().isEmpty() ;
    ui->pushButton_ok->setEnabled(ok);
}


void Dialog_connection::on_pushButton_exit_clicked()
{
    close();
}

void Dialog_connection::on_pushButton_ok_clicked()
{
    QString pseudo = ui->lineEdit_pseudo->text();
    QString mdp = ui->lineEdit_mdp->text();
    QString texteRequete = "SELECT typesPersonnel FROM Personal WHERE login ='" + pseudo + "' AND password = '" + mdp + "'";
    QSqlQuery query;
    query.exec(texteRequete);
    qDebug()<<texteRequete;
    //placement de lecture du reésultat sur un enregistrement valide
    query.first();
    typeUtilisateur = query.value(0).toString();
    qDebug()<<typeUtilisateur;

    accept();
}

void Dialog_connection::on_lineEdit_pseudo_textChanged(const QString &arg1)
{
    activeDesactiveConnect();
}


void Dialog_connection::on_lineEdit_mdp_textChanged(const QString &arg1)
{
    activeDesactiveConnect();
}
