#include "mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
#include "View/addlineitem.h"

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);
    auto setup_tab = new SetupTab(this);
    ui->loSetupTab->addWidget(setup_tab);

    auto addlineitem_tab = new AddLineItem(this);
    ui->loAddSmallParts->addWidget(addlineitem_tab);

}

MainView::~MainView()
{
    delete ui;
}
