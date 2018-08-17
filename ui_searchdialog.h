/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *loSearchDialog;
    QGroupBox *gbSearchResults;
    QVBoxLayout *verticalLayout;
    QLabel *lblEnterSearchCriteria;
    QLineEdit *leEnterSearchCriteria;
    QTableWidget *tblDialogSearchResults;
    QGroupBox *gbSearchCancel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSearchDialog;
    QPushButton *btnAddSelectedItem;
    QPushButton *btnCancelSearch;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QStringLiteral("SearchDialog"));
        SearchDialog->resize(675, 650);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SearchDialog->sizePolicy().hasHeightForWidth());
        SearchDialog->setSizePolicy(sizePolicy);
        SearchDialog->setMouseTracking(true);
        SearchDialog->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/qtAppIcons/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        SearchDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SearchDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        loSearchDialog = new QVBoxLayout();
        loSearchDialog->setObjectName(QStringLiteral("loSearchDialog"));
        gbSearchResults = new QGroupBox(SearchDialog);
        gbSearchResults->setObjectName(QStringLiteral("gbSearchResults"));
        gbSearchResults->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(gbSearchResults->sizePolicy().hasHeightForWidth());
        gbSearchResults->setSizePolicy(sizePolicy1);
        gbSearchResults->setFocusPolicy(Qt::StrongFocus);
        verticalLayout = new QVBoxLayout(gbSearchResults);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblEnterSearchCriteria = new QLabel(gbSearchResults);
        lblEnterSearchCriteria->setObjectName(QStringLiteral("lblEnterSearchCriteria"));

        verticalLayout->addWidget(lblEnterSearchCriteria);

        leEnterSearchCriteria = new QLineEdit(gbSearchResults);
        leEnterSearchCriteria->setObjectName(QStringLiteral("leEnterSearchCriteria"));

        verticalLayout->addWidget(leEnterSearchCriteria);

        tblDialogSearchResults = new QTableWidget(gbSearchResults);
        if (tblDialogSearchResults->columnCount() < 4)
            tblDialogSearchResults->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblDialogSearchResults->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblDialogSearchResults->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblDialogSearchResults->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblDialogSearchResults->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tblDialogSearchResults->setObjectName(QStringLiteral("tblDialogSearchResults"));
        tblDialogSearchResults->setMaximumSize(QSize(16777215, 167772));
        tblDialogSearchResults->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tblDialogSearchResults->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tblDialogSearchResults->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tblDialogSearchResults->setAutoScroll(false);
        tblDialogSearchResults->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblDialogSearchResults->setDragDropOverwriteMode(false);
        tblDialogSearchResults->setDragDropMode(QAbstractItemView::NoDragDrop);
        tblDialogSearchResults->setAlternatingRowColors(true);
        tblDialogSearchResults->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblDialogSearchResults->horizontalHeader()->setMinimumSectionSize(40);
        tblDialogSearchResults->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tblDialogSearchResults->horizontalHeader()->setStretchLastSection(true);
        tblDialogSearchResults->verticalHeader()->setCascadingSectionResizes(true);
        tblDialogSearchResults->verticalHeader()->setDefaultSectionSize(40);
        tblDialogSearchResults->verticalHeader()->setMinimumSectionSize(40);
        tblDialogSearchResults->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        tblDialogSearchResults->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tblDialogSearchResults);


        loSearchDialog->addWidget(gbSearchResults);

        gbSearchCancel = new QGroupBox(SearchDialog);
        gbSearchCancel->setObjectName(QStringLiteral("gbSearchCancel"));
        sizePolicy.setHeightForWidth(gbSearchCancel->sizePolicy().hasHeightForWidth());
        gbSearchCancel->setSizePolicy(sizePolicy);
        gbSearchCancel->setMinimumSize(QSize(0, 100));
        horizontalLayout_3 = new QHBoxLayout(gbSearchCancel);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnSearchDialog = new QPushButton(gbSearchCancel);
        btnSearchDialog->setObjectName(QStringLiteral("btnSearchDialog"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnSearchDialog->sizePolicy().hasHeightForWidth());
        btnSearchDialog->setSizePolicy(sizePolicy2);
        btnSearchDialog->setMinimumSize(QSize(150, 35));
        btnSearchDialog->setMaximumSize(QSize(140, 25));
        btnSearchDialog->setMouseTracking(true);
        btnSearchDialog->setFocusPolicy(Qt::StrongFocus);
        btnSearchDialog->setIcon(icon);

        horizontalLayout_3->addWidget(btnSearchDialog);

        btnAddSelectedItem = new QPushButton(gbSearchCancel);
        btnAddSelectedItem->setObjectName(QStringLiteral("btnAddSelectedItem"));
        btnAddSelectedItem->setMinimumSize(QSize(150, 35));
        btnAddSelectedItem->setMaximumSize(QSize(140, 25));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/qtAppIcons/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddSelectedItem->setIcon(icon1);

        horizontalLayout_3->addWidget(btnAddSelectedItem);

        btnCancelSearch = new QPushButton(gbSearchCancel);
        btnCancelSearch->setObjectName(QStringLiteral("btnCancelSearch"));
        btnCancelSearch->setMinimumSize(QSize(150, 35));
        btnCancelSearch->setMaximumSize(QSize(140, 25));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/qtAppIcons/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelSearch->setIcon(icon2);

        horizontalLayout_3->addWidget(btnCancelSearch);


        loSearchDialog->addWidget(gbSearchCancel);


        horizontalLayout->addLayout(loSearchDialog);


        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Dialog", nullptr));
        gbSearchResults->setTitle(QString());
        lblEnterSearchCriteria->setText(QApplication::translate("SearchDialog", "Enter Search Criteria", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblDialogSearchResults->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SearchDialog", "Part", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblDialogSearchResults->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SearchDialog", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblDialogSearchResults->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SearchDialog", "Cost", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblDialogSearchResults->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SearchDialog", "On Hand", nullptr));
        gbSearchCancel->setTitle(QString());
        btnSearchDialog->setText(QApplication::translate("SearchDialog", " Search MacPac", nullptr));
        btnAddSelectedItem->setText(QApplication::translate("SearchDialog", " Add Selected", nullptr));
        btnCancelSearch->setText(QApplication::translate("SearchDialog", " Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
