/********************************************************************************
** Form generated from reading UI file 'ordersubmitteddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSUBMITTEDDIALOG_H
#define UI_ORDERSUBMITTEDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_OrderSubmittedDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *OrderSubmittedDialog)
    {
        if (OrderSubmittedDialog->objectName().isEmpty())
            OrderSubmittedDialog->setObjectName(QStringLiteral("OrderSubmittedDialog"));
        OrderSubmittedDialog->resize(364, 122);
        buttonBox = new QDialogButtonBox(OrderSubmittedDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(180, 70, 181, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(OrderSubmittedDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 281, 41));

        retranslateUi(OrderSubmittedDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OrderSubmittedDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrderSubmittedDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrderSubmittedDialog);
    } // setupUi

    void retranslateUi(QDialog *OrderSubmittedDialog)
    {
        OrderSubmittedDialog->setWindowTitle(QApplication::translate("OrderSubmittedDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("OrderSubmittedDialog", "Small Parts Order has been submitted for processing.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderSubmittedDialog: public Ui_OrderSubmittedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSUBMITTEDDIALOG_H
