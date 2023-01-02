#include "widget.h"

#include <QApplication>
#include <QTest>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    QTest::qExec(&w);
    w.show();
    return a.exec();
}
