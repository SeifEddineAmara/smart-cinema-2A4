#ifndef FILM_CONSOMMATION_PAGE_H
#define FILM_CONSOMMATION_PAGE_H

#include <QDialog>

namespace Ui {
class film_consommation_page;
}

class film_consommation_page : public QDialog
{
    Q_OBJECT

public:
    explicit film_consommation_page(QWidget *parent = nullptr);
    ~film_consommation_page();

private:
    Ui::film_consommation_page *ui;
};

#endif // FILM_CONSOMMATION_PAGE_H
