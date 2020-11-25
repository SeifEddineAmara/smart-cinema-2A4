#ifndef SALLE_PAGE_H
#define SALLE_PAGE_H


#include <QDialog>

namespace Ui {
class salle_page;
}

class salle_page : public QDialog
{
    Q_OBJECT

public:
    explicit salle_page(QWidget *parent = nullptr);
    ~salle_page();

private slots:



    void on_pushButton_clicked();

private:
    Ui::salle_page *ui;


};

#endif // SALLE_PAGE_H
