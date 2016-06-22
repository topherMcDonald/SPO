#include "View/mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
#include "View/addlineitem.h"

namespace TophersNameSpace {

    MainView::MainView(QWidget *parent, TophersNameSpace::SetupTab& setup) :
        QMainWindow(parent),
        m_setupTab(setup),
        ui(new Ui::MainView)
    {
        ui->setupUi(this);
        m_setupTab.setParent(this);
        ui->loSetupTab->addWidget(&m_setupTab);

        auto addlineitem_tab = new AddLineItem(this);
        ui->loAddSmallParts->addWidget(addlineitem_tab);

    }

    MainView::~MainView()
    {
        delete ui;
    }

}
