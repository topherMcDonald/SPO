#include <QDebug>
#include "addlineitem.h"
#include "ui_addlineitem.h"
#include <QTableWidget>
#include "View/searchdialog.h"
#include "View/missingdatadialog.h"
#include "View/overcostlimitdialog.h"
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
        AddLineItem_OrderTotal(partCost);
        if(overCostLimit == false)
        {
            int row = ui->tblOrderLinesWidget->rowCount();
            ui->tblOrderLinesWidget->insertRow(row);
            ui->tblOrderLinesWidget->setItem(row,0, new QTableWidgetItem (partName));
            ui->tblOrderLinesWidget->setItem(row,1, new QTableWidgetItem (partDesc));
            ui->tblOrderLinesWidget->setItem(row,2, new QTableWidgetItem (partCost));
            ui->tblOrderLinesWidget->setItem(row,3, new QTableWidgetItem (partQty));
        }
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

bool AddLineItem::AddLineItem_OrderTotal(QString orderTotal)
{
    QString orderTotalToString;
    qDebug() << "total of line item"<< orderTotal;
    bool ok;
    static float orderTotalFloatRunningTotal;
    float orderTotalFloat = orderTotal.toFloat(&ok);
    qDebug() << "AFTER THE Conversion" << orderTotalFloat;
    orderTotalFloatRunningTotal += orderTotalFloat;
    if(orderTotalFloatRunningTotal <= 2)
    {
        qDebug() << "What is the running total" << orderTotalFloatRunningTotal;
        orderTotalToString.setNum(orderTotalFloatRunningTotal);
        ui->leOrderTotal->setText(orderTotalToString);
        return overCostLimit = false;
    }
    else
    {
        overCostLimitDialog *overLimitDialog = new overCostLimitDialog;
        overLimitDialog->show();
        qDebug() << "YOU over over the cost limitation!!!!!!!!!!!!!";
        return overCostLimit   = true;
    }
}

void AddLineItem::handleDeleteSelectedRow()
{
   // QVariant partCost;
    QList<QTableWidgetItem*> selectionRangeList = this->ui->tblOrderLinesWidget->selectedItems();

    int rowIndex;
    QListIterator<QTableWidgetItem*> selectionRangeListIter(selectionRangeList);
    while(selectionRangeListIter.hasNext())
    {
        QTableWidgetItem *rowValue;
        QVariant partCost;//cost of part

        rowIndex = ((int)((QTableWidgetItem*)selectionRangeListIter.next())->row());
//        foreach (rowValue, selectionRangeList) {
//            if ((rowValue->column() == 0) || (rowValue->column() == 1) || (rowValue->column() == 2)) {
//              //ui->tblOrderLinesWidget->(setItem(row,2, new QTableWidgetItem (partCost));
//                *rowValue = 2;
//              partCost = rowValue->column();
//              qDebug() << "WHAT IS IN THE ITERATOR LIST" << partCost;
//            }
//        }
        this->ui->tblOrderLinesWidget->removeRow(rowIndex);
    }
}

void AddLineItem::on_btnRecapAndSubmit_Clear_clicked()
{
    qDebug() << "I NEED TO DELETE!!!!!!!!!!!!!";
    handleDeleteSelectedRow();
}
