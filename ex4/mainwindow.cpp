#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{

    QMessageBox msgBox;
    msgBox.setText("Ketju");
    msgBox.exec();
}

void MainWindow::on_checkBox_toggled(bool checked)
{
    QMessageBox msgBox;
    msgBox.setText("Sateenvarjo");
    msgBox.exec();
}
