#include "appwindow.h"
#include "ui_appwindow.h"

appWindow::appWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::appWindow)
{
    ui->setupUi(this);
}

appWindow::~appWindow()
{
    delete ui;
}

void appWindow::on_pushButton_clicked()
{

}
