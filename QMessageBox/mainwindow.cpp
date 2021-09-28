#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox.h"
#include "qdebug.h"

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
    QMessageBox::about(this,"My Title","This is the text");
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this,"My Title");
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply =QMessageBox::critical(this,"My Title","This is the text",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        qDebug()<<"No is Selected";
    }
}

