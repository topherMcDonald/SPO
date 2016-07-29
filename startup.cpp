#include "startup.h"
#include "View/setuptab.h"
#include "View/mainview.h"
#include "View/addlineitem.h"

#include "utils.h"
#include "Model/settings.h"
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

#include<QComboBox>




Startup::Startup() :
    QObject(nullptr),
    m_addlineitem(*new AddLineItem(nullptr)),
    m_search(*new SearchDialog(nullptr)),
    m_setupTab(*new SetupTab(nullptr)),
    m_mainView(*new MainView(nullptr, m_setupTab, m_addlineitem))
{

}

Startup::~Startup()
{
    Utils::DestuctorMsg(this);
    delete &m_mainView;         //mainview is being "newed up" so we need to take care of deleting it
}

void Startup::show() const
{
    m_mainView.show();
}


















