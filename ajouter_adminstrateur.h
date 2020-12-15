#ifndef AJOUTER_ADMINSTRATEUR_H
#define AJOUTER_ADMINSTRATEUR_H

#include <QDialog>

namespace Ui {
class ajouter_adminstrateur;
}

class ajouter_adminstrateur : public QDialog
{
    Q_OBJECT

public:
    explicit ajouter_adminstrateur(QWidget *parent = nullptr);
    ~ajouter_adminstrateur();

private:
    Ui::ajouter_adminstrateur *ui;
};

#endif // AJOUTER_ADMINSTRATEUR_H
