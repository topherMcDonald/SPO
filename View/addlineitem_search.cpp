#include "addlineitem_search.h"
#include "ui_addlineitem_search.h"

addLineItem_search::addLineItem_search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addLineItem_search)
{
    ui->setupUi(this);
}

addLineItem_search::~addLineItem_search()
{
    delete ui;
}
