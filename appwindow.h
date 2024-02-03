#ifndef APPWINDOW_H
#define APPWINDOW_H

#include <QMainWindow>

#include "app.h"

namespace Ui {
class appWindow;
}

class appWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit appWindow(QWidget *parent = nullptr);
    ~appWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::appWindow *ui;
    App *mApp = new App();
};

#endif // APPWINDOW_H
