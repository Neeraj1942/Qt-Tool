#include "secdialog.h"
#include "ui_secdialog.h"
#include"QMessageBox.h"

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_clicked()
{
    QMessageBox::aboutQt(this,"More About Qt");

}

