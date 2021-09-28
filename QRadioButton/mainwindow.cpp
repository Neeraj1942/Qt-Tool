#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox.h"
#include "qRadioButton.h"

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
    if(ui->radioButton_Ravi->isCheckable())
    {
        QMessageBox::information(this,"Title","Selected Ravi");
    }
    if(ui->radioButton_Akhil->isCheckable())
    {
        QMessageBox::information(this,"Title","Selected Akhil");
    }
}

