#include "serverdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    serverDialog w;
    w.show();
    return a.exec();
}
