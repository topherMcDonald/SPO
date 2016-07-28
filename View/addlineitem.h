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

public slots:

public:
    explicit AddLineItem(QWidget *parent, SearchDialog &search);

    ~AddLineItem();

private slots:
    void on_btnAddLineItem_GetMacPacPart_clicked();

private:
    SearchDialog& m_search;
    Ui::AddLineItem *ui; 
};

#endif // ADDLINEITEM_H
