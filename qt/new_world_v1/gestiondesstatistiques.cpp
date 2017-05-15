#include "gestiondesstatistiques.h"
#include "ui_gestiondesstatistiques.h"

gestionDesStatistiques::gestionDesStatistiques(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionDesStatistiques)
{
    ui->setupUi(this);
}

gestionDesStatistiques::~gestionDesStatistiques()
{
    delete ui;
}
