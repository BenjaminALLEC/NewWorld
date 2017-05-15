#include "gestionaires.h"
#include "ui_gestionaires.h"

gestionaires::gestionaires(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionaires)
{
    ui->setupUi(this);
}

gestionaires::~gestionaires()
{
    delete ui;
}
