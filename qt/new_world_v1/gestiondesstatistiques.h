#ifndef GESTIONDESSTATISTIQUES_H
#define GESTIONDESSTATISTIQUES_H

#include <QDialog>

namespace Ui {
class gestionDesStatistiques;
}

class gestionDesStatistiques : public QDialog
{
    Q_OBJECT

public:
    explicit gestionDesStatistiques(QWidget *parent = 0);
    ~gestionDesStatistiques();

private:
    Ui::gestionDesStatistiques *ui;
};

#endif // GESTIONDESSTATISTIQUES_H
