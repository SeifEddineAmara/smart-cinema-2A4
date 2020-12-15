#ifndef TICKET_PAGE_H
#define TICKET_PAGE_H

#include <QDialog>

namespace Ui {
class ticket_page;
}

class ticket_page : public QDialog
{
    Q_OBJECT

public:
    explicit ticket_page(QWidget *parent = nullptr);
    ~ticket_page();

private:
    Ui::ticket_page *ui;
};

#endif // TICKET_PAGE_H
