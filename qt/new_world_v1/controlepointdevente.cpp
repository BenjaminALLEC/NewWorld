#include "controlepointdevente.h"
#include "ui_controlepointdevente.h"

controlePointDeVente::controlePointDeVente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controlePointDeVente)
{
    ui->setupUi(this);
}

controlePointDeVente::~controlePointDeVente()
{
    delete ui;
}
