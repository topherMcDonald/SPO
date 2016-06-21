#include "setuptab.h"
#include "ui_setuptab.h"

namespace TophersNameSpace
{

    SetupTab::SetupTab(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::SetupTab)
    {
        ui->setupUi(this);
    }

    SetupTab::~SetupTab()
    {
        delete ui;
    }

}
