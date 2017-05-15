#ifndef CONTROLEPOINTDEVENTE_H
#define CONTROLEPOINTDEVENTE_H

#include <QDialog>

namespace Ui {
class controlePointDeVente;
}

class controlePointDeVente : public QDialog
{
    Q_OBJECT

public:
    explicit controlePointDeVente(QWidget *parent = 0);
    ~controlePointDeVente();

private:
    Ui::controlePointDeVente *ui;
};

#endif // CONTROLEPOINTDEVENTE_H
