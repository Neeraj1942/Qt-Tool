#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item1 =new QListWidgetItem(QIcon(""),"Mark");
    ui->listWidget->addItem(item1);
    QListWidgetItem *item2 =new QListWidgetItem(QIcon(""),"Steve");
    ui->listWidget->addItem(item2);
    QListWidgetItem *item3 =new QListWidgetItem(QIcon(""),"Maiden");
    ui->listWidget->addItem(item3);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Title",ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setForeground(Qt::yellow);
    ui->listWidget->currentItem()->setBackground(Qt::green);

}

