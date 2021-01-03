#ifndef PROJECTION_PAGE_H
#define PROJECTION_PAGE_H

#include <QDialog>

namespace Ui {
class projection_page;
}

class projection_page : public QDialog
{
    Q_OBJECT

public:
    explicit projection_page(QWidget *parent = nullptr);
    ~projection_page();

private slots:
    void on_pushButton_search_film_clicked();

    void on_pushButton_search_cine_clicked();

    void on_pushButton_search_salle_clicked();



    void on_pushButton_conf_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_confirm_edit_clicked();

private:
    Ui::projection_page *ui;
};

#endif // PROJECTION_PAGE_H
