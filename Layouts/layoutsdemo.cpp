#include "layoutsdemo.h"
#include "./ui_layoutsdemo.h"

LayoutsDemo::LayoutsDemo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LayoutsDemo)
{
    ui->setupUi(this);
}

LayoutsDemo::~LayoutsDemo()
{
    delete ui;
}

