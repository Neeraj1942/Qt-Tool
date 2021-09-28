#include "login2.h"
#include "ui_login2.h"

Login2::Login2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login2)
{
    ui->setupUi(this);
}

Login2::~Login2()
{
    delete ui;
}
