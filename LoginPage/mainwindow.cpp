#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    QString username = ui->lineEdit_UserId->text();
    QString password = ui->lineEdit_Password->text();
     if( username == "Text" || password == "Text")
     {
         QMessageBox::information(this,"Login","UserId and Password are correct");
         T = new Login2(this);
         T->show();
     }
     else
     {
         QMessageBox::warning(this,"Login","UserId and password are not correct");

     }
}

