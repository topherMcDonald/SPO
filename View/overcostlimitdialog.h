#ifndef OVERCOSTLIMITDIALOG_H
#define OVERCOSTLIMITDIALOG_H

#include <QDialog>

namespace Ui {
    class overCostLimitDialog;
}

class overCostLimitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit overCostLimitDialog(QWidget *parent = 0);
    ~overCostLimitDialog();

private:
    Ui::overCostLimitDialog *ui;
};

#endif // OVERCOSTLIMITDIALOG_H
