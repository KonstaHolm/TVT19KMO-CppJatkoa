/********************************************************************************
** Form generated from reading UI file 'mikronovi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIKRONOVI_H
#define UI_MIKRONOVI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mikronOvi
{
public:

    void setupUi(QWidget *mikronOvi)
    {
        if (mikronOvi->objectName().isEmpty())
            mikronOvi->setObjectName(QStringLiteral("mikronOvi"));
        mikronOvi->resize(400, 300);

        retranslateUi(mikronOvi);

        QMetaObject::connectSlotsByName(mikronOvi);
    } // setupUi

    void retranslateUi(QWidget *mikronOvi)
    {
        mikronOvi->setWindowTitle(QApplication::translate("mikronOvi", "mikronOvi", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mikronOvi: public Ui_mikronOvi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIKRONOVI_H
