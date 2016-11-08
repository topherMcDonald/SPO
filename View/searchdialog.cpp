#include "searchdialog.h"
#include "ui_searchdialog.h"
#include <QtNetwork>
//For web calls ...
#include <QCoreApplication>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>
#include <QXmlStreamReader>
#include <QFile>
#include <QDir>

QList<QTableWidgetItem *>  selectedValue;
QMap<QString, QString> partMap;
QVariant onHandParts;

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
    connect(ui->btnSearchDialog, SIGNAL(clicked(bool)), this, SLOT(startSearchRequest()));
    selectedValue = ui->tblDialogSearchResults->selectedItems();
    connect(ui->btnAddSelectedItem, SIGNAL(clicked(bool)), this, SLOT(accept()));
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::startSearchRequest()
{
    // create custom temporary event loop on stack
    QEventLoop eventLoop;
    // const QString& myXmlFile = 0;

    // "quit()" the event-loop, when the network request "finished()"
    QNetworkAccessManager mgr;
    QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
    QString textSearch = ui->leEnterSearchCriteria->text();
    // the HTTP request
    QNetworkRequest req( QUrl( QString("http://spi-rabbit2:8080/parts/part/search/"+textSearch) ) );
    QNetworkReply *reply = mgr.get(req);
    eventLoop.exec(); // blocks stack until "finished()" has been called

    QByteArray result = reply->readAll();
    QXmlStreamReader xmlReader(result);
    XmlDialogSearchRequestParsing(xmlReader);
}

void SearchDialog::XmlDialogSearchRequestParsing(QXmlStreamReader &XmlFile)
{
    QString partName,  description, cost, onHand;

    //Removes all rows from table (fjd 8.5.16 1:05 PM)
    ui->tblDialogSearchResults->setRowCount(0);
    int row = ui->tblDialogSearchResults->rowCount();

    while(!XmlFile.atEnd() && !XmlFile.hasError())
    {
        QXmlStreamReader::TokenType token = XmlFile.readNext();
        if(token == QXmlStreamReader::StartElement)
        {
            QStringRef  name = XmlFile.name();
            if(name == "Name")
            {
                ui->tblDialogSearchResults->insertRow(row);
                partName = XmlFile.readElementText();
                ui->tblDialogSearchResults->setItem(row,0, new QTableWidgetItem (partName));
                ui->tblDialogSearchResults->horizontalHeader()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
            }
            else if(name == "Description")
            {
                description = XmlFile.readElementText();
                ui->tblDialogSearchResults->setItem(row,1, new QTableWidgetItem (description));
                ui->tblDialogSearchResults->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
            }
            else if(name == "Cost")
            {
                cost = XmlFile.readElementText();
                ui->tblDialogSearchResults->setItem(row,2, new QTableWidgetItem (cost));
                ui->tblDialogSearchResults->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);
               // row = ui->tblDialogSearchResults->rowCount();
            }
           else if(name == "OnHandQtyForMfg")
            {
                onHand = XmlFile.readElementText();
                ui->tblDialogSearchResults->setItem(row,3, new QTableWidgetItem (onHand));
                ui->tblDialogSearchResults->horizontalHeader()->setSectionResizeMode(3,QHeaderView::ResizeToContents);
                //  row = ui->tblDialogSearchResults->rowCount();
            }
            else if(name == "InventoryInfo")
             {
                 //onHand = XmlFile.readElementText();
                 ui->tblDialogSearchResults->setItem(row,3, new QTableWidgetItem ("0"));
                 ui->tblDialogSearchResults->horizontalHeader()->setSectionResizeMode(3,QHeaderView::ResizeToContents);
                 //  row = ui->tblDialogSearchResults->rowCount();
             }
        }
    }
}

void SearchDialog::on_btnSearchDialog_clicked()
{
    //connect(ui->btnSearchDialog, SIGNAL(clicked(bool)), this, SLOT(startSearchRequest()));
}

void SearchDialog::on_btnAddSelectedItem_clicked()
{
    selectedValue = ui->tblDialogSearchResults->selectedItems();
}

QMap<QString, QString> SearchDialog::getMap() {

    QTableWidgetItem *rowValue;
    QVariant partValue;//name of part
    QVariant partDesc;//description of part
    QVariant partCost;//cost of part
    QVariant partOnHand;//number of parts in stock

    foreach (rowValue, selectedValue) {
        if (rowValue->column() == 0) {
            partValue = rowValue->text();
        }
        else if (rowValue->column() == 1) {
            partDesc = rowValue->text();
        }
        else if (rowValue->column() == 2) {
            partCost = rowValue->text();
        }
        else if (rowValue->column() == 3) {
            partOnHand = rowValue->text();
        }
    }
    partMap["PartName"] = partValue.toString();
    partMap["PartDesc"] = partDesc.toString();
    partMap["PartCost"] = partCost.toString();
    partMap["PartOnHand"] = partOnHand.toString();
    return partMap;
}

void SearchDialog::on_btnCancelSearch_clicked()
{
    close();
}
