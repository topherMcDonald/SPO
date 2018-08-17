/********************************************************************************
** Form generated from reading UI file 'outofstock.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTOFSTOCK_H
#define UI_OUTOFSTOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_outOfStock
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *outOfStock)
    {
        if (outOfStock->objectName().isEmpty())
            outOfStock->setObjectName(QStringLiteral("outOfStock"));
        outOfStock->resize(313, 141);
        buttonBox = new QDialogButtonBox(outOfStock);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(70, 90, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(outOfStock);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 261, 31));

        retranslateUi(outOfStock);
        QObject::connect(buttonBox, SIGNAL(accepted()), outOfStock, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), outOfStock, SLOT(reject()));

        QMetaObject::connectSlotsByName(outOfStock);
    } // setupUi

    void retranslateUi(QDialog *outOfStock)
    {
        outOfStock->setWindowTitle(QApplication::translate("outOfStock", "Dialog", nullptr));
        label->setText(QApplication::translate("outOfStock", "Currently not enough inventory to process order.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class outOfStock: public Ui_outOfStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTOFSTOCK_H
