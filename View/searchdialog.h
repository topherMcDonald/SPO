#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>

namespace Ui {
    class SearchDialog;
}

class QXmlStreamReader;
class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = 0);
    void XmlDialogSearchRequestParsing(QXmlStreamReader &XmlFile);
    ~SearchDialog();

private slots:

    void on_btnSearchDialog_clicked();
    void startSearchRequest();
private:
    Ui::SearchDialog *ui;

};

#endif // SEARCHDIALOG_H
