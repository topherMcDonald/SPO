#include "View/mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
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
#include <QRect>
#include <QDesktopWidget>

MainView::MainView(QWidget *parent, SetupTab& setup) :
    QMainWindow(parent),
    m_setupTab (setup),
    ui(new Ui::MainView)
{
    ui->setupUi(this);
    m_setupTab.setParent(this);
    // auto setup_tab = new SetupTab(this);    // Create instance of the class
    ui->loSetupTab->addWidget(&m_setupTab);
    //  Center the window on load.
    QRect position = frameGeometry();
    position.moveCenter(QDesktopWidget().availableGeometry().center());
    move(position.topLeft());
}

MainView::~MainView()
{
    delete ui;
}
