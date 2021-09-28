#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "SecDialog.h"





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   SecDialog SecondDialog;
   SecondDialog.setModal(true);
   SecondDialog.exec();

}

