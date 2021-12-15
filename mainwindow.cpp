#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "adminwin.h"
#include "kepperwin.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Login");

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_logButton_clicked()
{
     QString username =ui->lineEdit_1->text();
      QString pass =ui->lineEdit_2->text();
    if((username=="admin")&&(pass=="admin")){
        qDebug()<<"logged in ";
    }else if ((username=="keeper")&&(pass=="keeper")) {
        qDebug()<<"logged in ";
    }
}

void MainWindow::on_cancelButton_2_clicked()
{
   close();
}
