#ifndef DIALOG_CONNECTION_H
#define DIALOG_CONNECTION_H

#include <QDialog>

namespace Ui {
class Dialog_connection;
}

class Dialog_connection : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_connection(QWidget *parent = 0);
    ~Dialog_connection();

    QString getType();
    QString typeUtilisateur;

    void activeDesactiveConnect();
private slots:

    void on_pushButton_exit_clicked();


    void on_pushButton_ok_clicked();

    void on_lineEdit_pseudo_textChanged(const QString &arg1);

    void on_lineEdit_mdp_textChanged(const QString &arg1);

private:
    Ui::Dialog_connection *ui;
};

#endif // DIALOG_CONNECTION_H
