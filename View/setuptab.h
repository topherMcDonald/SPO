#ifndef SETUPTAB_H
#define SETUPTAB_H
#include <QWidget>
#include <QXmlStreamReader>
#include <QFile>
#include "ui_setuptab.h"
#include <View/addlineitem.h>

namespace Ui {
    class SetupTab;
}

class SetupTab : public QWidget, public Ui::SetupTab
{
    Q_OBJECT

public:
Ui::SetupTab *ui;
    explicit SetupTab(QWidget *parent = 0);

    ~SetupTab();
    void GetAddressXML();
    void XmlAddressSearchRequestParsing(QXmlStreamReader &XmlFileReader);
    QString GetDefaultXML();
    void ShowXmlOnScreen();
public slots:
    void SaveAddressXML();
private slots:
    //void on_btnAddShipToAddress_clicked();
    void on_leShipToDealer_ID_editingFinished();
private:
    QString m_basefilename;
    QString basefilename;

    //QString ReadBaseXMLFile();
    QString ReadBaseXMLFromInternalResource();
    QString ReadBaseXMLFile();
    void XmlSpoParsing(QXmlStreamReader &XmlFileReader);
};

#endif // SETUPTAB_H
