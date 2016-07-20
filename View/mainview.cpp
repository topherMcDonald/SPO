#include "View/mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
#include "View/addlineitem.h"


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

MainView::~MainView()
{
    delete ui;
}
