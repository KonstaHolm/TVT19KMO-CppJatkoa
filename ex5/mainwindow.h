#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <dialog.h>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void slotti(QString);

private:
    Ui::MainWindow *ui;
    Dialog *dia = new Dialog(this);
};

#endif // MAINWINDOW_H
