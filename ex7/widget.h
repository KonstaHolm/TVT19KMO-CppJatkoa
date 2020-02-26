#ifndef WIDGET_H
#define WIDGET_H

#include <QLCDNumber>
#include <QWidget>
#include <QTimer>
#include <QPixmap>
#include <QLabel>
#include <QMultimedia>
#include <QMediaPlayer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    QTimer *timer = new QTimer(this);
    QMediaPlayer *player;
    ~Widget();


private slots:
    void on_ajastin_valueChanged(int value);
    void nayttoAika(int t);
    void ajastinLaukesi();

    void on_startButton_clicked();
    void on_stopResetButton_clicked();
    void on_openButton_clicked();

    void oveaKlikattu();

    void ajastinMuutettu(int aika);
    void paivitaAjastin();

    void kaynnistaMikro();
    void avaaMikro();
    void pysaytaMikro();

signals:
    void vaihdaAika(int);

private:
    QLabel* labelMikronovi;
    Ui::Widget *ui;
    bool auki = false;
    bool pausetettu = false;
    QPixmap muodostaKuva();

};

#endif // WIDGET_H
