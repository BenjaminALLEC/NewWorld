#ifndef CONTROLEDESPRODUCTEURS_H
#define CONTROLEDESPRODUCTEURS_H

#include <QDialog>

namespace Ui {
class controleDesProducteurs;
}

class controleDesProducteurs : public QDialog
{
    Q_OBJECT

public:
    explicit controleDesProducteurs(QWidget *parent = 0);
    ~controleDesProducteurs();

private:
    Ui::controleDesProducteurs *ui;
};

#endif // CONTROLEDESPRODUCTEURS_H
