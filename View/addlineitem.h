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
    bool PartOkToAdd(QString partName, QString partDesc, QString partCost, QString partQty);
    void handleDeleteSelectedRow();
    void updateExtendedCostTotal();
    void OverLimitDialog();
public slots:

protected:

private slots:
    void on_btnAddLineItem_GetMacPacPart_clicked();
    void on_btnAddLineItem_AddLine_clicked();
    void on_btnRecapAndSubmit_Clear_clicked();

    void on_btnSubmitOrder_clicked();

private:
    bool overCostLimit;
    Ui::AddLineItem *ui;
    bool AddLineItem_OrderTotal(QString orderTotal);
    void resetFields();
    bool GetOrderTotal();
};

#endif // ADDLINEITEM_H
