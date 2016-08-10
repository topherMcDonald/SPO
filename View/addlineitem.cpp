#include <QDebug>
#include "addlineitem.h"
#include "ui_addlineitem.h"
#include <QTableWidget>
#include "View/searchdialog.h"
#include "View/missingdatadialog.h"
#include "View/overcostlimitdialog.h"
#include "View/ordersubmitteddialog.h"
#include <string>
#include <sstream>

AddLineItem::AddLineItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddLineItem)
{
    ui->setupUi(this);
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

        //Default the quantity to 1 for users
        ui->leAddLineItem_Quantity->setText("1");
    }
}

void AddLineItem::updateExtendedCostTotal() {
    int rowCt = ui->tblOrderLinesWidget->rowCount();
    if (rowCt == 0) {
         ui->leOrderTotal->setText("0.00");
        return;
    }
    QString uiTotal;
    float tmpTotal;
    QTableWidgetItem *wi;
    for (int i = 0; i < rowCt; i++) {
        wi = ui->tblOrderLinesWidget->item(i,4);
        tmpTotal += wi->text().toFloat();
    }
    uiTotal.setNum(tmpTotal);
    ui->leOrderTotal->setText(uiTotal);
}

void AddLineItem::resetFields() {
    ui->leAddLineItem_PartNumber->setText("");
    ui->leAddlineItem_Description->setText("");
    ui->leAddLineItem_Value->setText("");
    ui->leAddLineItem_Quantity->setText("");
}

void AddLineItem::on_btnAddLineItem_AddLine_clicked()
{
    QString partName;
    QString partDesc;
    QString partCost;
    QString partQty;
    QString extCost;
    float xCost;
    partName = ui->leAddLineItem_PartNumber->text();
    partDesc = ui->leAddlineItem_Description->text();
    partCost = ui->leAddLineItem_Value->text();
    partQty = ui->leAddLineItem_Quantity->text();
    //START: Extended Cost Mod - FJD - 8.9.2016
    xCost = partQty.toFloat() * partCost.toFloat();
    extCost.setNum(xCost);
    //END: Extended Cost Mod
    if (PartOkToAdd(partName, partDesc, partCost, partQty) == true) {
        if(overCostLimit == false)
        {
            int row = ui->tblOrderLinesWidget->rowCount();
            ui->tblOrderLinesWidget->insertRow(row);
            ui->tblOrderLinesWidget->setItem(row,0, new QTableWidgetItem (partName));
            ui->tblOrderLinesWidget->setItem(row,1, new QTableWidgetItem (partDesc));
            ui->tblOrderLinesWidget->setItem(row,2, new QTableWidgetItem (partCost));
            ui->tblOrderLinesWidget->setItem(row,3, new QTableWidgetItem (partQty));
            //START: Extended Cost Mod
            ui->tblOrderLinesWidget->setItem(row,4, new QTableWidgetItem (extCost));
            //END: Extended Cost Mod
        }
    }
    updateExtendedCostTotal();
    resetFields();
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

void AddLineItem::handleDeleteSelectedRow()
{
    QList<QTableWidgetItem*> selectionRangeList = this->ui->tblOrderLinesWidget->selectedItems();
    int rowIndex;
    QListIterator<QTableWidgetItem*> selectionRangeListIter(selectionRangeList);
    while(selectionRangeListIter.hasNext()){
        rowIndex = ((int)((QTableWidgetItem*)selectionRangeListIter.next())->row());
        this->ui->tblOrderLinesWidget->removeRow(rowIndex);
    }
}

void AddLineItem::on_btnRecapAndSubmit_Clear_clicked()
{
    handleDeleteSelectedRow();
    updateExtendedCostTotal();
}

void AddLineItem::on_btnSubmitOrder_clicked()
{
    OrderSubmittedDialog *dialog = new OrderSubmittedDialog;
    dialog->exec();
}
