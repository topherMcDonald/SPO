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
#include<QFileDialog>
#include<iostream>
#include<QMessageBox>
#include <QXmlStreamWriter>
#include <QDataStream>
#include <QTextStream>
#include <QPushButton>
#include <QIcon>

static auto RESOURCE_PREFIX = QStringLiteral(":/xml");

SetupTab::SetupTab(QWidget *parent, QString& basefilename) :
    QWidget(parent),
    m_basefilename (basefilename),
    ui(new Ui::SetupTab)
{
    ui->setupUi(this);
}

QString SetupTab::ReadBaseXMLFile()
{
    auto default_xml = ReadBaseXMLFromInternalResource();
    return default_xml;
}

QString SetupTab::ReadBaseXMLFromInternalResource()
{
    QDir res_dir (RESOURCE_PREFIX);
    if(!res_dir.exists())
    {
        //TODO Send Error message
        return "";
    }
    auto path = res_dir.filePath(m_basefilename);
    QFile res_file(path);
    if(!res_file.open(QFile::ReadOnly|QFile::Text))
    {
        //TODO Send Error message
        return "";
    }
    QString baseXML = res_file.readAll();
    return baseXML;
}

void SetupTab::SaveAddressXML()
{

    //basefilename = QFileDialog::getSaveFileName(this,tr("Save Xml"), ".",tr("Xml files (*.xml)"));
    basefilename = QFileDialog::getSaveFileName(this,tr("Save Xml"), ".",tr("Xml files (*.xml)"));


    QFile file(basefilename);
    file.open(QIODevice::WriteOnly);

    QXmlStreamWriter xmlWriter(&file);
    xmlWriter.setAutoFormatting(true);
    xmlWriter.writeStartDocument();

    xmlWriter.writeStartElement("LAMPS");
}

void SetupTab::on_btnAddShipToAddress_clicked()
{
    connect(ui->btnAddShipToAddress, SIGNAL(clicked()), this, SLOT(SaveAddressXML()));
}

SetupTab::~SetupTab()
{
    Utils::DestuctorMsg(this);
    delete ui;
}
