#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>
#include "omalabel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // iLuodaan uusi objekti joka pohjautuu juuri koodattuun omaan luokkaan
     labelMikronovi = new omaLabel("", this);
     // näytetään kuva
     const QPixmap ovi_kiinni_kuva("c:/temp/mikrokiinni.JPG");

     labelMikronovi->setPixmap(ovi_kiinni_kuva);
     //Säädä vielä kuva järkevän kokoiseksi ja oikealla paikalle käyttämällä seuraavia funktioita
     //labelMikronovi->resize(leveys, korkeus); //säätää Labelin haluamasi kokoiseksi, kokeile mitkä arvo sopii parhaiten
     //labelMikronovi->move(x,y); //Labelin haluamaasi paikkaan, kokeile mitkä arvot sopii parhaiten
     //funktiolla voit skaalata kuvan koko labelin kokoiseksi käytä sitten skaalattua kuvaa ja näytä se
     labelMikronovi->resize(200,200);
     labelMikronovi->move(10,10);
     const QPixmap skaalattu_kuva = ovi_kiinni_kuva.scaled(labelMikronovi->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation );
     labelMikronovi->setPixmap(skaalattu_kuva);

     //klikattu kuvaa
     QObject::connect(labelMikronovi, SIGNAL(omaClicked()), this, SLOT(oveaKlikattu()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::oveaKlikattu(){
    qDebug()<<"klikattu";
    //labelMikronovi->resize(200,200);
    //labelMikronovi->move(10,10);
    const QPixmap ovi_auki_kuva("c:/temp/mikroauki.JPG");
    const QPixmap skaalattu_kuva = ovi_auki_kuva.scaled(labelMikronovi->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation );
    labelMikronovi->setPixmap(skaalattu_kuva);
 }
