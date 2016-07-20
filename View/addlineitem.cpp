#include "addlineitem.h"
#include "ui_addlineitem.h"



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


void AddLineItem::on_btnAddLineItem_GetMacPacPart_clicked()
{

}
