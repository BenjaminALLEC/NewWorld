#include "controledesproducteurs.h"
#include "ui_controledesproducteurs.h"

controleDesProducteurs::controleDesProducteurs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controleDesProducteurs)
{
    ui->setupUi(this);
}

controleDesProducteurs::~controleDesProducteurs()
{
    delete ui;
}
