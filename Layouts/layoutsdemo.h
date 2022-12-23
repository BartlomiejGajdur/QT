#ifndef LAYOUTSDEMO_H
#define LAYOUTSDEMO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LayoutsDemo; }
QT_END_NAMESPACE

class LayoutsDemo : public QMainWindow
{
    Q_OBJECT

public:
    LayoutsDemo(QWidget *parent = nullptr);
    ~LayoutsDemo();

private:
    Ui::LayoutsDemo *ui;
};
#endif // LAYOUTSDEMO_H
