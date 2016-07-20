#include "setuptab.h"
#include "ui_setuptab.h"
#include "utils.h"


    SetupTab::SetupTab(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::SetupTab)
    {
        ui->setupUi(this);
    }

    SetupTab::~SetupTab()
    {
        Utils::DestuctorMsg(this);
        delete ui;
    }
