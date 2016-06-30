#include "addlineitem.h"
#include "ui_addlineitem.h"

namespace TophersNameSpace
{

    AddLineItem::AddLineItem(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::AddLineItem)
    {
        ui->setupUi(this);
    }

    AddLineItem::~AddLineItem()
    {
        delete ui;
    }
}/*End NameSpace */
