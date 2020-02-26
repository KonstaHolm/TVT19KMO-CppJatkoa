#include "widget.h"
#include "ui_widget.h"
#include "dialog.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    dia = new Dialog(this);
    dia->show();


}

Widget::~Widget()
{
    delete ui;
}
