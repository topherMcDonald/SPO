#include "setuptab.h"
#include "ui_setuptab.h"
#include "utils.h"
#include "View/mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
#include "View/addlineitem.h"
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
 *  ReadBaseXMLFile()
 *
 ************************************************************************/
//QString SetupTab::ReadBaseXMLFile()
//{
//    auto default_xml = ReadBaseXMLFromInternalResource();
//    return default_xml;
//}
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
    //QString baseXML = res_file.readAll();
    //QByteArray baseXML = res_file.readAll();
    //QXmlStreamReader xmlReader(baseXML);
    //XmlSpoParsing(xmlReader);
   // WriteXml();
    //return baseXML;
}
/************************************************************************
 *
 *  ShowXmlOnScreen()
 *
 ************************************************************************/
void SetupTab::ShowXmlOnScreen()
{
    //ui->textEdit->clear();

    QFile file(basefilename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
   // qDebug() << "inside the print xml loop";
    while (!file.atEnd())
    {
        QByteArray line = file.readLine();
        qDebug() << "inside the print xml loop" << line;
     //   ui->textEdit->insertPlainText(line);
    }
}
/************************************************************************
// *
// *  XmlSpoParsing(QXmlStreamReader &)
// *
 ************************************************************************/
//void SetupTab::XmlSpoParsing(QXmlStreamReader &XmlFileReader)
//{
//    basefilename = QFileDialog::getSaveFileName(this,tr("Save Xml"), ".",tr("Xml files (*.xml)"));
//    QFile XmlOutputFile(basefilename);
//    XmlOutputFile.open(QIODevice::WriteOnly);
//    QXmlStreamWriter xmlWriter(&XmlOutputFile);

//    while(!XmlFileReader.atEnd() && !XmlFileReader.hasError())
//    {
//        QXmlStreamReader::TokenType token = XmlFileReader.readNext();
//        if(token == QXmlStreamReader::StartDocument)
//        {
//            continue;
//        }
//        if(XmlFileReader.isStartElement())
//        {
//            //QStringRef  name = XmlFileReader.name();
//            if(XmlFileReader.name() == "POGUID")
//            {
//              xmlWriter.writeTextElement("POGUID", ui->leShipToDealer_PO->text());
//              qDebug() << "MADE IT INSIDE THE POGUID";
//            }
//            if(XmlFileReader.name() == "ShipTo")
//            {
//                XmlFileReader.readNext();
//                if(XmlFileReader.name()== "Name")
//                {
//                    xmlWriter.writeTextElement("ShipTo++++Name", ui->leShipToDealer_PO->text());
//                    qDebug() << "READING ShipTo";
//                }
//            }
//        }
//    }
//    XmlOutputFile.close();
//    ShowXmlOnScreen();
//}
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
            ui->leShipToAddress_Address3->setText(address3); //= address3;
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











