#include "widget.h"
#include "ui_widget.h"
#include <qtimer.h>
#include <QDebug>
#include <QString>
#include "omalabel.h"
#include <QMouseEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Ajan toiminta
    connect(this,SIGNAL(vaihdaAika(int)),this,SLOT(nayttoAika(int)));
    connect(timer,SIGNAL(timeout()), this, SLOT (ajastinLaukesi()));
    timer->setInterval(1000);

    /*
    //Oven toiminta
    QPixmap *ovi = new QPixmap("C:\\Koulu\\CppJatko\\ex7\\mikroMateriaali\\mikoMateriaali\\mikrokiinni.jpg");
    ui->mikronOvi->setPixmap(*ovi);
    ui->mikronOvi->setScaledContents(true);
    */

    labelMikronovi = new omaLabel("", this);
         // näytetään kuva
         const QPixmap ovi(":/mikroMateriaali/mikoMateriaali/mikrokiinni.JPG");

         labelMikronovi->setPixmap(ovi);
         labelMikronovi->resize(700,700);
         labelMikronovi->move(50,-10);
         const QPixmap skaalattu_kuva = ovi.scaled(labelMikronovi->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation );
         labelMikronovi->setPixmap(skaalattu_kuva);

         //klikattu kuvaa
         QObject::connect(labelMikronovi, SIGNAL(omaClicked()), this, SLOT(oveaKlikattu()));

    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:\\Koulu\\CppJatko\\ex7\\mikroMateriaali\\mikoMateriaali\\mikro.mp3"));
    player->setVolume(40);


}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ajastin_valueChanged(int value)
{
    int aika = value;
    qDebug() << "arvo on " << ui->naytto->value();
    emit vaihdaAika(aika);
}

void Widget::nayttoAika(int t)
{
    ui->naytto->display(t);
}

void Widget::ajastinLaukesi()
{
    ui->ajastin->setValue(ui->ajastin->value()-1);
    if (ui->ajastin->value() == 0){
        player->play();
        timer->stop();
    }
}

void Widget::on_startButton_clicked()
{
    timer->start();

}

void Widget::on_stopResetButton_clicked()
{
    if(!timer->isActive()){
        ui->ajastin->setValue(0);
    } else {
        timer->stop();
    }
}


void Widget::on_openButton_clicked()
{
    const QPixmap ovi_kuva("C:\\Koulu\\CppJatko\\ex7\\mikroMateriaali\\mikoMateriaali\\mikroauki.jpg");
    const QPixmap skaalattu_kuva = ovi_kuva.scaled(labelMikronovi->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation );
    labelMikronovi->setPixmap(skaalattu_kuva);
}

void Widget::avaaMikro()
{
    if (auki == false) {
        auki = true;
        timer->stop();
        labelMikronovi->setPixmap(muodostaKuva());
    }
}

void Widget::oveaKlikattu(){

    qDebug()<<"klikattu";

    auki = !auki;
    labelMikronovi->setPixmap(muodostaKuva());

    if (auki && ajastin->isActive())
    {
        timer->stop();
        pausetettu = true;
    }
    else if (!auki && pausetettu)
    {
        timer->start();
        pausetettu = false;
    }

        /*
        const QPixmap ovi_kuva(":/mikroMateriaali/mikoMateriaali/mikroauki.JPG");
        const QPixmap skaalattu_kuva = ovi_kuva.scaled(labelMikronovi->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation );
        labelMikronovi->setPixmap(skaalattu_kuva);
        */

}

QPixmap Widget::muodostaKuva() {
    // Muodostaa mikron oven kuvan.

    QString kuva = ":/mikrokiinni.JPG";

    if (auki)
    {
        kuva = ":/mikroauki.JPG";
    }

    const QPixmap pm(kuva);
    return pm.scaled(labelMikronovi, Qt::KeepAspectRatio, Qt::SmoothTransformation);
}

