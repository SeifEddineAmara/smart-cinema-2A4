#ifndef VERIFICATION_ADMINISTRATEUR_H
#define VERIFICATION_ADMINISTRATEUR_H
#include "administrateur_assistant_page.h"

#include <QDialog>

namespace Ui {
class verification_administrateur;
}

class verification_administrateur : public QDialog
{
    Q_OBJECT

public:
    explicit verification_administrateur(QWidget *parent = nullptr);
    ~verification_administrateur();

private slots:
    void on_pushButton_clicked();

private:
    Ui::verification_administrateur *ui;
};

#endif // VERIFICATION_ADMINISTRATEUR_H
