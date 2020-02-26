#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dia = new Dialog(this);
    dia->show();

    connect(dia,SIGNAL(snd(QString)),this,SLOT(slotti(QString)));


}

MainWindow::~MainWindow()
{
    delete ui;
    delete dia;
}

void MainWindow::slotti(QString st)
{
    ui->mainteksti->setText(st);
}
