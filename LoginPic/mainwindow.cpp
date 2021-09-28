#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox.h"
#include "QPixmap.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/neera/Downloads/example.jpg");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));




    ui->statusbar->addPermanentWidget(ui->label_fixed,1);
    ui->statusbar->addPermanentWidget(ui->progressBar,3);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{


    QString username = ui->lineEdit_UserId->text();
    QString password = ui->lineEdit_Password->text();


     if( username == "Text" && password == "Text")
     {
       // QMessageBox::information(this,"Login","UserId and Password are correct");
        T = new login3(this);
       // T->show();
       // ui->statusbar->showMessage("UserId and Password are correct",5000");
        ui->label_fixed->setText("UserId and Password are correct");


     }
     else
     {
        // QMessageBox::warning(this,"Login","UserId and password are not correct");
          //ui->statusbar->showMessage("UserId and Password are not correct",10000);
          ui->label_fixed->setText("UserId and Password are not correct");

     }
}


