#include "gestionproduit.h"
#include "ui_gestionproduit.h"

gestionProduit::gestionProduit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionProduit)
{
    ui->setupUi(this);
}

gestionProduit::~gestionProduit()
{
    delete ui;
}
