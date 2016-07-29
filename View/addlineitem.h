#ifndef ADDLINEITEM_H
#define ADDLINEITEM_H
//#include <QObject>
#include <QWidget>
#include "View/searchdialog.h"

namespace Ui {
    class AddLineItem;
}

class SearchDialog;

class AddLineItem : public QWidget
{
    Q_OBJECT


public:
    explicit AddLineItem(QWidget *parent = 0);
    ~AddLineItem();

private slots:
    void on_btnAddLineItem_GetMacPacPart_clicked();

private:

    Ui::AddLineItem *ui; 
};

#endif // ADDLINEITEM_H
