#include "login3.h"
#include "ui_login3.h"

login3::login3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login3)
{
    ui->setupUi(this);
}

login3::~login3()
{
    delete ui;
}
