/********************************************************************************
** Form generated from reading UI file 'setuptab.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPTAB_H
#define UI_SETUPTAB_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupTab
{
public:
    QGridLayout *gridLayout;
    QGroupBox *gbAddLineTtem;
    QGridLayout *gridLayout_2;
    QLabel *lblAddLineItem_Quantity;
    QLineEdit *leAddLineItem_PartNumber;
    QLabel *lblAddLineItem_PartNumber;
    QPushButton *btnAddLineItem_AddLine;
    QPushButton *btnAddLineItem_GetMacPacPart;
    QLabel *lblAddLineItem_Description;
    QLineEdit *leAddlineItem_Description;
    QLineEdit *leAddLineItem_Value;
    QLabel *lblAddLineItem_Value;
    QSpinBox *spinBoxAddLineItem_Quantity;
    QLineEdit *leAddLineItem_Quantity;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *leOrderTotal;
    QPushButton *btnSubmitOrder;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tblOrderLinesWidget;
    QPushButton *btnRecapAndSubmit_Clear;
    QLabel *lblOrderTotal;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *gbShipToDealer;
    QGridLayout *gridLayout_4;
    QHBoxLayout *hloShipToDealer_DealerID;
    QLabel *lblShipToDealer_DealerID;
    QLineEdit *leShipToDealer_ID;
    QHBoxLayout *hloShipToDealer_PO;
    QLabel *lblShipToDealer_PO;
    QLineEdit *leShipToDealer_PO;
    QHBoxLayout *hloShipToDealer_DateToShip;
    QLabel *lblShipToDealer_DateToShip;
    QDateEdit *dateEdit;
    QHBoxLayout *hloShipToDealer_Routing;
    QLabel *lblShipToDealer_Routing;
    QComboBox *cbxShipToDealer_Routing;
    QLabel *lblOrderSubmitTotal;
    QLineEdit *leOnHandStock;
    QGroupBox *gbShipToAddress;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblShipToAddress_ContactName;
    QLineEdit *leShipToAddress_ContactName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblSalespersonEmail;
    QLineEdit *leSalespersonEmail;
    QHBoxLayout *hloShipToAddress_City;
    QLabel *lblShipToAddress_City;
    QLineEdit *leShipToAddress_City;
    QLabel *lblShipToAddress_State;
    QLineEdit *leShipToAddress_State;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *hloShipToAddress_State;
    QLabel *lblShipToAddress_ContactNumber;
    QLineEdit *leShipToAddress_ContactNumber;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *hloShipToAddress_Address2;
    QLabel *lblShipToAddress_Address2;
    QLineEdit *leShipToAddress_Address2;
    QHBoxLayout *hloShipToAddress_Name;
    QLabel *lblShipToAddress_Name;
    QLineEdit *leShipToAddress_Name;
    QHBoxLayout *hloShipToAddress_Address1;
    QLabel *lblShipToAddress_Address1;
    QLineEdit *leShipToAddress_Address1;
    QHBoxLayout *horizontalLayout;
    QLabel *lblShipToAddress_Zip;
    QLineEdit *leShipToAddress_Zip;
    QLabel *lblShipToAddress_Country;
    QLineEdit *leShipToAddress_Country;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *SetupTab)
    {
        if (SetupTab->objectName().isEmpty())
            SetupTab->setObjectName(QStringLiteral("SetupTab"));
        SetupTab->resize(900, 800);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SetupTab->sizePolicy().hasHeightForWidth());
        SetupTab->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        SetupTab->setFont(font);
        gridLayout = new QGridLayout(SetupTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gbAddLineTtem = new QGroupBox(SetupTab);
        gbAddLineTtem->setObjectName(QStringLiteral("gbAddLineTtem"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbAddLineTtem->sizePolicy().hasHeightForWidth());
        gbAddLineTtem->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(gbAddLineTtem);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lblAddLineItem_Quantity = new QLabel(gbAddLineTtem);
        lblAddLineItem_Quantity->setObjectName(QStringLiteral("lblAddLineItem_Quantity"));

        gridLayout_2->addWidget(lblAddLineItem_Quantity, 0, 6, 1, 1);

        leAddLineItem_PartNumber = new QLineEdit(gbAddLineTtem);
        leAddLineItem_PartNumber->setObjectName(QStringLiteral("leAddLineItem_PartNumber"));
        leAddLineItem_PartNumber->setReadOnly(true);

        gridLayout_2->addWidget(leAddLineItem_PartNumber, 0, 5, 1, 1);

        lblAddLineItem_PartNumber = new QLabel(gbAddLineTtem);
        lblAddLineItem_PartNumber->setObjectName(QStringLiteral("lblAddLineItem_PartNumber"));

        gridLayout_2->addWidget(lblAddLineItem_PartNumber, 0, 4, 1, 1);

        btnAddLineItem_AddLine = new QPushButton(gbAddLineTtem);
        btnAddLineItem_AddLine->setObjectName(QStringLiteral("btnAddLineItem_AddLine"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnAddLineItem_AddLine->sizePolicy().hasHeightForWidth());
        btnAddLineItem_AddLine->setSizePolicy(sizePolicy2);
        btnAddLineItem_AddLine->setMinimumSize(QSize(0, 26));
        btnAddLineItem_AddLine->setMaximumSize(QSize(347, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/qtAppIcons/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddLineItem_AddLine->setIcon(icon);

        gridLayout_2->addWidget(btnAddLineItem_AddLine, 5, 6, 1, 3);

        btnAddLineItem_GetMacPacPart = new QPushButton(gbAddLineTtem);
        btnAddLineItem_GetMacPacPart->setObjectName(QStringLiteral("btnAddLineItem_GetMacPacPart"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnAddLineItem_GetMacPacPart->sizePolicy().hasHeightForWidth());
        btnAddLineItem_GetMacPacPart->setSizePolicy(sizePolicy3);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/qtAppIcons/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddLineItem_GetMacPacPart->setIcon(icon1);

        gridLayout_2->addWidget(btnAddLineItem_GetMacPacPart, 0, 0, 1, 1);

        lblAddLineItem_Description = new QLabel(gbAddLineTtem);
        lblAddLineItem_Description->setObjectName(QStringLiteral("lblAddLineItem_Description"));

        gridLayout_2->addWidget(lblAddLineItem_Description, 4, 0, 1, 1);

        leAddlineItem_Description = new QLineEdit(gbAddLineTtem);
        leAddlineItem_Description->setObjectName(QStringLiteral("leAddlineItem_Description"));
        leAddlineItem_Description->setLayoutDirection(Qt::RightToLeft);
        leAddlineItem_Description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        leAddlineItem_Description->setReadOnly(true);

        gridLayout_2->addWidget(leAddlineItem_Description, 4, 1, 1, 5);

        leAddLineItem_Value = new QLineEdit(gbAddLineTtem);
        leAddLineItem_Value->setObjectName(QStringLiteral("leAddLineItem_Value"));
        leAddLineItem_Value->setReadOnly(true);

        gridLayout_2->addWidget(leAddLineItem_Value, 4, 8, 1, 1);

        lblAddLineItem_Value = new QLabel(gbAddLineTtem);
        lblAddLineItem_Value->setObjectName(QStringLiteral("lblAddLineItem_Value"));

        gridLayout_2->addWidget(lblAddLineItem_Value, 4, 6, 1, 1);

        spinBoxAddLineItem_Quantity = new QSpinBox(gbAddLineTtem);
        spinBoxAddLineItem_Quantity->setObjectName(QStringLiteral("spinBoxAddLineItem_Quantity"));

        gridLayout_2->addWidget(spinBoxAddLineItem_Quantity, 0, 7, 1, 1);

        leAddLineItem_Quantity = new QLineEdit(gbAddLineTtem);
        leAddLineItem_Quantity->setObjectName(QStringLiteral("leAddLineItem_Quantity"));
        leAddLineItem_Quantity->setToolTipDuration(-1);

        gridLayout_2->addWidget(leAddLineItem_Quantity, 0, 8, 1, 1);


        gridLayout->addWidget(gbAddLineTtem, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(SetupTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy4);
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 3, 5, 1, 1);

        leOrderTotal = new QLineEdit(groupBox_2);
        leOrderTotal->setObjectName(QStringLiteral("leOrderTotal"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(leOrderTotal->sizePolicy().hasHeightForWidth());
        leOrderTotal->setSizePolicy(sizePolicy5);
        leOrderTotal->setMaximumSize(QSize(65, 25));
        leOrderTotal->setLayoutDirection(Qt::RightToLeft);
        leOrderTotal->setMaxLength(32770);
        leOrderTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leOrderTotal->setReadOnly(true);

        gridLayout_5->addWidget(leOrderTotal, 2, 2, 1, 1);

        btnSubmitOrder = new QPushButton(groupBox_2);
        btnSubmitOrder->setObjectName(QStringLiteral("btnSubmitOrder"));
        btnSubmitOrder->setMinimumSize(QSize(159, 26));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/qtAppIcons/Check.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSubmitOrder->setIcon(icon2);

        gridLayout_5->addWidget(btnSubmitOrder, 3, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 3, 3, 1, 1);

        tblOrderLinesWidget = new QTableWidget(groupBox_2);
        if (tblOrderLinesWidget->columnCount() < 5)
            tblOrderLinesWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(0, 0, 0));
        tblOrderLinesWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblOrderLinesWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblOrderLinesWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblOrderLinesWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tblOrderLinesWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tblOrderLinesWidget->setObjectName(QStringLiteral("tblOrderLinesWidget"));
        tblOrderLinesWidget->setMinimumSize(QSize(0, 50));
        tblOrderLinesWidget->setMaximumSize(QSize(16777215, 300));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        tblOrderLinesWidget->setFont(font1);
        tblOrderLinesWidget->setLineWidth(1);
        tblOrderLinesWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tblOrderLinesWidget->setAutoScrollMargin(16);
        tblOrderLinesWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblOrderLinesWidget->setAlternatingRowColors(true);
        tblOrderLinesWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tblOrderLinesWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblOrderLinesWidget->setWordWrap(false);
        tblOrderLinesWidget->setRowCount(0);
        tblOrderLinesWidget->setColumnCount(5);
        tblOrderLinesWidget->horizontalHeader()->setDefaultSectionSize(164);
        tblOrderLinesWidget->horizontalHeader()->setStretchLastSection(true);
        tblOrderLinesWidget->verticalHeader()->setDefaultSectionSize(40);
        tblOrderLinesWidget->verticalHeader()->setMinimumSectionSize(40);
        tblOrderLinesWidget->verticalHeader()->setStretchLastSection(false);

        gridLayout_5->addWidget(tblOrderLinesWidget, 0, 0, 1, 7);

        btnRecapAndSubmit_Clear = new QPushButton(groupBox_2);
        btnRecapAndSubmit_Clear->setObjectName(QStringLiteral("btnRecapAndSubmit_Clear"));
        sizePolicy3.setHeightForWidth(btnRecapAndSubmit_Clear->sizePolicy().hasHeightForWidth());
        btnRecapAndSubmit_Clear->setSizePolicy(sizePolicy3);
        btnRecapAndSubmit_Clear->setMinimumSize(QSize(159, 26));
        btnRecapAndSubmit_Clear->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/qtAppIcons/Remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRecapAndSubmit_Clear->setIcon(icon3);

        gridLayout_5->addWidget(btnRecapAndSubmit_Clear, 3, 4, 1, 1);

        lblOrderTotal = new QLabel(groupBox_2);
        lblOrderTotal->setObjectName(QStringLiteral("lblOrderTotal"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        lblOrderTotal->setFont(font2);

        gridLayout_5->addWidget(lblOrderTotal, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 2, 3, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_5->addItem(verticalSpacer_3, 1, 2, 1, 1);

        tblOrderLinesWidget->raise();
        btnRecapAndSubmit_Clear->raise();
        btnSubmitOrder->raise();
        lblOrderTotal->raise();
        leOrderTotal->raise();

        gridLayout->addWidget(groupBox_2, 3, 0, 1, 1);

        gbShipToDealer = new QGroupBox(SetupTab);
        gbShipToDealer->setObjectName(QStringLiteral("gbShipToDealer"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(gbShipToDealer->sizePolicy().hasHeightForWidth());
        gbShipToDealer->setSizePolicy(sizePolicy6);
        gbShipToDealer->setMaximumSize(QSize(16777215, 125));
        gridLayout_4 = new QGridLayout(gbShipToDealer);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        hloShipToDealer_DealerID = new QHBoxLayout();
        hloShipToDealer_DealerID->setObjectName(QStringLiteral("hloShipToDealer_DealerID"));
        lblShipToDealer_DealerID = new QLabel(gbShipToDealer);
        lblShipToDealer_DealerID->setObjectName(QStringLiteral("lblShipToDealer_DealerID"));

        hloShipToDealer_DealerID->addWidget(lblShipToDealer_DealerID);

        leShipToDealer_ID = new QLineEdit(gbShipToDealer);
        leShipToDealer_ID->setObjectName(QStringLiteral("leShipToDealer_ID"));

        hloShipToDealer_DealerID->addWidget(leShipToDealer_ID);


        gridLayout_4->addLayout(hloShipToDealer_DealerID, 0, 0, 1, 1);

        hloShipToDealer_PO = new QHBoxLayout();
        hloShipToDealer_PO->setObjectName(QStringLiteral("hloShipToDealer_PO"));
        lblShipToDealer_PO = new QLabel(gbShipToDealer);
        lblShipToDealer_PO->setObjectName(QStringLiteral("lblShipToDealer_PO"));

        hloShipToDealer_PO->addWidget(lblShipToDealer_PO);

        leShipToDealer_PO = new QLineEdit(gbShipToDealer);
        leShipToDealer_PO->setObjectName(QStringLiteral("leShipToDealer_PO"));
        QFont font3;
        font3.setItalic(true);
        leShipToDealer_PO->setFont(font3);
        leShipToDealer_PO->setReadOnly(true);

        hloShipToDealer_PO->addWidget(leShipToDealer_PO);


        gridLayout_4->addLayout(hloShipToDealer_PO, 1, 0, 1, 1);

        hloShipToDealer_DateToShip = new QHBoxLayout();
        hloShipToDealer_DateToShip->setObjectName(QStringLiteral("hloShipToDealer_DateToShip"));
        lblShipToDealer_DateToShip = new QLabel(gbShipToDealer);
        lblShipToDealer_DateToShip->setObjectName(QStringLiteral("lblShipToDealer_DateToShip"));
        lblShipToDealer_DateToShip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hloShipToDealer_DateToShip->addWidget(lblShipToDealer_DateToShip);

        dateEdit = new QDateEdit(gbShipToDealer);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMinimumDate(QDate(2016, 8, 9));
        dateEdit->setCalendarPopup(true);
        dateEdit->setTimeSpec(Qt::LocalTime);

        hloShipToDealer_DateToShip->addWidget(dateEdit);


        gridLayout_4->addLayout(hloShipToDealer_DateToShip, 1, 1, 1, 1);

        hloShipToDealer_Routing = new QHBoxLayout();
        hloShipToDealer_Routing->setObjectName(QStringLiteral("hloShipToDealer_Routing"));
        lblShipToDealer_Routing = new QLabel(gbShipToDealer);
        lblShipToDealer_Routing->setObjectName(QStringLiteral("lblShipToDealer_Routing"));
        lblShipToDealer_Routing->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hloShipToDealer_Routing->addWidget(lblShipToDealer_Routing);

        cbxShipToDealer_Routing = new QComboBox(gbShipToDealer);
        cbxShipToDealer_Routing->addItem(QString());
        cbxShipToDealer_Routing->addItem(QString());
        cbxShipToDealer_Routing->addItem(QString());
        cbxShipToDealer_Routing->addItem(QString());
        cbxShipToDealer_Routing->addItem(QString());
        cbxShipToDealer_Routing->addItem(QString());
        cbxShipToDealer_Routing->addItem(QString());
        cbxShipToDealer_Routing->addItem(QString());
        cbxShipToDealer_Routing->setObjectName(QStringLiteral("cbxShipToDealer_Routing"));

        hloShipToDealer_Routing->addWidget(cbxShipToDealer_Routing);


        gridLayout_4->addLayout(hloShipToDealer_Routing, 0, 1, 1, 1);


        gridLayout->addWidget(gbShipToDealer, 0, 0, 1, 1);

        lblOrderSubmitTotal = new QLabel(SetupTab);
        lblOrderSubmitTotal->setObjectName(QStringLiteral("lblOrderSubmitTotal"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lblOrderSubmitTotal->sizePolicy().hasHeightForWidth());
        lblOrderSubmitTotal->setSizePolicy(sizePolicy7);
        QFont font4;
        font4.setFamily(QStringLiteral("Courier New"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        font4.setKerning(false);
        lblOrderSubmitTotal->setFont(font4);

        gridLayout->addWidget(lblOrderSubmitTotal, 4, 0, 1, 1);

        leOnHandStock = new QLineEdit(SetupTab);
        leOnHandStock->setObjectName(QStringLiteral("leOnHandStock"));
        leOnHandStock->setEnabled(false);

        gridLayout->addWidget(leOnHandStock, 5, 0, 1, 1);

        gbShipToAddress = new QGroupBox(SetupTab);
        gbShipToAddress->setObjectName(QStringLiteral("gbShipToAddress"));
        sizePolicy6.setHeightForWidth(gbShipToAddress->sizePolicy().hasHeightForWidth());
        gbShipToAddress->setSizePolicy(sizePolicy6);
        gbShipToAddress->setMaximumSize(QSize(16777215, 170));
        gridLayout_3 = new QGridLayout(gbShipToAddress);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblShipToAddress_ContactName = new QLabel(gbShipToAddress);
        lblShipToAddress_ContactName->setObjectName(QStringLiteral("lblShipToAddress_ContactName"));

        horizontalLayout_2->addWidget(lblShipToAddress_ContactName);

        leShipToAddress_ContactName = new QLineEdit(gbShipToAddress);
        leShipToAddress_ContactName->setObjectName(QStringLiteral("leShipToAddress_ContactName"));

        horizontalLayout_2->addWidget(leShipToAddress_ContactName);


        gridLayout_3->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lblSalespersonEmail = new QLabel(gbShipToAddress);
        lblSalespersonEmail->setObjectName(QStringLiteral("lblSalespersonEmail"));

        horizontalLayout_4->addWidget(lblSalespersonEmail);

        leSalespersonEmail = new QLineEdit(gbShipToAddress);
        leSalespersonEmail->setObjectName(QStringLiteral("leSalespersonEmail"));
        leSalespersonEmail->setFont(font3);
        leSalespersonEmail->setReadOnly(true);

        horizontalLayout_4->addWidget(leSalespersonEmail);


        gridLayout_3->addLayout(horizontalLayout_4, 4, 1, 1, 1);

        hloShipToAddress_City = new QHBoxLayout();
        hloShipToAddress_City->setObjectName(QStringLiteral("hloShipToAddress_City"));
        lblShipToAddress_City = new QLabel(gbShipToAddress);
        lblShipToAddress_City->setObjectName(QStringLiteral("lblShipToAddress_City"));
        lblShipToAddress_City->setMinimumSize(QSize(55, 0));
        lblShipToAddress_City->setMaximumSize(QSize(35, 16777215));
        lblShipToAddress_City->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hloShipToAddress_City->addWidget(lblShipToAddress_City);

        leShipToAddress_City = new QLineEdit(gbShipToAddress);
        leShipToAddress_City->setObjectName(QStringLiteral("leShipToAddress_City"));
        leShipToAddress_City->setMaximumSize(QSize(300, 16777215));

        hloShipToAddress_City->addWidget(leShipToAddress_City);

        lblShipToAddress_State = new QLabel(gbShipToAddress);
        lblShipToAddress_State->setObjectName(QStringLiteral("lblShipToAddress_State"));
        sizePolicy6.setHeightForWidth(lblShipToAddress_State->sizePolicy().hasHeightForWidth());
        lblShipToAddress_State->setSizePolicy(sizePolicy6);
        lblShipToAddress_State->setMinimumSize(QSize(35, 0));
        lblShipToAddress_State->setMaximumSize(QSize(20, 16777215));
        lblShipToAddress_State->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hloShipToAddress_City->addWidget(lblShipToAddress_State);

        leShipToAddress_State = new QLineEdit(gbShipToAddress);
        leShipToAddress_State->setObjectName(QStringLiteral("leShipToAddress_State"));
        sizePolicy3.setHeightForWidth(leShipToAddress_State->sizePolicy().hasHeightForWidth());
        leShipToAddress_State->setSizePolicy(sizePolicy3);
        leShipToAddress_State->setMaximumSize(QSize(50, 16777215));
        leShipToAddress_State->setMaxLength(2);

        hloShipToAddress_City->addWidget(leShipToAddress_State);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hloShipToAddress_City->addItem(horizontalSpacer_5);


        gridLayout_3->addLayout(hloShipToAddress_City, 1, 1, 1, 1);

        hloShipToAddress_State = new QHBoxLayout();
        hloShipToAddress_State->setObjectName(QStringLiteral("hloShipToAddress_State"));
        hloShipToAddress_State->setSizeConstraint(QLayout::SetDefaultConstraint);
        hloShipToAddress_State->setContentsMargins(-1, -1, 0, -1);
        lblShipToAddress_ContactNumber = new QLabel(gbShipToAddress);
        lblShipToAddress_ContactNumber->setObjectName(QStringLiteral("lblShipToAddress_ContactNumber"));

        hloShipToAddress_State->addWidget(lblShipToAddress_ContactNumber);

        leShipToAddress_ContactNumber = new QLineEdit(gbShipToAddress);
        leShipToAddress_ContactNumber->setObjectName(QStringLiteral("leShipToAddress_ContactNumber"));
        QFont font5;
        font5.setItalic(true);
        font5.setStyleStrategy(QFont::PreferAntialias);
        leShipToAddress_ContactNumber->setFont(font5);
        leShipToAddress_ContactNumber->setInputMethodHints(Qt::ImhNone);
        leShipToAddress_ContactNumber->setMaxLength(10);
        leShipToAddress_ContactNumber->setEchoMode(QLineEdit::Normal);
        leShipToAddress_ContactNumber->setCursorMoveStyle(Qt::LogicalMoveStyle);

        hloShipToAddress_State->addWidget(leShipToAddress_ContactNumber);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hloShipToAddress_State->addItem(horizontalSpacer_6);


        gridLayout_3->addLayout(hloShipToAddress_State, 3, 1, 1, 1);

        hloShipToAddress_Address2 = new QHBoxLayout();
        hloShipToAddress_Address2->setObjectName(QStringLiteral("hloShipToAddress_Address2"));
        lblShipToAddress_Address2 = new QLabel(gbShipToAddress);
        lblShipToAddress_Address2->setObjectName(QStringLiteral("lblShipToAddress_Address2"));

        hloShipToAddress_Address2->addWidget(lblShipToAddress_Address2);

        leShipToAddress_Address2 = new QLineEdit(gbShipToAddress);
        leShipToAddress_Address2->setObjectName(QStringLiteral("leShipToAddress_Address2"));

        hloShipToAddress_Address2->addWidget(leShipToAddress_Address2);


        gridLayout_3->addLayout(hloShipToAddress_Address2, 3, 0, 1, 1);

        hloShipToAddress_Name = new QHBoxLayout();
        hloShipToAddress_Name->setObjectName(QStringLiteral("hloShipToAddress_Name"));
        lblShipToAddress_Name = new QLabel(gbShipToAddress);
        lblShipToAddress_Name->setObjectName(QStringLiteral("lblShipToAddress_Name"));

        hloShipToAddress_Name->addWidget(lblShipToAddress_Name);

        leShipToAddress_Name = new QLineEdit(gbShipToAddress);
        leShipToAddress_Name->setObjectName(QStringLiteral("leShipToAddress_Name"));

        hloShipToAddress_Name->addWidget(leShipToAddress_Name);


        gridLayout_3->addLayout(hloShipToAddress_Name, 1, 0, 1, 1);

        hloShipToAddress_Address1 = new QHBoxLayout();
        hloShipToAddress_Address1->setObjectName(QStringLiteral("hloShipToAddress_Address1"));
        lblShipToAddress_Address1 = new QLabel(gbShipToAddress);
        lblShipToAddress_Address1->setObjectName(QStringLiteral("lblShipToAddress_Address1"));

        hloShipToAddress_Address1->addWidget(lblShipToAddress_Address1);

        leShipToAddress_Address1 = new QLineEdit(gbShipToAddress);
        leShipToAddress_Address1->setObjectName(QStringLiteral("leShipToAddress_Address1"));
        leShipToAddress_Address1->setMinimumSize(QSize(400, 0));

        hloShipToAddress_Address1->addWidget(leShipToAddress_Address1);


        gridLayout_3->addLayout(hloShipToAddress_Address1, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        lblShipToAddress_Zip = new QLabel(gbShipToAddress);
        lblShipToAddress_Zip->setObjectName(QStringLiteral("lblShipToAddress_Zip"));
        sizePolicy6.setHeightForWidth(lblShipToAddress_Zip->sizePolicy().hasHeightForWidth());
        lblShipToAddress_Zip->setSizePolicy(sizePolicy6);
        lblShipToAddress_Zip->setMinimumSize(QSize(55, 0));
        lblShipToAddress_Zip->setMaximumSize(QSize(26, 16777215));
        lblShipToAddress_Zip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblShipToAddress_Zip);

        leShipToAddress_Zip = new QLineEdit(gbShipToAddress);
        leShipToAddress_Zip->setObjectName(QStringLiteral("leShipToAddress_Zip"));
        sizePolicy3.setHeightForWidth(leShipToAddress_Zip->sizePolicy().hasHeightForWidth());
        leShipToAddress_Zip->setSizePolicy(sizePolicy3);
        leShipToAddress_Zip->setMaximumSize(QSize(50, 16777215));
        leShipToAddress_Zip->setMaxLength(6);
        leShipToAddress_Zip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leShipToAddress_Zip->setDragEnabled(true);

        horizontalLayout->addWidget(leShipToAddress_Zip);

        lblShipToAddress_Country = new QLabel(gbShipToAddress);
        lblShipToAddress_Country->setObjectName(QStringLiteral("lblShipToAddress_Country"));
        lblShipToAddress_Country->setMinimumSize(QSize(55, 0));
        lblShipToAddress_Country->setMaximumSize(QSize(100, 16777215));
        lblShipToAddress_Country->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblShipToAddress_Country);

        leShipToAddress_Country = new QLineEdit(gbShipToAddress);
        leShipToAddress_Country->setObjectName(QStringLiteral("leShipToAddress_Country"));
        sizePolicy3.setHeightForWidth(leShipToAddress_Country->sizePolicy().hasHeightForWidth());
        leShipToAddress_Country->setSizePolicy(sizePolicy3);
        leShipToAddress_Country->setMaximumSize(QSize(50, 16777215));
        leShipToAddress_Country->setMaxLength(3);

        horizontalLayout->addWidget(leShipToAddress_Country);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        horizontalSpacer_4 = new QSpacerItem(125, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_3->addLayout(horizontalLayout, 2, 1, 1, 1);


        gridLayout->addWidget(gbShipToAddress, 1, 0, 1, 1);

        QWidget::setTabOrder(leShipToDealer_ID, leShipToDealer_PO);
        QWidget::setTabOrder(leShipToDealer_PO, cbxShipToDealer_Routing);
        QWidget::setTabOrder(cbxShipToDealer_Routing, dateEdit);
        QWidget::setTabOrder(dateEdit, leShipToAddress_Name);
        QWidget::setTabOrder(leShipToAddress_Name, leShipToAddress_Address1);
        QWidget::setTabOrder(leShipToAddress_Address1, leShipToAddress_Address2);
        QWidget::setTabOrder(leShipToAddress_Address2, leShipToAddress_City);
        QWidget::setTabOrder(leShipToAddress_City, leShipToAddress_State);
        QWidget::setTabOrder(leShipToAddress_State, leShipToAddress_Zip);
        QWidget::setTabOrder(leShipToAddress_Zip, leShipToAddress_Country);
        QWidget::setTabOrder(leShipToAddress_Country, leShipToAddress_ContactNumber);
        QWidget::setTabOrder(leShipToAddress_ContactNumber, btnAddLineItem_GetMacPacPart);
        QWidget::setTabOrder(btnAddLineItem_GetMacPacPart, leAddLineItem_PartNumber);
        QWidget::setTabOrder(leAddLineItem_PartNumber, leAddlineItem_Description);
        QWidget::setTabOrder(leAddlineItem_Description, leAddLineItem_Value);
        QWidget::setTabOrder(leAddLineItem_Value, btnAddLineItem_AddLine);
        QWidget::setTabOrder(btnAddLineItem_AddLine, tblOrderLinesWidget);
        QWidget::setTabOrder(tblOrderLinesWidget, leOrderTotal);
        QWidget::setTabOrder(leOrderTotal, btnRecapAndSubmit_Clear);
        QWidget::setTabOrder(btnRecapAndSubmit_Clear, btnSubmitOrder);

        retranslateUi(SetupTab);

        QMetaObject::connectSlotsByName(SetupTab);
    } // setupUi

    void retranslateUi(QWidget *SetupTab)
    {
        SetupTab->setWindowTitle(QApplication::translate("SetupTab", "Form", nullptr));
        gbAddLineTtem->setTitle(QApplication::translate("SetupTab", "Add Line Item", nullptr));
        lblAddLineItem_Quantity->setText(QApplication::translate("SetupTab", "Quantity", nullptr));
        lblAddLineItem_PartNumber->setText(QApplication::translate("SetupTab", "Part Number", nullptr));
        btnAddLineItem_AddLine->setText(QApplication::translate("SetupTab", "  Add Line To Small Parts Order", nullptr));
        btnAddLineItem_GetMacPacPart->setText(QApplication::translate("SetupTab", "  Get MacPac Part", nullptr));
        lblAddLineItem_Description->setText(QApplication::translate("SetupTab", "Description", nullptr));
        lblAddLineItem_Value->setText(QApplication::translate("SetupTab", "Value", nullptr));
#ifndef QT_NO_TOOLTIP
        leAddLineItem_Quantity->setToolTip(QApplication::translate("SetupTab", "Required field.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        leAddLineItem_Quantity->setStatusTip(QApplication::translate("SetupTab", "Required Field", nullptr));
#endif // QT_NO_STATUSTIP
        groupBox_2->setTitle(QApplication::translate("SetupTab", "Current Line Items", nullptr));
        btnSubmitOrder->setText(QApplication::translate("SetupTab", "Submit Order", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblOrderLinesWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SetupTab", "Part Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblOrderLinesWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SetupTab", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblOrderLinesWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SetupTab", "Unit Cost", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblOrderLinesWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SetupTab", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tblOrderLinesWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SetupTab", "Extended Cost", nullptr));
        btnRecapAndSubmit_Clear->setText(QApplication::translate("SetupTab", "  Clear", nullptr));
        lblOrderTotal->setText(QApplication::translate("SetupTab", "Order Total", nullptr));
        gbShipToDealer->setTitle(QApplication::translate("SetupTab", "Ship-To Dealer", nullptr));
        lblShipToDealer_DealerID->setText(QApplication::translate("SetupTab", "Dealer ID", nullptr));
        leShipToDealer_ID->setPlaceholderText(QApplication::translate("SetupTab", "END USER", nullptr));
        lblShipToDealer_PO->setText(QApplication::translate("SetupTab", "PO", nullptr));
        lblShipToDealer_DateToShip->setText(QApplication::translate("SetupTab", "                                                       Date to Ship", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("SetupTab", "MM/dd/yyyy", nullptr));
        lblShipToDealer_Routing->setText(QApplication::translate("SetupTab", "                                   Routing", nullptr));
        cbxShipToDealer_Routing->setItemText(0, QApplication::translate("SetupTab", "Ground", nullptr));
        cbxShipToDealer_Routing->setItemText(1, QApplication::translate("SetupTab", "Ground Canada", nullptr));
        cbxShipToDealer_Routing->setItemText(2, QApplication::translate("SetupTab", "Next Day A.M.", nullptr));
        cbxShipToDealer_Routing->setItemText(3, QApplication::translate("SetupTab", "Next Day Early A.M.", nullptr));
        cbxShipToDealer_Routing->setItemText(4, QApplication::translate("SetupTab", "Next Day P.M.", nullptr));
        cbxShipToDealer_Routing->setItemText(5, QApplication::translate("SetupTab", "Next Day Saturday", nullptr));
        cbxShipToDealer_Routing->setItemText(6, QApplication::translate("SetupTab", "2 Day P.M.", nullptr));
        cbxShipToDealer_Routing->setItemText(7, QApplication::translate("SetupTab", "3 Day P.M", nullptr));

        lblOrderSubmitTotal->setText(QString());
        gbShipToAddress->setTitle(QApplication::translate("SetupTab", "Ship-To Address", nullptr));
        lblShipToAddress_ContactName->setText(QApplication::translate("SetupTab", "Contact Name", nullptr));
        lblSalespersonEmail->setText(QApplication::translate("SetupTab", "Salesperson Email", nullptr));
        leSalespersonEmail->setPlaceholderText(QApplication::translate("SetupTab", "@draperinc.com", nullptr));
        lblShipToAddress_City->setText(QApplication::translate("SetupTab", "City", nullptr));
        lblShipToAddress_State->setText(QApplication::translate("SetupTab", "State", nullptr));
        lblShipToAddress_ContactNumber->setText(QApplication::translate("SetupTab", "Contact Number", nullptr));
        leShipToAddress_ContactNumber->setPlaceholderText(QApplication::translate("SetupTab", "xxx5551234", nullptr));
        lblShipToAddress_Address2->setText(QApplication::translate("SetupTab", "Address 2", nullptr));
        lblShipToAddress_Name->setText(QApplication::translate("SetupTab", "Name:", nullptr));
        lblShipToAddress_Address1->setText(QApplication::translate("SetupTab", "Address 1", nullptr));
        lblShipToAddress_Zip->setText(QApplication::translate("SetupTab", " Zip", nullptr));
        lblShipToAddress_Country->setText(QApplication::translate("SetupTab", "Country", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetupTab: public Ui_SetupTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPTAB_H
