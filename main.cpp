#include <QApplication>
#include "startup.h"
#include <QTableWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Startup start_up;

    QTableWidget* table = new QTableWidget();
    table->setRowCount(1);
    table->setColumnCount(3);
    //Set Header Label Texts Here
    table->setHorizontalHeaderLabels(QString("HEADER 1;HEADER 2;HEADER 3").split(";"));

    start_up.show();

    return a.exec();
}
