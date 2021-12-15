#ifndef KEPPERWIN_H
#define KEPPERWIN_H

#include <QMainWindow>

namespace Ui {
class kepperwin;
}

class kepperwin : public QMainWindow
{
    Q_OBJECT

public:
    explicit kepperwin(QWidget *parent = nullptr);
    ~kepperwin();

private:
    Ui::kepperwin *ui;
};

#endif // KEPPERWIN_H
