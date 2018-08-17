/********************************************************************************
** Form generated from reading UI file 'missingdatadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSINGDATADIALOG_H
#define UI_MISSINGDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MissingDataDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *MissingDataDialog)
    {
        if (MissingDataDialog->objectName().isEmpty())
            MissingDataDialog->setObjectName(QStringLiteral("MissingDataDialog"));
        MissingDataDialog->setWindowModality(Qt::ApplicationModal);
        MissingDataDialog->resize(418, 111);
        buttonBox = new QDialogButtonBox(MissingDataDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 51, 381, 51));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(MissingDataDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 401, 51));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        retranslateUi(MissingDataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MissingDataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MissingDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MissingDataDialog);
    } // setupUi

    void retranslateUi(QDialog *MissingDataDialog)
    {
        MissingDataDialog->setWindowTitle(QApplication::translate("MissingDataDialog", "Missing Data", nullptr));
        label->setText(QApplication::translate("MissingDataDialog", "Missing data. Please check to make sure all required data has been entered.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MissingDataDialog: public Ui_MissingDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSINGDATADIALOG_H
