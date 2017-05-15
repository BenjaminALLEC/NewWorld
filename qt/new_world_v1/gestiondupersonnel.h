#ifndef GESTIONDUPERSONNEL_H
#define GESTIONDUPERSONNEL_H

#include <QDialog>

namespace Ui {
class gestionDuPersonnel;
}

class gestionDuPersonnel : public QDialog
{
    Q_OBJECT

public:
    explicit gestionDuPersonnel(QWidget *parent = 0);
    ~gestionDuPersonnel();

private:
    Ui::gestionDuPersonnel *ui;
};

#endif // GESTIONDUPERSONNEL_H
