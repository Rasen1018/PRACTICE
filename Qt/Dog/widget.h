#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QObject>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void initTestCase();
    void init();
    void cleanup();
    void cleanupTestCase();
    void bark();
    void rollover();
};
#endif // WIDGET_H
