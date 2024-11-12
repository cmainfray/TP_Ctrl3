#include "testtapis.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestTapis w;
    w.show();
    return a.exec();
}
