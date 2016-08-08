#ifndef MISSINGDATADIALOG_H
#define MISSINGDATADIALOG_H

#include <QDialog>

namespace Ui {
class MissingDataDialog;
}

class MissingDataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MissingDataDialog(QWidget *parent = 0);
    ~MissingDataDialog();

private:
    Ui::MissingDataDialog *ui;
};

#endif // MISSINGDATADIALOG_H
