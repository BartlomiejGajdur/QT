/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QAction *actionAha;
    QAction *actionAGA;
    QAction *actionReadme;
    QAction *actionREADME;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *Layout;
    QPushButton *Multiply;
    QPushButton *MemGet;
    QPushButton *Button0;
    QPushButton *Button9;
    QPushButton *Button1;
    QPushButton *Button3;
    QVBoxLayout *verticalLayout;
    QPushButton *Clear;
    QPushButton *ClearLast;
    QPushButton *Button2;
    QPushButton *Button5;
    QPushButton *Button8;
    QPushButton *Button6;
    QPushButton *MemAdd;
    QPushButton *Divide;
    QPushButton *Equals;
    QPushButton *ChangeSign;
    QPushButton *Button7;
    QPushButton *Button4;
    QPushButton *Add;
    QPushButton *MemSubstract;
    QPushButton *Substract;
    QLineEdit *Display;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMenu_Bar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(631, 703);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setMinimumSize(QSize(363, 500));
        Calculator->setLayoutDirection(Qt::LeftToRight);
        Calculator->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color: rgba(46,58,81,255);\n"
"margin: 0px;\n"
"padding: 0px;\n"
"\n"
"}"));
        actionAha = new QAction(Calculator);
        actionAha->setObjectName("actionAha");
        actionAGA = new QAction(Calculator);
        actionAGA->setObjectName("actionAGA");
        actionReadme = new QAction(Calculator);
        actionReadme->setObjectName("actionReadme");
        actionREADME = new QAction(Calculator);
        actionREADME->setObjectName("actionREADME");
        actionREADME->setCheckable(true);
        actionREADME->setEnabled(true);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgba(46,58,81,255);\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Layout = new QGridLayout();
        Layout->setObjectName("Layout");
        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
        Multiply->setMaximumSize(QSize(100, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(20);
        font.setBold(false);
        Multiply->setFont(font);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 30px;\n"
"	margin:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        Layout->addWidget(Multiply, 2, 3, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName("MemGet");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy2);
        MemGet->setMaximumSize(QSize(100, 100));
        MemGet->setFont(font);
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 30px;\n"
"	margin:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        Layout->addWidget(MemGet, 3, 4, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        Button0->setFont(font1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(46,58,81,255);\n"
"color: rgba(150,166,160,255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(46,58,81,255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        Layout->addWidget(Button0, 4, 1, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        sizePolicy3.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy3);
        Button9->setFont(font1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(46,58,81,255);\n"
"color: rgba(150,166,160,255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(46,58,81,255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        Layout->addWidget(Button9, 1, 2, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        sizePolicy3.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy3);
        Button1->setFont(font1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(46,58,81,255);\n"
"color: rgba(150,166,160,255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(46,58,81,255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        Layout->addWidget(Button1, 3, 0, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        sizePolicy3.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy3);
        Button3->setFont(font1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(46,58,81,255);\n"
"color: rgba(150,166,160,255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(46,58,81,255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        Layout->addWidget(Button3, 3, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        sizePolicy3.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe Script")});
        font2.setPointSize(13);
        font2.setBold(false);
        Clear->setFont(font2);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 50%;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        verticalLayout->addWidget(Clear);

        ClearLast = new QPushButton(centralwidget);
        ClearLast->setObjectName("ClearLast");
        sizePolicy3.setHeightForWidth(ClearLast->sizePolicy().hasHeightForWidth());
        ClearLast->setSizePolicy(sizePolicy3);
        ClearLast->setFont(font2);
        ClearLast->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 50%;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        verticalLayout->addWidget(ClearLast);


        Layout->addLayout(verticalLayout, 4, 0, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        sizePolicy3.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy3);
        Button2->setFont(font1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(46,58,81,255);\n"
"color: rgba(150,166,160,255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(46,58,81,255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        Layout->addWidget(Button2, 3, 1, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        sizePolicy3.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy3);
        Button5->setFont(font1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(46,58,81,255);\n"
"color: rgba(150,166,160,255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(46,58,81,255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        Layout->addWidget(Button5, 2, 1, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        sizePolicy3.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy3);
        Button8->setFont(font1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(46,58,81,255);\n"
"color: rgba(150,166,160,255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(46,58,81,255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        Layout->addWidget(Button8, 1, 1, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        sizePolicy3.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy3);
        Button6->setFont(font1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(46,58,81,255);\n"
"color: rgba(150,166,160,255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(46,58,81,255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        Layout->addWidget(Button6, 2, 2, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName("MemAdd");
        sizePolicy2.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy2);
        MemAdd->setMaximumSize(QSize(100, 100));
        MemAdd->setFont(font);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 30px;\n"
"	margin:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        Layout->addWidget(MemAdd, 1, 4, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        sizePolicy2.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy2);
        Divide->setMaximumSize(QSize(100, 100));
        Divide->setFont(font);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 30px;\n"
"	margin:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        Layout->addWidget(Divide, 1, 3, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName("Equals");
        sizePolicy2.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy2);
        Equals->setMaximumSize(QSize(100, 100));
        Equals->setFont(font);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 30px;\n"
"	margin:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        Layout->addWidget(Equals, 4, 4, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName("ChangeSign");
        sizePolicy2.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy2);
        ChangeSign->setMaximumSize(QSize(100, 100));
        ChangeSign->setFont(font);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 30px;\n"
"	margin:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        Layout->addWidget(ChangeSign, 4, 2, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        sizePolicy3.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy3);
        Button7->setFont(font1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(46,58,81,255);\n"
"color: rgba(150,166,160,255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(46,58,81,255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        Layout->addWidget(Button7, 1, 0, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        sizePolicy3.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy3);
        Button4->setFont(font1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(46,58,81,255);\n"
"color: rgba(150,166,160,255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgba(46,58,81,255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        Layout->addWidget(Button4, 2, 0, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        sizePolicy2.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy2);
        Add->setMaximumSize(QSize(100, 100));
        Add->setFont(font);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 30px;\n"
"	margin:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        Layout->addWidget(Add, 3, 3, 1, 1);

        MemSubstract = new QPushButton(centralwidget);
        MemSubstract->setObjectName("MemSubstract");
        sizePolicy2.setHeightForWidth(MemSubstract->sizePolicy().hasHeightForWidth());
        MemSubstract->setSizePolicy(sizePolicy2);
        MemSubstract->setMaximumSize(QSize(100, 100));
        MemSubstract->setFont(font);
        MemSubstract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 30px;\n"
"	margin:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        Layout->addWidget(MemSubstract, 2, 4, 1, 1);

        Substract = new QPushButton(centralwidget);
        Substract->setObjectName("Substract");
        sizePolicy2.setHeightForWidth(Substract->sizePolicy().hasHeightForWidth());
        Substract->setSizePolicy(sizePolicy2);
        Substract->setMaximumSize(QSize(100, 100));
        Substract->setFont(font);
        Substract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(34,43,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
" 	border-radius: 30px;\n"
"	margin:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"\n"
"	color: black;\n"
"}"));

        Layout->addWidget(Substract, 4, 3, 1, 1);


        gridLayout->addLayout(Layout, 1, 0, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy4);
        Display->setMaximumSize(QSize(16777215, 150));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(24);
        font3.setBold(true);
        Display->setFont(font3);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgba(34,44,65,255);\n"
"	color:rgba(17,177,135,255) ;\n"
"	border: 2px solid rgba(34,44,65,255);\n"
"\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 631, 25));
        menubar->setStyleSheet(QString::fromUtf8(""));
        menuMenu_Bar = new QMenu(menubar);
        menuMenu_Bar->setObjectName("menuMenu_Bar");
        Calculator->setMenuBar(menubar);

        menubar->addAction(menuMenu_Bar->menuAction());
        menuMenu_Bar->addAction(actionREADME);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        actionAha->setText(QCoreApplication::translate("Calculator", "Aha", nullptr));
        actionAGA->setText(QCoreApplication::translate("Calculator", "AGA", nullptr));
        actionReadme->setText(QCoreApplication::translate("Calculator", "Readme", nullptr));
        actionREADME->setText(QCoreApplication::translate("Calculator", "README", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        MemGet->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        ClearLast->setText(QCoreApplication::translate("Calculator", "CE", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        MemAdd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        MemSubstract->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        Substract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        menuMenu_Bar->setTitle(QCoreApplication::translate("Calculator", "Menu Bar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
