#ifndef WELCOME_WINDOW_H
#define WELCOME_WINDOW_H

#include <QDialog>

namespace Ui {
class welcome_window;
}

class welcome_window : public QDialog
{
    Q_OBJECT

public:
    explicit welcome_window(QWidget *parent = nullptr);
    ~welcome_window();

private:
    Ui::welcome_window *ui;
};

#endif // WELCOME_WINDOW_H
