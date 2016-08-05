#include "searchdialog.h"
#include "ui_searchdialog.h"
#include "ui_addlineitem.h"
#include "addlineitem.h"
#include <QDebug>
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


//#ifndef QT_NO_SSL
//static const char defaultServiceRequest[] = "https://spi-rabbit2:8080/parts/part/search/C109";
//#else
//static const char defaultServiceRequest[] = "https://spi-rabbit2:8080/parts/part/search/C109";
//#endif

QList<QTableWidgetItem *>  selectedValue;

QMap<QString, QString> partMap;

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
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
    QString partName,  description, cost;
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
                qDebug() << "GOT THE NAME" << partName;
            }
            else if(name == "Description")
            {
                description = XmlFile.readElementText();
                ui->tblDialogSearchResults->setItem(row,1, new QTableWidgetItem (description));
                qDebug() << "GOT THE Des" << description;
            }
            else if(name == "Cost")
            {
                cost = XmlFile.readElementText();
                ui->tblDialogSearchResults->setItem(row,2, new QTableWidgetItem (cost));
                qDebug() << "GOT THE COST" << cost;
                row = ui->tblDialogSearchResults->rowCount();
                qDebug() << "Row count for dialog" << row;
            }
        }
    }
}

void SearchDialog::GetTextValues()
{
    //return ui->tblDialogSearchResults->selectedItems().value();
}

void SearchDialog::on_btnSearchDialog_clicked()
{

    connect(ui->btnSearchDialog, SIGNAL(clicked(bool)), this, SLOT(startSearchRequest()));

}

void SearchDialog::on_btnAddSelectedItem_clicked()
{
    selectedValue = ui->tblDialogSearchResults->selectedItems();
    //qDebug() << "Butten return values****************" << selectedValue;
    //qDebug() << "Selected values" << selectedValue;
    connect(ui->btnAddSelectedItem, SIGNAL(clicked(bool)), this, SLOT(accept()));
}

//QList<QTableWidgetItem* > SearchDialog::getSelected(){
//    << selectedValue;

//    return selectedValue;
//}

QMap<QString, QString> SearchDialog::getMap() {

    QTableWidgetItem *rowValue;
    QVariant partValue;
    QVariant partDesc;
    QVariant partCost;

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
    }

    partMap["PartName"] = partValue.toString();
    partMap["PartDesc"] = partDesc.toString();
    partMap["PartCost"] = partCost.toString();
    qDebug() << "Here is the part info:" << partValue.toString() << "--" << partDesc.toString() << "--" << partCost.toString();
    return partMap;
}

//QString SearchDialog::getPart(){

//}
