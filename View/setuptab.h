#ifndef SETUPTAB_H
#define SETUPTAB_H

#include <QWidget>

namespace Ui {
    class SetupTab;
}

class SetupTab : public QWidget
{
    Q_OBJECT

public:
    explicit SetupTab(QWidget *parent);
    ~SetupTab();

public slots:
    void SaveAddressXML();
private slots:
    //void on_btnAddShipToAddress_clicked();

private:
    QString m_basefilename;
    QString basefilename;

    Ui::SetupTab *ui;

    QString ReadBaseXMLFile();
    QString ReadBaseXMLFromInternalResource();
};

#endif // SETUPTAB_H
