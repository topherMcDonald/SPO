#include "outofstock.h"
#include "ui_outofstock.h"

outOfStock::outOfStock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::outOfStock)
{
    ui->setupUi(this);
}

outOfStock::~outOfStock()
{
    delete ui;
}
