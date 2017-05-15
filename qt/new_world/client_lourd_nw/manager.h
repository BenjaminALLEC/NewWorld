#ifndef MANAGER_H
#define MANAGER_H

#include <QMainWindow>

namespace Ui {
class manager;
}

class Manager : public QMainWindow
{
    Q_OBJECT

public:
    explicit Manager(QWidget *parent = 0);
    ~Manager();

    QString idPersonal, firstName, address, lastName, city, postalCode, email, cellphone, phone, login, password, typePersonnel, iban, login;
    Qdate birthDate, hireDate;
    bool Remove;

private slots:
    void on_pushButton_add_clicked();

    void on_radioButton_manager_clicked();

    void on_radioButton_controller_clicked();

private:
    Ui::manager *ui;
};

#endif // MANAGER_H
