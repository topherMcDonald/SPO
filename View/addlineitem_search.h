#ifndef ADDLINEITEM_SEARCH_H
#define ADDLINEITEM_SEARCH_H

#include <QWidget>

namespace Ui {
    class addLineItem_search;
}

class addLineItem_search : public QWidget
{
    Q_OBJECT

public:
    explicit addLineItem_search(QWidget *parent = 0);
    ~addLineItem_search();

private:
    Ui::addLineItem_search *ui;
};

#endif // ADDLINEITEM_SEARCH_H
