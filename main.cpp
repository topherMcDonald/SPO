#include <QApplication>
#include "startup.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TophersNameSpace::Startup start_up;
    start_up.show();
    return a.exec();
}
