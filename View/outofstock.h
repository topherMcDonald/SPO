#ifndef OUTOFSTOCK_H
#define OUTOFSTOCK_H

#include <QDialog>

namespace Ui {
    class outOfStock;
}

class outOfStock : public QDialog
{
    Q_OBJECT

public:
    explicit outOfStock(QWidget *parent = 0);
    ~outOfStock();

private:
    Ui::outOfStock *ui;
};

#endif // OUTOFSTOCK_H
