#include "controleurs.h"
#include "ui_controleurs.h"

controleurs::controleurs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controleurs)
{
    ui->setupUi(this);
}

controleurs::~controleurs()
{
    delete ui;
}
