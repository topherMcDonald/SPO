#ifndef ORDERSUBMITTEDDIALOG_H
#define ORDERSUBMITTEDDIALOG_H

#include <QDialog>

namespace Ui {
    class OrderSubmittedDialog;
}

class OrderSubmittedDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OrderSubmittedDialog(QWidget *parent = 0);
    ~OrderSubmittedDialog();

private:
    Ui::OrderSubmittedDialog *ui;
};

#endif // ORDERSUBMITTEDDIALOG_H
