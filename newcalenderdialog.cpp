#include "newcalenderdialog.h"
#include "ui_newcalenderdialog.h"

#include <QMessageBox>

newCalenderDialog::newCalenderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newCalenderDialog)
{
    ui->setupUi(this);
}

newCalenderDialog::~newCalenderDialog()
{
    delete ui;
}

void newCalenderDialog::closeButton_clicked()
{
    close();
}

void newCalenderDialog::addButton_clicked()
{
    QString newCalenderName = ui->lineEdit->text();
    mApp->addCalenderUser(newCalenderName);
    QMessageBox::information(this,"Add calender","Calender added succesfully!");
}
