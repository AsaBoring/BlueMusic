#include <QApplication>

#include "View.h"
#include "ProcessModel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    View w;
    ProcessModel pm(&w);
    w.show();
    return a.exec();
}
