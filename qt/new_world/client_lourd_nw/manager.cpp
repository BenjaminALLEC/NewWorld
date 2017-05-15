#include "manager.h"
#include "ui_manager.h"
#include <QDebug>

Manager::Manager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::manager)
{
    ui->setupUi(this);
}

Manager::~Manager()
{
    delete ui;
}

void Manager::on_pushButton_add_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonAjouterEmploye_clicked()";
    firstName = ui->lineEdit_firstName->text();
    lastName =  ui->lineEdit_LastName->text();
    birthDate = ui->lineEdit_birthDate->text();

    address = ui->lineEdit_address->text();
    city = ui->lineEdit_city->text();
    postalCode = ui->lineEdit_postalCode->text();

    phone = ui->lineEdit_phone->text();
    email = ui->lineEdit_email->text();
    iban = ui->lineEdit_iban->text();

}

void Manager::on_radioButton_manager_clicked()
{
    if(ui->radioButton_manager->isChecked())
        typePersonnel="manager";
}

void Manager::on_radioButton_controller_clicked()
{
    if(ui->radioButton_controller->isChecked())
        typePersonnel="controller";
}
