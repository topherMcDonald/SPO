#ifndef ADDLINEITEM_H
#define ADDLINEITEM_H

#include <QWidget>

namespace Ui {
    class AddLineItem;
}

namespace TophersNameSpace{

    class AddLineItem : public QWidget
    {
        Q_OBJECT

    public:
        explicit AddLineItem(QWidget *parent = 0);
        ~AddLineItem();

    private:
        Ui::AddLineItem *ui;
    };
}
#endif // ADDLINEITEM_H
