#ifndef CLIENT_PAGE_H
#define CLIENT_PAGE_H

#include <QDialog>

namespace Ui {
class client_page;
}

class client_page : public QDialog
{
    Q_OBJECT

public:
    explicit client_page(QWidget *parent = nullptr);
    ~client_page();

private:
    Ui::client_page *ui;
};

#endif // CLIENT_PAGE_H
