#include <QDebug>
#include "addlineitem.h"
#include "ui_addlineitem.h"
#include <QTableWidget>
#include "View/searchdialog.h"
#include "View/missingdatadialog.h"

AddLineItem::AddLineItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddLineItem)
{
    ui->setupUi(this);
    //Set Table column names
    //ui->tblOrderLinesWidget->setHorizontalHeaderLabels(QString("Part ;Qty ;Desc ;Dims ;Weight ;").split(";"));
    //Add Table items here
    //connect(ui->btnAddLineItem_AddLine, SIGNAL(clicked(bool)), this, SLOT(accept()));
}

AddLineItem::~AddLineItem()
{
    delete ui;
}

void AddLineItem::AddLineItemFromDialog(QString & item)
{
    ui->tblOrderLinesWidget->setItem(0,0, new QTableWidgetItem(item));
}

void AddLineItem::on_btnAddLineItem_GetMacPacPart_clicked()
{
    SearchDialog *dialog = new SearchDialog;

    if(dialog->exec())
    {
        QMap<QString, QString> m = dialog->getMap();

        QString partName = m.value("PartName");
        ui->leAddLineItem_PartNumber->setText(partName);

        QString partDesc = m.value("PartDesc");
        ui->leAddlineItem_Description->setText(partDesc);

        QString partCost = m.value("PartCost");
        ui->leAddLineItem_Value->setText(partCost);

    }
}

void AddLineItem::on_btnAddLineItem_AddLine_clicked()
{
    QString partName;
    QString partDesc;
    QString partCost;
    QString partQty;
    partName = ui->leAddLineItem_PartNumber->text();
    partDesc = ui->leAddlineItem_Description->text();
    partCost = ui->leAddLineItem_Value->text();
    partQty = ui->leAddLineItem_Quantity->text();

    if (PartOkToAdd(partName, partDesc, partCost, partQty) == true) {
        int row = ui->tblOrderLinesWidget->rowCount();
        ui->tblOrderLinesWidget->insertRow(row);
        ui->tblOrderLinesWidget->setItem(row,0, new QTableWidgetItem (partName));
        ui->tblOrderLinesWidget->setItem(row,1, new QTableWidgetItem (partDesc));
        ui->tblOrderLinesWidget->setItem(row,2, new QTableWidgetItem (partCost));
        ui->tblOrderLinesWidget->setItem(row,3, new QTableWidgetItem (partQty));
    }
}

bool AddLineItem::PartOkToAdd(QString partName, QString partDesc, QString partCost, QString partQty) {
    bool retval = true;
    if (partName == "") {
        retval = false;
    }
    if (partDesc == "") {
        retval = false;
    }
    if (partCost == "") {
        retval = false;
    }
    if (partQty == "" || partQty == "0" || partQty.contains("-")) {
        retval = false;
    }
    if (retval == false) {
            MissingDataDialog *mdDialog = new MissingDataDialog;
            mdDialog->show();
    }
    return retval;
}
