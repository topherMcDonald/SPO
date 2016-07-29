#include "searchdialog.h"
#include "ui_searchdialog.h"
#include <QDebug>
#include <QtNetwork>

#ifndef QT_NO_SSL
static const char defaultServiceRequest[] = "https://spi-rabbit2:8080/parts/part/search/";
#else
static const char defaultServiceRequest[] = "";
#endif

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::startSearchRequest()
{

}

void SearchDialog::on_btnSearchDialog_clicked()
{
    connect(ui->btnSearchDialog, SIGNAL(clicked(bool)), this, SLOT(startSearchRequest()));
}

void SearchDialog::on_pushButton_clicked()
{
    //connect(ui->btnCancelSearch, SIGNAL(clicked(bool)), this, SLOT(ui->close()));
}
