#ifndef NEWCALENDERDIALOG_H
#define NEWCALENDERDIALOG_H
#include "app.h"
#include <QDialog>

extern App *mApp;

namespace Ui {
class newCalenderDialog;
}

class newCalenderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit newCalenderDialog(QWidget *parent = nullptr);
    ~newCalenderDialog();

private slots:
    void closeButton_clicked();

    void addButton_clicked();

private:
    Ui::newCalenderDialog *ui;
};

#endif // NEWCALENDERDIALOG_H
