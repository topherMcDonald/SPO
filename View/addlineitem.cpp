#include "addlineitem.h"
#include "ui_addlineitem.h"
#include <QTableWidget>
#include "View/searchdialog.h"

AddLineItem::AddLineItem(QWidget *parent, SearchDialog &search) :
    QWidget(parent),
    m_search(search),
    ui(new Ui::AddLineItem)
{
    ui->setupUi(this);
    //Set Table column names
    ui->tblOrderLinesWidget->setHorizontalHeaderLabels(QString("Part ;Qty ;Desc ;Dims ;Weight ;").split(";"));
    //Add Table items here
    ui->tblOrderLinesWidget->setItem(0,0, new QTableWidgetItem("shade"));
    ui->tblOrderLinesWidget->setItem(0,1, new QTableWidgetItem("1"));
    ui->tblOrderLinesWidget->setItem(0,2, new QTableWidgetItem("this is part one"));
    ui->tblOrderLinesWidget->setItem(0,3, new QTableWidgetItem("7x7"));
    ui->tblOrderLinesWidget->setItem(0,4, new QTableWidgetItem("$25.00"));

    ui->tblOrderLinesWidget->setItem(1,0, new QTableWidgetItem("shade2"));
    ui->tblOrderLinesWidget->setItem(1,1, new QTableWidgetItem("2"));
    ui->tblOrderLinesWidget->setItem(1,2, new QTableWidgetItem("this is part 2"));
    ui->tblOrderLinesWidget->setItem(1,3, new QTableWidgetItem("7x7"));
    ui->tblOrderLinesWidget->setItem(1,4, new QTableWidgetItem("$5.00"));

    ui->tblOrderLinesWidget->setItem(2,0, new QTableWidgetItem("bracket3"));
    ui->tblOrderLinesWidget->setItem(2,1, new QTableWidgetItem("3"));
    ui->tblOrderLinesWidget->setItem(2,2, new QTableWidgetItem("this is part 3"));
    ui->tblOrderLinesWidget->setItem(2,3, new QTableWidgetItem("1x7"));
    ui->tblOrderLinesWidget->setItem(2,4, new QTableWidgetItem("$15.00"));

    ui->tblOrderLinesWidget->setItem(3,0, new QTableWidgetItem("bracket4"));
    ui->tblOrderLinesWidget->setItem(3,1, new QTableWidgetItem("4"));
    ui->tblOrderLinesWidget->setItem(3,2, new QTableWidgetItem("this is part 4"));
    ui->tblOrderLinesWidget->setItem(3,3, new QTableWidgetItem("1x7"));
    ui->tblOrderLinesWidget->setItem(3,4, new QTableWidgetItem("$15.00"));
}

AddLineItem::~AddLineItem()
{
    delete ui;
}


void AddLineItem::on_btnAddLineItem_GetMacPacPart_clicked()
{
     //connect(ui->btnAddShipToAddress, SIGNAL(clicked()), this, SLOT(SaveAddressXML()));
    //connect(ui->btnAddLineItem_GetMacPacPart, SIGNAL(clicked()), this, QDialog::show());
}
