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

MainView::MainView(QWidget *parent, SetupTab& setup, AddLineItem& addlineitem) :
    QMainWindow(parent),
    m_setupTab (setup),
    m_addlineitem(addlineitem),
    ui(new Ui::MainView)
{
        ui->setupUi(this);

        m_setupTab.setParent(this);
       // auto setup_tab = new SetupTab(this);    // Create instance of the class
        ui->loSetupTab->addWidget(&m_setupTab);
       // auto addlineitem_tab = new AddLineItem(this);
        ui->loAddSmallParts->addWidget(&addlineitem);
        statusBar()->showMessage(tr("Ready"));
        //SaveXMLFile();

}

void MainView::createActions()
{
//    openAction = new QAction(tr("&Open..."),this);
//    openAction->setShortcut(tr("Ctrl+O"));
//    openAction->setIcon(QIcon("icons/open2.png"));
//    connect(openAction, SIGNAL(triggered()), this, SLOT(OpenXMLofFile()));

//    saveAsAction = new QAction(tr("&Save As..."),this);
//    saveAsAction->setShortcut(tr("Ctrl+S"));
//    saveAsAction->setIcon(QIcon("icons/save.png"));
//    //QObject::connect(ui->tabShipToAddress->, SIGNAL(triggered()), this, SLOT(SaveXMLFile()));
//    //connect(saveAsAction, SIGNAL(triggered()), this, SLOT(SaveXMLFile()));

//    clearAction = new QAction(tr("&Clear Data..."),this);
//    clearAction->setShortcut(tr("Ctrl+C"));
//    clearAction->setIcon(QIcon("icons/clear.png"));
//    connect(clearAction,SIGNAL(triggered()),this,SLOT(ClearData()));

//    exitAction = new QAction(tr("&Exit"),this);
//    exitAction->setShortcut(tr("Ctrl+Q"));
//    exitAction->setIcon(QIcon("icons/exit.png"));
//    connect(exitAction,SIGNAL(triggered()),this,SLOT(close()));

//    aboutAction = new QAction(tr("&About..."),this);
//    aboutAction->setShortcut(tr("Ctrl+A"));
//    connect(aboutAction,SIGNAL(triggered()),this,SLOT(AboutApp()));

//    aboutQtAction = new QAction(tr("About &QT..."),this);
//    aboutQtAction->setShortcut(tr("Ctrl+T"));
//    connect(aboutQtAction,SIGNAL(triggered()),qApp,SLOT(aboutQt()));
}

void MainView::SaveXMLFile()
{

//    basefilename = QFileDialog::getSaveFileName(this,tr("Save Xml"), ".",tr("Xml files (*.xml)"));

//    QFile file(basefilename);
//    file.open(QIODevice::WriteOnly);

//    QXmlStreamWriter xmlWriter(&file);
//    xmlWriter.setAutoFormatting(true);
//    xmlWriter.writeStartDocument();

//    xmlWriter.writeStartElement("LAMPS");
}

MainView::~MainView()
{
    delete ui;
}
