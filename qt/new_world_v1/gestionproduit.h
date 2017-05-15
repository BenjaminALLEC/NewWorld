#ifndef GESTIONPRODUIT_H
#define GESTIONPRODUIT_H

#include <QDialog>

namespace Ui {
class gestionProduit;
}

class gestionProduit : public QDialog
{
    Q_OBJECT

public:
    explicit gestionProduit(QWidget *parent = 0);
    ~gestionProduit();

private:
    Ui::gestionProduit *ui;
};

#endif // GESTIONPRODUIT_H
