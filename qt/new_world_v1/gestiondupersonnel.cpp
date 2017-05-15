#include "gestiondupersonnel.h"
#include "ui_gestiondupersonnel.h"

gestionDuPersonnel::gestionDuPersonnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionDuPersonnel)
{
    ui->setupUi(this);
}

gestionDuPersonnel::~gestionDuPersonnel()
{
    delete ui;
}
