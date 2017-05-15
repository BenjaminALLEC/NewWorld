#ifndef GESTIONAIRES_H
#define GESTIONAIRES_H

#include <QDialog>

namespace Ui {
class gestionaires;
}

class gestionaires : public QDialog
{
    Q_OBJECT

public:
    explicit gestionaires(QWidget *parent = 0);
    ~gestionaires();

private:
    Ui::gestionaires *ui;
};

#endif // GESTIONAIRES_H
