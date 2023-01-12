#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

    enum class Trigger{
        Add=1,Substract,Multiply,Divide,Clear
    };

private:
    Ui::Calculator *ui;

    void setTrigger(const Trigger& trigger);

private slots:
     void NumPressed();
     void MathButtonPressed();
     void EqualButton();
     void ChangeNumberSign();
     void AcCLEAR();
     void clearLast();
     void on_actionREADME_triggered();
     void AddMEMORY();
     void SubstractMEMORY();
     void ShowMemory();
};
#endif // CALCULATOR_H
