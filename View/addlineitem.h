#ifndef ADDLINEITEM_H
#define ADDLINEITEM_H
//#include <QObject>
#include <QWidget>
#include "View/searchdialog.h"
#include "ui_addlineitem.h"

namespace Ui {
    class AddLineItem;
}

class SearchDialog;

class AddLineItem : public QWidget, public Ui::AddLineItem
{
    Q_OBJECT


public:
    explicit AddLineItem(QWidget *parent = 0);
    ~AddLineItem();

    void AddLineItemFromDialog(QString &item);
public slots:

private slots:
    void on_btnAddLineItem_GetMacPacPart_clicked();

private:

    Ui::AddLineItem *ui; 
};

#endif // ADDLINEITEM_H
