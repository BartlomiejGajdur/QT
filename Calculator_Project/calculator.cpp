#include "calculator.h"
#include "./ui_calculator.h"

double calcVal = 0.0;
double MemoryVal = 0.0;

bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

bool IsEqualWasBefore = false;



Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];

    for(int i = 0; i <10; ++i){
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);

        connect(numButtons[i], SIGNAL(released()),this,
                SLOT(NumPressed()));
    }

    connect(ui->Add,SIGNAL(released()),this,SLOT(MathButtonPressed()));

    connect(ui->Substract,SIGNAL(released()),this,SLOT(MathButtonPressed()));

    connect(ui->Multiply,SIGNAL(released()),this,SLOT(MathButtonPressed()));

    connect(ui->Divide,SIGNAL(released()),this,SLOT(MathButtonPressed()));

    connect(ui->Equals,SIGNAL(released()),this,SLOT(EqualButton()));

    connect(ui->Clear, SIGNAL(released()),this,SLOT(AcCLEAR()));

    connect(ui->ClearLast, SIGNAL(released()),this,SLOT(clearLast()));

    connect(ui->ChangeSign, SIGNAL(released()),this,SLOT(ChangeNumberSign()));

    connect(ui->MemAdd,SIGNAL(released()),this,SLOT(AddMEMORY()));

    connect(ui->MemSubstract,SIGNAL(released()),this,SLOT(SubstractMEMORY()));

    connect(ui->MemGet,SIGNAL(released()),this,SLOT(ShowMemory()));

}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::setTrigger(const Calculator::Trigger& trigger){
    ui->Display->setText("");

    switch (trigger) {
    case Calculator::Trigger::Add:
        addTrigger = true;
        subTrigger = false;
        multTrigger = false;
        divTrigger = false;
        break;
    case Calculator::Trigger::Substract:
        addTrigger = false;
        subTrigger = true;
        multTrigger = false;
        divTrigger = false;
        break;
    case Calculator::Trigger::Multiply:
        addTrigger = false;
        subTrigger = false;
        multTrigger = true;
        divTrigger = false;
        break;
    case Calculator::Trigger::Divide:
        addTrigger = false;
        subTrigger = false;
        multTrigger = false;
        divTrigger = true;
        break;
    case Calculator::Trigger::Clear:
        addTrigger = false;
        subTrigger = false;
        multTrigger = false;
        divTrigger = false;
        break;
    default:
       qDebug() << "Enter properly Trigger name to set to true";
        break;
    }
}

void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();

    QString butval = button->text();
    QString displayVal = ui->Display->text();

    if((displayVal.toDouble() == 0 ) || (displayVal.toDouble() == 0.0 )){
        ui->Display->setText(butval);
    }else{
        QString newVal = displayVal + butval;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal));
    }
}

void Calculator::MathButtonPressed(){

     QPushButton *button = (QPushButton *)sender();

     QString butval = button->text();
     QString currentVal = ui->Display->text();

     bool prevOperationDONE =false;

         if(addTrigger)
         {
             calcVal += currentVal.toDouble();
             prevOperationDONE = true;

         }else if(subTrigger)
         {
             calcVal -= currentVal.toDouble();
              prevOperationDONE = true;

         }else if(multTrigger)
         {
             calcVal *= currentVal.toDouble();
             prevOperationDONE = true;

         }else if(divTrigger)
         {
             calcVal /= currentVal.toDouble();
             prevOperationDONE = true;
         }



     if(butval == "+")
     {
         if(calcVal == 0.0 || IsEqualWasBefore){
             calcVal = currentVal.toDouble();
         }

           else if(!prevOperationDONE){
              calcVal += currentVal.toDouble();
            }
             setTrigger(Calculator::Trigger::Add);

     }else if(butval == "-")
     {
             if(calcVal == 0.0 || IsEqualWasBefore){
                 calcVal = currentVal.toDouble();
             }else if(!prevOperationDONE){
                calcVal-=currentVal.toDouble();
             }
             setTrigger(Calculator::Trigger::Substract);

     }else if(butval == "*")
     {
            if(calcVal == 0.0 || IsEqualWasBefore){
                calcVal = currentVal.toDouble();
            }else if(!prevOperationDONE){
                calcVal*=currentVal.toDouble();
            }
             setTrigger(Calculator::Trigger::Multiply);

      }else if(butval == "/")
     {
             if(calcVal == 0.0|| IsEqualWasBefore){
                 calcVal = currentVal.toDouble();
             }else if(!prevOperationDONE){
                 calcVal/=currentVal.toDouble();
             }
             setTrigger(Calculator::Trigger::Divide);
     }

    IsEqualWasBefore = false;

}

void Calculator::EqualButton(){

     QString butval = ui->Display->text();

     if(addTrigger){
         calcVal += butval.toDouble();
         ui->Display->setText(QString::number(calcVal));
     }else if(subTrigger){
         calcVal -= butval.toDouble();
         ui->Display->setText(QString::number(calcVal));
     }else if(multTrigger){
         calcVal *= butval.toDouble();
         ui->Display->setText(QString::number(calcVal));
     }else if(divTrigger){
         calcVal /= butval.toDouble();
         ui->Display->setText(QString::number(calcVal));
     }

     setTrigger(Calculator::Trigger::Clear);
     ui->Display->setText(QString::number(calcVal));
     IsEqualWasBefore = true;
}

void Calculator::AcCLEAR(){
    setTrigger(Calculator::Trigger::Clear);
    MemoryVal = 0.0;
    calcVal = 0.0;
    IsEqualWasBefore = false;

    ui->Display->setText(QString::number(calcVal));
}

void Calculator::ChangeNumberSign(){
    QString currentString = ui->Display->text();

    if(currentString[0] == '-'){
        currentString.erase(currentString.begin(),currentString.begin()+1);
        ui->Display->setText(currentString);
    }else{
        currentString = '-'+currentString;
        ui->Display->setText(currentString);
    }
}

void Calculator::clearLast(){
    QString currentString = ui->Display->text();
    currentString.erase(currentString.end()-1,currentString.end());
    ui->Display->setText(currentString);
    if((ui->Display->text().toDouble() == 0 ) || (ui->Display->text().toDouble() == 0.0 )){
        ui->Display->setText(QString::number(0.0));
    }

}

void Calculator::AddMEMORY(){
    MemoryVal += ui->Display->text().toDouble();
}

void Calculator::SubstractMEMORY(){
    MemoryVal -=  ui->Display->text().toDouble();
}

void Calculator::ShowMemory(){
    ui->Display->setText(QString::number(MemoryVal));
}

void Calculator::on_actionREADME_triggered()
{
    QMessageBox::information(this,"title","README");
}

