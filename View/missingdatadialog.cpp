#include "missingdatadialog.h"
#include "ui_missingdatadialog.h"

MissingDataDialog::MissingDataDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MissingDataDialog)
{
    ui->setupUi(this);
}

MissingDataDialog::~MissingDataDialog()
{
    delete ui;
}
