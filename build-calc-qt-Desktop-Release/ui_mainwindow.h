/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushbutton_point;
    QPushButton *pushbutton_backspace;
    QPushButton *pushbutton_mem_read;
    QPushButton *pushbutton_divide;
    QPushButton *pushbutton_percent;
    QPushButton *pushbutton_add;
    QPushButton *pushbutton8;
    QPushButton *pushutton_equals;
    QPushButton *pushbutton_square_root;
    QPushButton *pushbutton_minus;
    QPushButton *pushbutton6;
    QPushButton *pushbutton1;
    QPushButton *pushbutton_clear;
    QPushButton *mem_add;
    QPushButton *pushbutton0;
    QPushButton *pushbutton2;
    QPushButton *pushbutton_multiply;
    QPushButton *pushbutton5;
    QPushButton *pushbutton7;
    QPushButton *pushbutton3;
    QPushButton *pushbutton4;
    QPushButton *mem_clear;
    QPushButton *pushbutton9;
    QPushButton *pushbutton_plus_minus;
    QLabel *label;
    QFrame *frame;
    QMenuBar *menubar;
    QMenu *menuInfo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(375, 434);
        QIcon icon;
        icon.addFile(QString::fromUtf8("kalcqulator_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("kalcqulator_icon.png"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 20, 338, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushbutton_point = new QPushButton(gridLayoutWidget);
        pushbutton_point->setObjectName("pushbutton_point");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushbutton_point->sizePolicy().hasHeightForWidth());
        pushbutton_point->setSizePolicy(sizePolicy);
        pushbutton_point->setMinimumSize(QSize(64, 48));
        pushbutton_point->setMaximumSize(QSize(64, 48));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cantarell")});
        font.setPointSize(15);
        font.setBold(true);
        pushbutton_point->setFont(font);
        pushbutton_point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	     \n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:0.985222, y2:0, stop:0 rgba(60, 63, 60, 255), stop:0.605911 rgba(255, 156, 68, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	     	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:0.985222, y2:0, stop:0 rgba(138, 106, 82, 255), stop:0.704433 rgba(249, 204, 164, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushbutton_point, 6, 2, 1, 1);

        pushbutton_backspace = new QPushButton(gridLayoutWidget);
        pushbutton_backspace->setObjectName("pushbutton_backspace");
        sizePolicy.setHeightForWidth(pushbutton_backspace->sizePolicy().hasHeightForWidth());
        pushbutton_backspace->setSizePolicy(sizePolicy);
        pushbutton_backspace->setMinimumSize(QSize(64, 48));
        pushbutton_backspace->setMaximumSize(QSize(64, 48));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cantarell")});
        font1.setPointSize(12);
        font1.setBold(true);
        pushbutton_backspace->setFont(font1);
        pushbutton_backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:reflect, x1:0.522, y1:0.0113636, x2:0.537, y2:1, stop:0 rgba(255, 252, 93, 255), stop:1 rgba(88, 88, 0, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	     \n"
"	background-color: qlineargradient(spread:reflect, x1:0.522, y1:0.0113636, x2:0.537, y2:1, stop:0 rgba(255, 253, 136, 255), stop:1 rgba(210, 210, 0, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushbutton_backspace, 5, 4, 1, 1);

        pushbutton_mem_read = new QPushButton(gridLayoutWidget);
        pushbutton_mem_read->setObjectName("pushbutton_mem_read");
        sizePolicy.setHeightForWidth(pushbutton_mem_read->sizePolicy().hasHeightForWidth());
        pushbutton_mem_read->setSizePolicy(sizePolicy);
        pushbutton_mem_read->setMinimumSize(QSize(64, 48));
        pushbutton_mem_read->setMaximumSize(QSize(64, 48));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cantarell")});
        font2.setPointSize(14);
        font2.setBold(true);
        pushbutton_mem_read->setFont(font2);
        pushbutton_mem_read->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:1, y2:0.0284091, stop:0 rgba(98, 0, 113, 255), stop:0.605911 rgba(255, 45, 255, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	     	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:1, y2:0.0284091, stop:0 rgba(194, 72, 212, 255), stop:0.605911 rgba(255, 164, 255, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushbutton_mem_read, 2, 4, 1, 1);

        pushbutton_divide = new QPushButton(gridLayoutWidget);
        pushbutton_divide->setObjectName("pushbutton_divide");
        sizePolicy.setHeightForWidth(pushbutton_divide->sizePolicy().hasHeightForWidth());
        pushbutton_divide->setSizePolicy(sizePolicy);
        pushbutton_divide->setMinimumSize(QSize(64, 48));
        pushbutton_divide->setMaximumSize(QSize(64, 48));
        pushbutton_divide->setFont(font2);
        pushbutton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0.552, y1:1, x2:0.542, y2:0, stop:0 rgba(32, 50, 111, 252), stop:1 rgba(108, 144, 187, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(spread:pad, x1:0.552, y1:1, x2:0.542, y2:0, stop:0 rgba(110, 123, 165, 252), stop:1 rgba(185, 203, 224, 255));\n"
"}"));

        gridLayout->addWidget(pushbutton_divide, 1, 3, 1, 1);

        pushbutton_percent = new QPushButton(gridLayoutWidget);
        pushbutton_percent->setObjectName("pushbutton_percent");
        sizePolicy.setHeightForWidth(pushbutton_percent->sizePolicy().hasHeightForWidth());
        pushbutton_percent->setSizePolicy(sizePolicy);
        pushbutton_percent->setMinimumSize(QSize(64, 48));
        pushbutton_percent->setMaximumSize(QSize(64, 48));
        pushbutton_percent->setFont(font);
        pushbutton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	     \n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:0.985222, y2:0, stop:0 rgba(60, 63, 60, 255), stop:0.605911 rgba(255, 156, 68, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	    	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:0.985222, y2:0, stop:0 rgba(138, 106, 82, 255), stop:0.704433 rgba(249, 204, 164, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushbutton_percent, 1, 2, 1, 1);

        pushbutton_add = new QPushButton(gridLayoutWidget);
        pushbutton_add->setObjectName("pushbutton_add");
        sizePolicy.setHeightForWidth(pushbutton_add->sizePolicy().hasHeightForWidth());
        pushbutton_add->setSizePolicy(sizePolicy);
        pushbutton_add->setMinimumSize(QSize(64, 48));
        pushbutton_add->setMaximumSize(QSize(64, 48));
        pushbutton_add->setFont(font2);
        pushbutton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0.552, y1:1, x2:0.542, y2:0, stop:0 rgba(32, 50, 111, 252), stop:1 rgba(108, 144, 187, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(spread:pad, x1:0.552, y1:1, x2:0.542, y2:0, stop:0 rgba(110, 123, 165, 252), stop:1 rgba(185, 203, 224, 255));\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton_add, 5, 3, 1, 1);

        pushbutton8 = new QPushButton(gridLayoutWidget);
        pushbutton8->setObjectName("pushbutton8");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushbutton8->sizePolicy().hasHeightForWidth());
        pushbutton8->setSizePolicy(sizePolicy1);
        pushbutton8->setMinimumSize(QSize(64, 48));
        pushbutton8->setMaximumSize(QSize(64, 48));
        pushbutton8->setFont(font);
        pushbutton8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   \n"
"	background-color: qlineargradient(spread:pad, x1:0.212, y1:1, x2:0.123, y2:0.0681818, stop:0 rgba(49, 49, 49, 255), stop:1 rgba(196, 196, 196, 255));\n"
"\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton8, 2, 1, 1, 1);

        pushutton_equals = new QPushButton(gridLayoutWidget);
        pushutton_equals->setObjectName("pushutton_equals");
        sizePolicy.setHeightForWidth(pushutton_equals->sizePolicy().hasHeightForWidth());
        pushutton_equals->setSizePolicy(sizePolicy);
        pushutton_equals->setMinimumSize(QSize(64, 48));
        pushutton_equals->setMaximumSize(QSize(64, 48));
        pushutton_equals->setFont(font2);
        pushutton_equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	     \n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:0.985222, y2:0, stop:0 rgba(60, 63, 60, 255), stop:0.605911 rgba(255, 156, 68, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	     	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:0.985222, y2:0, stop:0 rgba(138, 106, 82, 255), stop:0.704433 rgba(249, 204, 164, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushutton_equals, 6, 3, 1, 1);

        pushbutton_square_root = new QPushButton(gridLayoutWidget);
        pushbutton_square_root->setObjectName("pushbutton_square_root");
        sizePolicy.setHeightForWidth(pushbutton_square_root->sizePolicy().hasHeightForWidth());
        pushbutton_square_root->setSizePolicy(sizePolicy);
        pushbutton_square_root->setMinimumSize(QSize(64, 48));
        pushbutton_square_root->setMaximumSize(QSize(64, 48));
        pushbutton_square_root->setFont(font1);
        pushbutton_square_root->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:reflect, x1:0.522, y1:0.0113636, x2:0.537, y2:1, stop:0 rgba(255, 252, 93, 255), stop:1 rgba(88, 88, 0, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	     \n"
"	background-color: qlineargradient(spread:reflect, x1:0.522, y1:0.0113636, x2:0.537, y2:1, stop:0 rgba(255, 253, 136, 255), stop:1 rgba(210, 210, 0, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushbutton_square_root, 6, 4, 1, 1);

        pushbutton_minus = new QPushButton(gridLayoutWidget);
        pushbutton_minus->setObjectName("pushbutton_minus");
        sizePolicy.setHeightForWidth(pushbutton_minus->sizePolicy().hasHeightForWidth());
        pushbutton_minus->setSizePolicy(sizePolicy);
        pushbutton_minus->setMinimumSize(QSize(64, 48));
        pushbutton_minus->setMaximumSize(QSize(64, 48));
        pushbutton_minus->setFont(font2);
        pushbutton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0.552, y1:1, x2:0.542, y2:0, stop:0 rgba(32, 50, 111, 252), stop:1 rgba(108, 144, 187, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(spread:pad, x1:0.552, y1:1, x2:0.542, y2:0, stop:0 rgba(110, 123, 165, 252), stop:1 rgba(185, 203, 224, 255));\n"
"}"));

        gridLayout->addWidget(pushbutton_minus, 4, 3, 1, 1);

        pushbutton6 = new QPushButton(gridLayoutWidget);
        pushbutton6->setObjectName("pushbutton6");
        sizePolicy.setHeightForWidth(pushbutton6->sizePolicy().hasHeightForWidth());
        pushbutton6->setSizePolicy(sizePolicy);
        pushbutton6->setMinimumSize(QSize(64, 48));
        pushbutton6->setMaximumSize(QSize(64, 48));
        pushbutton6->setFont(font);
        pushbutton6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   \n"
"	background-color: qlineargradient(spread:pad, x1:0.212, y1:1, x2:0.123, y2:0.0681818, stop:0 rgba(49, 49, 49, 255), stop:1 rgba(196, 196, 196, 255));\n"
"\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton6, 4, 2, 1, 1);

        pushbutton1 = new QPushButton(gridLayoutWidget);
        pushbutton1->setObjectName("pushbutton1");
        sizePolicy.setHeightForWidth(pushbutton1->sizePolicy().hasHeightForWidth());
        pushbutton1->setSizePolicy(sizePolicy);
        pushbutton1->setMinimumSize(QSize(64, 48));
        pushbutton1->setMaximumSize(QSize(64, 48));
        pushbutton1->setFont(font);
        pushbutton1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   \n"
"	background-color: qlineargradient(spread:pad, x1:0.212, y1:1, x2:0.123, y2:0.0681818, stop:0 rgba(49, 49, 49, 255), stop:1 rgba(196, 196, 196, 255));\n"
"\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton1, 5, 0, 1, 1);

        pushbutton_clear = new QPushButton(gridLayoutWidget);
        pushbutton_clear->setObjectName("pushbutton_clear");
        sizePolicy.setHeightForWidth(pushbutton_clear->sizePolicy().hasHeightForWidth());
        pushbutton_clear->setSizePolicy(sizePolicy);
        pushbutton_clear->setMinimumSize(QSize(64, 48));
        pushbutton_clear->setMaximumSize(QSize(64, 48));
        pushbutton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	   	\n"
"	background-color: qlineargradient(spread:pad, x1:0.527, y1:0.988682, x2:0.527, y2:0, stop:0.133005 rgba(40, 117, 27, 255), stop:1 rgba(113, 215, 95, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	     background-color:#A9A9A9;\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushbutton_clear, 1, 0, 1, 1);

        mem_add = new QPushButton(gridLayoutWidget);
        mem_add->setObjectName("mem_add");
        sizePolicy.setHeightForWidth(mem_add->sizePolicy().hasHeightForWidth());
        mem_add->setSizePolicy(sizePolicy);
        mem_add->setMinimumSize(QSize(64, 48));
        mem_add->setMaximumSize(QSize(64, 48));
        mem_add->setFont(font2);
        mem_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:1, y2:0.0284091, stop:0 rgba(98, 0, 113, 255), stop:0.605911 rgba(255, 45, 255, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	     \n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:1, y2:0.0284091, stop:0 rgba(194, 72, 212, 255), stop:0.605911 rgba(255, 164, 255, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(mem_add, 1, 4, 1, 1);

        pushbutton0 = new QPushButton(gridLayoutWidget);
        pushbutton0->setObjectName("pushbutton0");
        sizePolicy1.setHeightForWidth(pushbutton0->sizePolicy().hasHeightForWidth());
        pushbutton0->setSizePolicy(sizePolicy1);
        pushbutton0->setMinimumSize(QSize(64, 48));
        pushbutton0->setMaximumSize(QSize(139, 48));
        pushbutton0->setFont(font);
        pushbutton0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   \n"
"	background-color: qlineargradient(spread:pad, x1:0.212, y1:1, x2:0.123, y2:0.0681818, stop:0 rgba(49, 49, 49, 255), stop:1 rgba(196, 196, 196, 255));\n"
"\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton0, 6, 0, 1, 2);

        pushbutton2 = new QPushButton(gridLayoutWidget);
        pushbutton2->setObjectName("pushbutton2");
        sizePolicy.setHeightForWidth(pushbutton2->sizePolicy().hasHeightForWidth());
        pushbutton2->setSizePolicy(sizePolicy);
        pushbutton2->setMinimumSize(QSize(64, 48));
        pushbutton2->setMaximumSize(QSize(64, 48));
        pushbutton2->setFont(font);
        pushbutton2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   \n"
"	background-color: qlineargradient(spread:pad, x1:0.212, y1:1, x2:0.123, y2:0.0681818, stop:0 rgba(49, 49, 49, 255), stop:1 rgba(196, 196, 196, 255));\n"
"\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton2, 5, 1, 1, 1);

        pushbutton_multiply = new QPushButton(gridLayoutWidget);
        pushbutton_multiply->setObjectName("pushbutton_multiply");
        sizePolicy.setHeightForWidth(pushbutton_multiply->sizePolicy().hasHeightForWidth());
        pushbutton_multiply->setSizePolicy(sizePolicy);
        pushbutton_multiply->setMinimumSize(QSize(64, 48));
        pushbutton_multiply->setMaximumSize(QSize(64, 48));
        pushbutton_multiply->setFont(font2);
        pushbutton_multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0.552, y1:1, x2:0.542, y2:0, stop:0 rgba(32, 50, 111, 252), stop:1 rgba(108, 144, 187, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(spread:pad, x1:0.552, y1:1, x2:0.542, y2:0, stop:0 rgba(110, 123, 165, 252), stop:1 rgba(185, 203, 224, 255));\n"
"}"));

        gridLayout->addWidget(pushbutton_multiply, 2, 3, 1, 1);

        pushbutton5 = new QPushButton(gridLayoutWidget);
        pushbutton5->setObjectName("pushbutton5");
        sizePolicy.setHeightForWidth(pushbutton5->sizePolicy().hasHeightForWidth());
        pushbutton5->setSizePolicy(sizePolicy);
        pushbutton5->setMinimumSize(QSize(64, 48));
        pushbutton5->setMaximumSize(QSize(64, 48));
        pushbutton5->setFont(font);
        pushbutton5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   \n"
"	background-color: qlineargradient(spread:pad, x1:0.212, y1:1, x2:0.123, y2:0.0681818, stop:0 rgba(49, 49, 49, 255), stop:1 rgba(196, 196, 196, 255));\n"
"\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton5, 4, 1, 1, 1);

        pushbutton7 = new QPushButton(gridLayoutWidget);
        pushbutton7->setObjectName("pushbutton7");
        sizePolicy.setHeightForWidth(pushbutton7->sizePolicy().hasHeightForWidth());
        pushbutton7->setSizePolicy(sizePolicy);
        pushbutton7->setMinimumSize(QSize(64, 48));
        pushbutton7->setMaximumSize(QSize(64, 48));
        pushbutton7->setFont(font);
        pushbutton7->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   \n"
"	background-color: qlineargradient(spread:pad, x1:0.212, y1:1, x2:0.123, y2:0.0681818, stop:0 rgba(49, 49, 49, 255), stop:1 rgba(196, 196, 196, 255));\n"
"\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton7, 2, 0, 1, 1);

        pushbutton3 = new QPushButton(gridLayoutWidget);
        pushbutton3->setObjectName("pushbutton3");
        sizePolicy.setHeightForWidth(pushbutton3->sizePolicy().hasHeightForWidth());
        pushbutton3->setSizePolicy(sizePolicy);
        pushbutton3->setMinimumSize(QSize(64, 48));
        pushbutton3->setMaximumSize(QSize(64, 48));
        pushbutton3->setFont(font);
        pushbutton3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   \n"
"	background-color: qlineargradient(spread:pad, x1:0.212, y1:1, x2:0.123, y2:0.0681818, stop:0 rgba(49, 49, 49, 255), stop:1 rgba(196, 196, 196, 255));\n"
"\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton3, 5, 2, 1, 1);

        pushbutton4 = new QPushButton(gridLayoutWidget);
        pushbutton4->setObjectName("pushbutton4");
        sizePolicy.setHeightForWidth(pushbutton4->sizePolicy().hasHeightForWidth());
        pushbutton4->setSizePolicy(sizePolicy);
        pushbutton4->setMinimumSize(QSize(64, 48));
        pushbutton4->setMaximumSize(QSize(64, 48));
        pushbutton4->setFont(font);
        pushbutton4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   \n"
"	background-color: qlineargradient(spread:pad, x1:0.212, y1:1, x2:0.123, y2:0.0681818, stop:0 rgba(49, 49, 49, 255), stop:1 rgba(196, 196, 196, 255));\n"
"\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton4, 4, 0, 1, 1);

        mem_clear = new QPushButton(gridLayoutWidget);
        mem_clear->setObjectName("mem_clear");
        sizePolicy.setHeightForWidth(mem_clear->sizePolicy().hasHeightForWidth());
        mem_clear->setSizePolicy(sizePolicy);
        mem_clear->setMinimumSize(QSize(64, 48));
        mem_clear->setMaximumSize(QSize(64, 48));
        mem_clear->setFont(font2);
        mem_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:1, y2:0.0284091, stop:0 rgba(98, 0, 113, 255), stop:0.605911 rgba(255, 45, 255, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	    	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:1, y2:0.0284091, stop:0 rgba(194, 72, 212, 255), stop:0.605911 rgba(255, 164, 255, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(mem_clear, 4, 4, 1, 1);

        pushbutton9 = new QPushButton(gridLayoutWidget);
        pushbutton9->setObjectName("pushbutton9");
        sizePolicy.setHeightForWidth(pushbutton9->sizePolicy().hasHeightForWidth());
        pushbutton9->setSizePolicy(sizePolicy);
        pushbutton9->setMinimumSize(QSize(64, 48));
        pushbutton9->setMaximumSize(QSize(64, 48));
        pushbutton9->setFont(font);
        pushbutton9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   \n"
"	background-color: qlineargradient(spread:pad, x1:0.212, y1:1, x2:0.123, y2:0.0681818, stop:0 rgba(49, 49, 49, 255), stop:1 rgba(196, 196, 196, 255));\n"
"\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        gridLayout->addWidget(pushbutton9, 2, 2, 1, 1);

        pushbutton_plus_minus = new QPushButton(gridLayoutWidget);
        pushbutton_plus_minus->setObjectName("pushbutton_plus_minus");
        sizePolicy.setHeightForWidth(pushbutton_plus_minus->sizePolicy().hasHeightForWidth());
        pushbutton_plus_minus->setSizePolicy(sizePolicy);
        pushbutton_plus_minus->setMinimumSize(QSize(64, 48));
        pushbutton_plus_minus->setMaximumSize(QSize(64, 48));
        pushbutton_plus_minus->setFont(font2);
        pushbutton_plus_minus->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:0.985222, y2:0, stop:0 rgba(60, 63, 60, 255), stop:0.605911 rgba(255, 156, 68, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.955, x2:0.985222, y2:0, stop:0 rgba(138, 106, 82, 255), stop:0.704433 rgba(249, 204, 164, 255));\n"
"		 border: 1px solid gray;\n"
"		padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushbutton_plus_minus, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Digital-7")});
        font3.setPointSize(32);
        font3.setBold(true);
        font3.setItalic(true);
        label->setFont(font3);
        label->setLayoutDirection(Qt::RightToLeft);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(46, 194, 126);\n"
"	border: 1px solid gray;\n"
"	color: rgb(36, 31, 49);\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
" \n"
"}\n"
""));
        label->setFrameShape(QFrame::Box);
        label->setLineWidth(4);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 5);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 351, 371));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralwidget);
        frame->raise();
        gridLayoutWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 375, 25));
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName("menuInfo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuInfo->menuAction());
        menuInfo->addAction(actionAbout);
        menuInfo->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Kalcqulator", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pushbutton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushbutton_backspace->setText(QCoreApplication::translate("MainWindow", "Bkspc", nullptr));
        pushbutton_mem_read->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        pushbutton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushbutton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushbutton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushbutton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushutton_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushbutton_square_root->setText(QCoreApplication::translate("MainWindow", "Sqrt", nullptr));
        pushbutton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushbutton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushbutton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushbutton_clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        mem_add->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        pushbutton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushbutton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushbutton_multiply->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushbutton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushbutton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushbutton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushbutton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        mem_clear->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        pushbutton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushbutton_plus_minus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
