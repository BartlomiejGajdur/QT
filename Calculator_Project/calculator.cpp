#include "calculator.h"
#include "./ui_calculator.h"

double calcVal = 1.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;


Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(calcVal)); //Display(Tak sie nazywa moje okno) ->setText(ustaw jakis Text, ta funkcja przyjmuje QStringa)(konwertowanie naszej zmiennej double do QSTRINGA)
    QPushButton *numButtons[10]; //-> chyba tablica naszych pushbuttonowo

    for(int i = 0; i <10; ++i){
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()),this,
                SLOT(NumPressed));
    }
}

Calculator::~Calculator()
{
    delete ui;
}



