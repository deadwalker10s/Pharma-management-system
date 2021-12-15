#ifndef ADMINWIN_H
#define ADMINWIN_H

#include <QMainWindow>

namespace Ui {
class adminwin;
}

class adminwin : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminwin(QWidget *parent = nullptr);
    ~adminwin();

private:
    Ui::adminwin *ui;
};

#endif // ADMINWIN_H
