#include "overcostlimitdialog.h"
#include "ui_overcostlimitdialog.h"

overCostLimitDialog::overCostLimitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::overCostLimitDialog)
{
    ui->setupUi(this);
}

overCostLimitDialog::~overCostLimitDialog()
{
    delete ui;
}
