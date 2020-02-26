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

void MainWindow::on_pushButton_clicked()
{
    // poistutaan ohjelmasta
    qApp->exit();
}

void MainWindow::on_pushButton_2_clicked()
{
    QLabel *teksti = ui->label;

    bool nakyvyys = false;
    QString nappiteksti = "Teksti takas";
    if (teksti->isHidden())
    {
        nakyvyys = true;
        nappiteksti = "Teksti pois";
    }

    ui->pushButton_2->setText(nappiteksti);
    teksti->setVisible(nakyvyys);

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText(ui->lineEdit->text());
}
