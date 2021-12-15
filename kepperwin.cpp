#include "kepperwin.h"
#include "ui_kepperwin.h"
//for the keeper
kepperwin::kepperwin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kepperwin)
{
    ui->setupUi(this);
}

kepperwin::~kepperwin()
{
    delete ui;
}
