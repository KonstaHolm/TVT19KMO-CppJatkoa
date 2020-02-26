#ifndef OMALABEL_H
#define OMALABEL_H
#include <QLabel>
#include <QWidget>
#include <QObject>

class omaLabel : public QLabel
{
    Q_OBJECT
public:
     omaLabel( const QString & text, QWidget * parent );
     ~omaLabel(){}

// signaali joka lähetetään kun hiirtä on klikattu labelin alueen
signals:
    void omaClicked();
public slots:

// QWidgetiltä peritty funktio joka täytyy nyt ylikirjoittaa
protected:
     void mousePressEvent ( QMouseEvent * event ) ;
};

#endif // OMALABEL_H
