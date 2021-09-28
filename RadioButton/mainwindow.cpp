#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qradiobutton.h"
#include "QMessageBox.h"


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

    if(ui->radioButton_A->isChecked())
    {
        QMessageBox::information(this,"Title","Selected A");
    }
    if(ui->radioButton_B->isChecked())
    {
        QMessageBox::information(this,"Title","Selected B");
    }

}


