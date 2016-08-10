#include "ordersubmitteddialog.h"
#include "ui_ordersubmitteddialog.h"

OrderSubmittedDialog::OrderSubmittedDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderSubmittedDialog)
{
    ui->setupUi(this);
}

OrderSubmittedDialog::~OrderSubmittedDialog()
{
    delete ui;
}
