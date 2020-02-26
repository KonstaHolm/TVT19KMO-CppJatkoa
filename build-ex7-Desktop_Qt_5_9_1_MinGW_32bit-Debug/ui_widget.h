/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *naytto;
    QPushButton *startButton;
    QPushButton *stopResetButton;
    QDial *ajastin;
    QPushButton *openButton;
    QLabel *mikronOvi;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1164, 615);
        naytto = new QLCDNumber(Widget);
        naytto->setObjectName(QStringLiteral("naytto"));
        naytto->setGeometry(QRect(770, 10, 341, 171));
        startButton = new QPushButton(Widget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(770, 180, 171, 71));
        stopResetButton = new QPushButton(Widget);
        stopResetButton->setObjectName(QStringLiteral("stopResetButton"));
        stopResetButton->setGeometry(QRect(940, 180, 171, 71));
        ajastin = new QDial(Widget);
        ajastin->setObjectName(QStringLiteral("ajastin"));
        ajastin->setGeometry(QRect(840, 290, 211, 181));
        openButton = new QPushButton(Widget);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setGeometry(QRect(780, 480, 331, 101));
        mikronOvi = new QLabel(Widget);
        mikronOvi->setObjectName(QStringLiteral("mikronOvi"));
        mikronOvi->setGeometry(QRect(10, 50, 741, 491));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        startButton->setText(QApplication::translate("Widget", "START", Q_NULLPTR));
        stopResetButton->setText(QApplication::translate("Widget", "STOP / RESET", Q_NULLPTR));
        openButton->setText(QApplication::translate("Widget", "OPEN", Q_NULLPTR));
        mikronOvi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
