#ifndef ADD_CONSOMMATION_H
#define ADD_CONSOMMATION_H

#include <QDialog>

namespace Ui {
class add_consommation;
}

class add_consommation : public QDialog
{
    Q_OBJECT

public:
    explicit add_consommation(QWidget *parent = nullptr);
    ~add_consommation();

private:
    Ui::add_consommation *ui;
};

#endif // ADD_CONSOMMATION_H
