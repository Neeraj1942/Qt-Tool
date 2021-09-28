#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/img/img/1.jfif"),"Harry");
    ui->comboBox->addItem(QIcon(":/img/img/2.jfif"),"John");
   ui->comboBox->addItem(QIcon(":/img/img/3.svg"),"Varun");

   // for (int i=0;i<20;i++)
    {
        //ui->comboBox->addItem((QIcon(":/img/img/4.png"),QString::number(i) + "Name"));
    }
//ui->comboBox->insertItem(3, QIcon(":/img/img/3.svg"),"Newly Added");
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  QMessageBox::information(this,"Title",QString(ui->comboBox->currentText()));
  QMessageBox::information(this,"Title",QString::number(ui->comboBox->currentIndex()));
}

