#include "adminwin.h"
#include "ui_adminwin.h"
// for the admin
adminwin::adminwin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminwin)
{
    ui->setupUi(this);
}

adminwin::~adminwin()
{
    delete ui;
}
