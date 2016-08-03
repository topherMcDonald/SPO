#include "searchdialog.h"
#include "ui_searchdialog.h"
#include <QDebug>
#include <QtNetwork>
//For web calls ...
#include <QCoreApplication>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>
#include <QXmlStreamReader>
#include <QFile>
#include <QDir>


//#ifndef QT_NO_SSL
//static const char defaultServiceRequest[] = "https://spi-rabbit2:8080/parts/part/search/C109";
//#else
//static const char defaultServiceRequest[] = "https://spi-rabbit2:8080/parts/part/search/C109";
//#endif

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::startSearchRequest()
{
    // create custom temporary event loop on stack
    QEventLoop eventLoop;
    const QString& myXmlFile = 0;

    // "quit()" the event-loop, when the network request "finished()"
    QNetworkAccessManager mgr;
    QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));

    // the HTTP request
    QNetworkRequest req( QUrl( QString("http://spi-rabbit2:8080/parts/part/search/C109") ) );
    QNetworkReply *reply = mgr.get(req);
    eventLoop.exec(); // blocks stack until "finished()" has been called

    QByteArray result = reply->readAll();
    QXmlStreamReader xmlReader(result);
     qDebug() << "Successful read of the xml file *****" << result;
    XmlDialogSearchRequestParsing(xmlReader);



}
void SearchDialog::XmlDialogSearchRequestParsing(QXmlStreamReader &XmlFile)
{
    QString partName,  description;

      while(!XmlFile.atEnd() && !XmlFile.hasError())
      {
          QXmlStreamReader::TokenType token = XmlFile.readNext();
          if(token == QXmlStreamReader::StartElement)
          {
              QStringRef  name = XmlFile.name();
              if(name == "Name")
              {
                  //QXmlStreamAttribute namAttr = XmlFile.attributes();
                  partName = XmlFile.attributes().value("Name").toString();
                  //partName = namAttr.value().toString();
                  qDebug() << "GOT THE NAME" << name;
              }

          }
      }
}

void SearchDialog::on_btnSearchDialog_clicked()
{
    connect(ui->btnSearchDialog, SIGNAL(clicked(bool)), this, SLOT(startSearchRequest()));
}

