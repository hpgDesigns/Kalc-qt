#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

double firstNum;
bool userIsTyingSecondNumber = false;
double sumInMemory;
double sumSoFar;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), sumInMemory(0.0)
    , sumSoFar(0.0),factorSoFar(0.0)
{
    ui->setupUi(this);

    setGeometry (400,250, 378,435);
    setWindowIcon (QIcon (":/new/icons/kalcqulator_icon.png"));

    connect(ui->pushbutton0, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->pushbutton1, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->pushbutton2, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->pushbutton3, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->pushbutton4, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->pushbutton5, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->pushbutton6, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->pushbutton7, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->pushbutton8, SIGNAL(released()),this, SLOT(digit_pressed()));
    connect(ui->pushbutton9, SIGNAL(released()),this, SLOT(digit_pressed()));

    connect(ui->pushbutton_plus_minus, SIGNAL(released()),this, SLOT(unary_operation_released()));
    connect(ui->pushbutton_percent, SIGNAL(released()),this, SLOT(unary_operation_released()));
    connect(ui->pushbutton_square_root, SIGNAL (released()), this, SLOT(unary_operation_released()));

    connect(ui->pushbutton_add, SIGNAL(released()),this, SLOT(binary_operation_released()));
    connect(ui->pushbutton_minus, SIGNAL(released()),this, SLOT(binary_operation_released()));
    connect(ui->pushbutton_multiply, SIGNAL(released()),this, SLOT(binary_operation_released()));
    connect(ui->pushbutton_divide, SIGNAL(released()),this, SLOT(binary_operation_released()));

    connect(ui->pushbutton_mem_read, SIGNAL(released()),this, SLOT(clearMemory()));

    ui->pushbutton_add->setCheckable (true);
    ui->pushbutton_minus->setCheckable (true);
    ui->pushbutton_multiply->setCheckable (true);
    ui->pushbutton_divide->setCheckable (true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    //qDebug() << "test";

    QPushButton *button = (QPushButton*) sender();

    double labelNumber;
    QString newLabel;

    if (ui->pushbutton_add->isChecked () || ui->pushbutton_minus->isChecked ()
        || ui->pushbutton_multiply->isChecked ()
        || (ui->pushbutton_divide->isChecked () && (!userIsTyingSecondNumber)))
    {
        labelNumber = button->text().toDouble();
        userIsTyingSecondNumber = true;
        newLabel = QString::number(labelNumber, 'g', 15);
    }else
    {
        if(ui->label->text().contains('.')&& button->text()=="0")
        {
            newLabel =  (ui->label->text() + button->text());
        }else
        {
        labelNumber = (ui->label->text() + button->text()).toDouble();
        newLabel = QString::number(labelNumber, 'g', 15);
        }
    }
    ui->label->setText(newLabel);
}

void MainWindow::on_pushbutton_point_released()
{
    ui->label->setText (ui->label->text()+".");
}

void MainWindow::unary_operation_released()
{
    QPushButton *button = (QPushButton*) sender();

    //double operand = ui->label->text().toDouble();
    //double result;
    double labelNumber;
    QString newLabel;

    if (button->text()== "Sqrt")
    {
        labelNumber = ui->label->text().toDouble();
        labelNumber = pow(labelNumber, 2);
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
    }

    //check for plus/minus
    if (button->text() == "+/-")
        {
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        }

    //check for percentage
        if (button->text() == "%")
        {
            labelNumber = ui->label->text().toDouble();
            labelNumber = labelNumber * 0.01;
            newLabel = QString::number(labelNumber, 'g', 15);
            ui->label->setText(newLabel);
        }
}

void MainWindow::on_pushbutton_clear_released()
{
    ui->pushbutton_add->setChecked (false);
    ui->pushbutton_minus->setChecked (false);
    ui->pushbutton_multiply->setChecked (false);
    ui->pushbutton_divide->setChecked (false);

    userIsTyingSecondNumber = false;

    ui->label->setText ("0");
}

void MainWindow::on_pushutton_equals_released()
{
    double labelNumber, secondNum;
    QString newLabel;

    secondNum = ui->label->text().toDouble ();

    if (ui->pushbutton_add->isChecked ())
    {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushbutton_add->setChecked (false);
    }
    else if (ui->pushbutton_minus->isChecked ())
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushbutton_minus->setChecked (false);
    }
    else if (ui->pushbutton_multiply->isChecked ())
    {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushbutton_multiply->setChecked (false);
    }
    else if (ui->pushbutton_divide->isChecked ())
    {
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushbutton_divide->setChecked (false);
    }
    userIsTyingSecondNumber = false;
}

void MainWindow::binary_operation_released()
{
    QPushButton *button = (QPushButton*) sender();

    firstNum = ui->label->text().toDouble ();

    button->setChecked (true);

}

void MainWindow::on_pushbutton_backspace_released()
{
    QString text = ui->label->text();
    text.chop(1);
    if (text.isEmpty()) {
        text = "0";
       // waitingForOperand = true;
    }
    ui->label->setText(text);
}

void MainWindow::clearMemory()
{
    sumInMemory = 0.0;
}

void MainWindow::setMemory()
{

}

void MainWindow::addToMemory()
{

}

void MainWindow::backspaceClicked()
{

}

void MainWindow::on_mem_add_released()
{
    sumInMemory += ui->label->text().toDouble();
}

void MainWindow::on_mem_clear_released()
{
   // ui->label->setText(QString::number(sumInMemory));
    sumInMemory = 0.0;
}


void MainWindow::on_pushbutton_mem_read_released()
{
    ui->label->setText(QString::number(sumInMemory));
}


void MainWindow::on_pushbutton_square_root_released()
{
    (ui->label->text().toDouble () * ui->label->text().toDouble ());
   // ui->label->setText(QString::number(sumInMemory));
}


void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, tr("About"), tr("This app was created by Hugh Greene "
                                             "using the QT Creator, a cross platform application builder "
                                             "for Linux, Mac and Windows."));
}

