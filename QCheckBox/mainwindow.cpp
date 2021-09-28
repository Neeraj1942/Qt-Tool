#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   if(ui->checkBox->isChecked())
    {
     QMessageBox::information(this,"Title","Yes he does");
    }
    else
    {
        QMessageBox::information(this,"Title","No he does not");
    }
}

// on state changed
void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
      QMessageBox::information(this,"Title","Yes he does");
    }

    else
    {
       QMessageBox::information(this,"Title","No he does not");
    }

}
