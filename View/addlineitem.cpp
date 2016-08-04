#include <QDebug>
#include "addlineitem.h"
#include "ui_addlineitem.h"
#include <QTableWidget>
#include "View/searchdialog.h"

AddLineItem::AddLineItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddLineItem)
{
    ui->setupUi(this);
    //Set Table column names
    //ui->tblOrderLinesWidget->setHorizontalHeaderLabels(QString("Part ;Qty ;Desc ;Dims ;Weight ;").split(";"));
    //Add Table items here
//    ui->tblOrderLinesWidget->setItem(0,0, new QTableWidgetItem("shade"));
//    ui->tblOrderLinesWidget->setItem(0,1, new QTableWidgetItem("1"));
//    ui->tblOrderLinesWidget->setItem(0,2, new QTableWidgetItem("this is part one"));
//    ui->tblOrderLinesWidget->setItem(0,3, new QTableWidgetItem("7x7"));
//    ui->tblOrderLinesWidget->setItem(0,4, new QTableWidgetItem("$25.00"));


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

void AddLineItem::receiveDialogData(QStringData *)
{

}
