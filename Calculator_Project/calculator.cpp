#include "calculator.h"
#include "./ui_calculator.h"

double calcVal = 0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
int counter = 0;


Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(calcVal)); //Display(Tak sie nazywa moje okno) ->setText(ustaw jakis Text, ta funkcja przyjmuje QStringa)(konwertowanie naszej zmiennej double do QSTRINGA)
    QPushButton *numButtons[10]; //-> chyba tablica naszych pushbuttonowo

    for(int i = 0; i <10; ++i){
        QString butName = "Button" + QString::number(i); //tak nazwe sa nasze buttony od 0 do 9
        numButtons[i] = Calculator::findChild<QPushButton *>(butName); // branie naszych buttonow ponazwie i wrzucenie do naszej tablicy/szukanie specyficznych widgetow

        connect(numButtons[i], SIGNAL(released()),this,
                SLOT(myCustomSlot())); // Jeżeli nasz button podany jest released niech wywoluje sie funkcja mycustomSlot
        connect(numButtons[i], SIGNAL(released()),this,
                SLOT(NumPressed())); // Jeżeli nasz button podany jest released niech wywoluje sie funkcja numPressed
    }

    connect(ui->Add,SIGNAL(released()),this,SLOT(MathButtonPressed()));


    connect(ui->Equals,SIGNAL(released()),this,SLOT(EqualButton()));

}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::myCustomSlot(){
    QPushButton *button = (QPushButton *)sender(); // Przypisuje do button to co bylo wcisniete

    qDebug() << " Wcisnales " + button->text();
}

void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();

    QString butval = button->text();  //To co jest na buttonie (jaki tekst)
    QString displayVal = ui->Display->text(); //To co wyswietla sie na display

    if((displayVal.toDouble() == 0 ) || (displayVal.toDouble() == 0.0 )){
        ui->Display->setText(butval);
    }else{
        QString newVal = displayVal + butval;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal));
    }
}

void Calculator::MathButtonPressed(){
     //calcVal = 0;
     divTrigger = false;
     multTrigger = false;
     //addTrigger = false;
     subTrigger = false;

     QPushButton *button = (QPushButton *)sender();

     QString butval = button->text();
     QString currentVal = ui->Display->text();

     if(butval == "+" && addTrigger == false){
         addTrigger = true;
         calcVal = currentVal.toDouble();
         ui->Display->setText("");
     }else if(butval == "+" && addTrigger == true){
         calcVal += currentVal.toDouble();
         ui->Display->setText("");
     }

}

void Calculator::EqualButton(){

     QString butval = ui->Display->text();

     if(addTrigger){
         calcVal += butval.toDouble();
         ui->Display->setText(QString::number(calcVal));
     }

     calcVal = 0;
     divTrigger = false;
     multTrigger = false;
     addTrigger = false;
     subTrigger = false;
     counter = 0;

}


