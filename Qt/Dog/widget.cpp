#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    qInfo() << "Constructor";
}

Widget::~Widget()
{
}

void Widget::initTestCase()
{
    qInfo() << "initTestCase";
}

void Widget::init()
{
    qInfo() << "init";
}

void Widget::cleanup()
{
    qInfo() << "cleanup";
}

void Widget::cleanupTestCase()
{
    qInfo() << "cleanupTestCase";
}

void Widget::bark()
{
    qInfo() << "bark bark bark";
}

void Widget::rollover()
{
    qInfo() << "***rolls***";
}
