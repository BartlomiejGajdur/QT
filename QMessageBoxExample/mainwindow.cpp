#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //QMessageBox::about(this,"Message","Wow! You just clicked a buttton!");
    //QMessageBox::aboutQt(this,"Message");
    //QMessageBox::critical(this,"My Title","this is my custom message! CRITICAL");
    //QMessageBox::information(this,"My Title","this is my custom message! CRITICAL");
    //QMessageBox::question(this,"My Title","this is my custom message! CRITICAL");
    //QMessageBox::warning(this,"My Title","this is my custom message! CRITICAL");
    QMessageBox::StandardButton reply =QMessageBox::question(this,"My Title","this is my custom message! CRITICAL",
                          QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes){
        QApplication::quit();
    }else{
        QMessageBox::about(this,"Message","Wow! You just clicked no!");
        qDebug() << "NO is clicked";
    }

}

