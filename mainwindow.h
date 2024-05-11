#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMath>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    double sumInMemory;
    double sumSoFar;
    double factorSoFar;

private slots:
    void digit_pressed();

    void on_pushbutton_point_released();
    void unary_operation_released();
    void on_pushbutton_clear_released();
    void on_pushutton_equals_released();
    void binary_operation_released();
    void clearMemory();
    void setMemory();
    void addToMemory();
    void backspaceClicked();

    void on_pushbutton_backspace_released();
    void on_mem_add_released();
    void on_mem_clear_released();
    void on_pushbutton_mem_read_released();
    void on_pushbutton_square_root_released();
    void on_actionExit_triggered();
    void on_actionAbout_triggered();
};
#endif // MAINWINDOW_H
