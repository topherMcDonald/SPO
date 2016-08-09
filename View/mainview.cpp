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
}

void MainView::createActions()
{

}

MainView::~MainView()
{
    delete ui;
}
