#include "addlineitem.h"
#include "ui_addlineitem.h"
#include <QTableWidget>


    AddLineItem::AddLineItem(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::AddLineItem)
    {
        ui->setupUi(this);
        //Set Table column names
        ui->tblOrderLinesWidget->setHorizontalHeaderLabels(QString("Part ;Qty ;Desc ;Dims ;Weight ;").split(";"));
        //Add Table items here
        //table->setItem(0,0,new QTableWidgetItem("ITEM 1"));
        ui->tblOrderLinesWidget->setItem(0,0, new QTableWidgetItem("shade"));
        ui->tblOrderLinesWidget->setItem(1,0, new QTableWidgetItem("Glue"));
        ui->tblOrderLinesWidget->setItem(0,1, new QTableWidgetItem("1"));
        ui->tblOrderLinesWidget->setItem(1,1, new QTableWidgetItem("part one"));
    }

    AddLineItem::~AddLineItem()
    {
        delete ui;
    }


void AddLineItem::on_btnAddLineItem_GetMacPacPart_clicked()
{

}
