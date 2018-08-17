/********************************************************************************
** Form generated from reading UI file 'overcostlimitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERCOSTLIMITDIALOG_H
#define UI_OVERCOSTLIMITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_overCostLimitDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *overCostLimitDialog)
    {
        if (overCostLimitDialog->objectName().isEmpty())
            overCostLimitDialog->setObjectName(QStringLiteral("overCostLimitDialog"));
        overCostLimitDialog->resize(410, 127);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(overCostLimitDialog->sizePolicy().hasHeightForWidth());
        overCostLimitDialog->setSizePolicy(sizePolicy);
        buttonBox = new QDialogButtonBox(overCostLimitDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(160, 80, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(overCostLimitDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 421, 71));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        retranslateUi(overCostLimitDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), overCostLimitDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), overCostLimitDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(overCostLimitDialog);
    } // setupUi

    void retranslateUi(QDialog *overCostLimitDialog)
    {
        overCostLimitDialog->setWindowTitle(QApplication::translate("overCostLimitDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("overCostLimitDialog", "You have reached the $100 limit for Small Parts Order. Submit order or remove line item in to add another.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class overCostLimitDialog: public Ui_overCostLimitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERCOSTLIMITDIALOG_H
