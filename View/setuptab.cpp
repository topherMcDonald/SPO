#include "setuptab.h"
#include "ui_setuptab.h"
#include "utils.h"
#include "View/mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
#include "View/searchdialog.h"
#include "View/missingdatadialog.h"
#include "View/overcostlimitdialog.h"
#include <string>
#include <sstream>
#include <QDir>
#include <QFile>
#include <QTableWidget>
#include <QString>
#include <QDir>
#include <QFile>
#include <QDebug>
#include <QtXml>
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QDataStream>
#include <QTextStream>
#include <QPushButton>
#include <QIcon>
#include <QtNetwork>
#include <QCoreApplication>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>

static auto RESOURCE_PREFIX = QStringLiteral(":/xml");
static auto OUTFILE_PREFIX = QStringLiteral("C:/");
static QString FILEERROR_MSG = QStringLiteral("ERROR OPENING FILE");
QString defaultXML;

/************************************************************************
 *
 *  SetupTab(QWidget *parent) : QWidget(parent), ui(new Ui::SetupTab)
 *
 ************************************************************************/
SetupTab::SetupTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetupTab)
{
    qDebug() << "QWidget SetupTab has been envoked!";
    ui->setupUi(this);
    //Start: PO generation (fjd 8.5.16 1:46PM)
    QString po = "";
    Utils *u;
    u->createPO(po);
    ui->leShipToDealer_PO->setText(po);
    //End: PO generation
    // defaultXML = ReadBaseXMLFromInternalResource();
}
/************************************************************************
 *
 *  ReadBaseXMLFromInternalResource()
 *
 ************************************************************************/
QString SetupTab::ReadBaseXMLFromInternalResource()
{
    QDir res_dir (RESOURCE_PREFIX);
    if(!res_dir.exists())
    {
        //TODO Send Error message
        return "";
    }
    auto path = res_dir.filePath("spoBase.xml");
    QFile res_file(path);

    if(!res_file.open(QFile::ReadOnly|QFile::Text))
    {
        //TODO Send Error message
        qDebug() << FILEERROR_MSG;
    }

}
/************************************************************************
 *
 *  ShowXmlOnScreen()
 *
 ************************************************************************/
void SetupTab::ShowXmlOnScreen()
{
    QFile file(basefilename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    while (!file.atEnd())
    {
        QByteArray line = file.readLine();
        qDebug() << "inside the print xml loop" << line;
    }
}
/************************************************************************
 *
 *  SaveAddressXML()
 *
 ************************************************************************/
void SetupTab::SaveAddressXML()
{
    //    //basefilename = QFileDialog::getSaveFileName(this,tr("Save Xml"), ".",tr("Xml files (*.xml)"));
    //    basefilename = QFileDialog::getSaveFileName(this,tr("Save Xml"), ".",tr("Xml files (*.xml)"));

    //    QFile file(basefilename);
    //    file.open(QIODevice::WriteOnly);
    //    QXmlStreamWriter xmlWriter(&file);
    //    xmlWriter.setAutoFormatting(true);
    //    xmlWriter.writeStartDocument();
    //    xmlWriter.writeStartElement("ShipTo");
    //    xmlWriter.writeTextElement("Name",ui->leShipToAddress_Name->text());
    //    xmlWriter.writeTextElement("Address",ui->leShipToAddress_Address1->text());
    //    xmlWriter.writeTextElement("City",ui->leShipToAddress_City->text());
    //    xmlWriter.writeTextElement("State",ui->leShipToAddress_State->text());
    //    xmlWriter.writeTextElement("Zip",ui->leShipToAddress_Zip->text());
    //    xmlWriter.writeTextElement("CountryCode", "USA"); //Does this need to be hard coded for USA
    //    xmlWriter.writeEndElement();

}
/************************************************************************
 *
 *  GetAddressXML()
 *
 ************************************************************************/
void SetupTab::GetAddressXML()
{
    if (ui->leShipToDealer_ID->text().isEmpty() == false || ui->leShipToDealer_ID->text().contains("END USER") == false)
    {
        //Create custom temporary event loop on stack
        QEventLoop eventLoop;
        QNetworkAccessManager mgr;
        QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
        QString textSearch = ui->leShipToDealer_ID->text();
        //HTTP request
        QNetworkRequest req( QUrl( QString("http://spi-rabbit2:8080/addresses/address/" + textSearch)));
        QNetworkReply *reply = mgr.get(req);
        //Blocking
        eventLoop.exec();
        QByteArray result = reply->readAll();
        QXmlStreamReader xmlReader(result);
        XmlAddressSearchRequestParsing(xmlReader);
    }
}
/************************************************************************
 *
 *  XmlAddressSearchRequestParsing(QXmlStreamReader &)
 *
 ************************************************************************/
void SetupTab::XmlAddressSearchRequestParsing(QXmlStreamReader &XmlFileReader)
{
    QString dealerID, dname, status, address1, address2, address3, city, state, zip, countryCode, region, phone;
    while(!XmlFileReader.atEnd() && !XmlFileReader.hasError())
    {
        QXmlStreamReader::TokenType token = XmlFileReader.readNext();
        if(token == QXmlStreamReader::StartDocument) {
            continue;
        }
        if(token == QXmlStreamReader::StartElement)
        {
            //QStringRef  name = XmlFileReader.name();
            if(XmlFileReader.name() == "DealerID")
            {
                dealerID = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "Name")
            {
                dname = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "Status")
            {
                status = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "Address1")
            {
                address1 = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "Address2")
            {
                address2 = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "Address3")
            {
                address3 = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "City")
            {
                city = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "State")
            {
                state = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "Zip")
            {
                zip = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "CountryCode")
            {
                countryCode = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "Region")
            {
                region = XmlFileReader.readElementText();
            }
            else if(XmlFileReader.name() == "Phone")
            {
                phone = XmlFileReader.readElementText();
            }

            //leShipToAddress_
            ui->leShipToAddress_Name->setText(dname); // = dname;
            ui->leShipToAddress_Address1->setText(address1); //= address1;
            ui->leShipToAddress_Address2->setText(address2); //= address2;
            //ui->leShipToAddress_Address3->setText(address3); //= address3;
            ui->leShipToAddress_City->setText(city); //= city;
            ui->leShipToAddress_State->setText(state); //= state;
            ui->leShipToAddress_Zip->setText(zip); //= zip;

        }
    }
}
/************************************************************************
 *
 *  ~SetupTab()
 *
 ************************************************************************/
SetupTab::~SetupTab()
{
    Utils::DestuctorMsg(this);
    delete ui;
}
/************************************************************************
 *
 *  on_leShipToDealer_ID_editingFinished()
 *
 ************************************************************************/
void SetupTab::on_leShipToDealer_ID_editingFinished()
{
    GetAddressXML();
}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
void SetupTab::AddLineItemFromDialog(QString & item)
{
    ui->tblOrderLinesWidget->setItem(0,0, new QTableWidgetItem(item));
}

void SetupTab::on_btnAddLineItem_GetMacPacPart_clicked()
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

void SetupTab::updateExtendedCostTotal() {
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
        if(tmpTotal > 100)
        {
            this->ui->tblOrderLinesWidget->removeRow(i);
            OverLimitDialog();
            return;
        }
    }
    uiTotal.setNum(tmpTotal);
    ui->leOrderTotal->setText(uiTotal);
}

void SetupTab::resetFields() {
    ui->leAddLineItem_PartNumber->setText("");
    ui->leAddlineItem_Description->setText("");
    ui->leAddLineItem_Value->setText("");
    ui->leAddLineItem_Quantity->setText("");
}

