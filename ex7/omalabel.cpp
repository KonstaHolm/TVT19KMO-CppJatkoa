#include "omalabel.h"
#include <QDebug>
omaLabel::omaLabel(const QString &text, QWidget * parent ) :
 QLabel(parent)
{

}
void omaLabel::mousePressEvent ( QMouseEvent * event )
{
 // lähetetään clicked() signaali kun hiiren nappia on painettu
 emit omaClicked();
}


