#ifndef CONTROLEURS_H
#define CONTROLEURS_H

#include <QDialog>

namespace Ui {
class controleurs;
}

class controleurs : public QDialog
{
    Q_OBJECT

public:
    explicit controleurs(QWidget *parent = 0);
    ~controleurs();

private:
    Ui::controleurs *ui;
};

#endif // CONTROLEURS_H