void SetupTab::resetForm()
{
    int rowCt = ui->tblOrderLinesWidget->rowCount();
    //Clear table
    rowCt += 1;
    int rowCtIndex= rowCt;
    qDebug() << "before       rct==="<< rowCt;
    for (int i = 0; i <= rowCt ; i++)
    {   //  Delete rows from the table after order submitted.
        this->ui->tblOrderLinesWidget->removeRow(rowCtIndex);
        //  Clears data from table.
        //this->ui->tblOrderLinesWidget->clear();
        //rowCt = ui->tblOrderLinesWidget->rowCount();
        rowCtIndex--;
    }// End for loop
    ui->leShipToDealer_PO->setText("");
    ui->leShipToAddress_Address1->setText("");
    ui->leShipToAddress_Address2->setText("");
    ui->leShipToAddress_City->setText("");
    ui->leShipToAddress_Name->setText("");
    ui->leShipToAddress_State->setText("");
    ui->leShipToAddress_Zip->setText("");
    ui->leShipToDealer_ID->setText("");
    ui->leShipToDealer_ID->setText("");
    ui->leShipToDealer_Routing->setText("");
    QString po = "";
    Utils *u;
    u->createPO(po);
    ui->leShipToDealer_PO->setText(po);
}

void SetupTab::on_btnAddLineItem_AddLine_clicked()
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

    if(xCost > 100)
    {
        OverLimitDialog();
        return;
    }

    if((PartOkToAdd(partName, partDesc, partCost, partQty) == true) && (xCost < 100))
    {
        int row = ui->tblOrderLinesWidget->rowCount();
        ui->tblOrderLinesWidget->insertRow(row);
        ui->tblOrderLinesWidget->setItem(row,0, new QTableWidgetItem (partName));
        ui->tblOrderLinesWidget->setItem(row,1, new QTableWidgetItem (partDesc));
        ui->tblOrderLinesWidget->setItem(row,2, new QTableWidgetItem (partCost));
        ui->tblOrderLinesWidget->setItem(row,3, new QTableWidgetItem (partQty));
        ui->tblOrderLinesWidget->setItem(row,4, new QTableWidgetItem (extCost));
        updateExtendedCostTotal();
        resetFields();
    }
}

bool SetupTab::PartOkToAdd(QString partName, QString partDesc, QString partCost, QString partQty) {
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

void SetupTab::handleDeleteSelectedRow()
{
    QList<QTableWidgetItem*> selectionRangeList = this->ui->tblOrderLinesWidget->selectedItems();
    int rowIndex;
    QListIterator<QTableWidgetItem*> selectionRangeListIter(selectionRangeList);
    while(selectionRangeListIter.hasNext()){
        rowIndex = ((int)((QTableWidgetItem*)selectionRangeListIter.next())->row());
        this->ui->tblOrderLinesWidget->removeRow(rowIndex);
    }
}

void SetupTab::on_btnRecapAndSubmit_Clear_clicked()
{
    handleDeleteSelectedRow();
    updateExtendedCostTotal();
}

void SetupTab::OverLimitDialog()
{
    overCostLimitDialog *dialog = new overCostLimitDialog;
    dialog->exec();
}

void SetupTab::on_btnSubmitOrder_clicked()
{
    QString output;
    QString plusText = " small parts order has been submitted.";
    output = ui->leShipToDealer_PO->text();
    ui->lblOrderSubmitTotal->setText(output + plusText);
    resetForm();
}
/************************************************************************
 *
 *  WriteXml()
 *
 ************************************************************************/
void SetupTab::WriteXml()
{
    QDir res_dir (OUTFILE_PREFIX);
    auto path = res_dir.filePath("XmlForMacPac.xml");
    QFile res_file(path);

    //  basefilename = QFileDialog::getSaveFileName(this,tr("Save Xml"), ".",tr("Xml files (*.xml)"));

    if(!res_file.open(QIODevice::WriteOnly))
    {
        //TODO Send Error message
        qDebug() << FILEERROR_MSG;
    }
    res_file.open(QIODevice::WriteOnly);
    QXmlStreamWriter xmlWriter(&res_file);
    xmlWriter.setAutoFormatting(true);
    xmlWriter.writeStartDocument();
    xmlWriter.writeStartElement("Communication");//**********************************************
    xmlWriter.writeTextElement("CommunicationType", "SPO");
    xmlWriter.writeStartElement("Contexts");//***********************************************
    xmlWriter.writeTextElement("ParserVersion", "1.0");
    xmlWriter.writeTextElement("POGUID", "SPO12345");
    xmlWriter.writeEndElement();//End Contexts*********************************************
    xmlWriter.writeEndElement();//End Communication********************************************
    // ShowXmlOnScreen();
}













