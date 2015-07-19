#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QPushButton;

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnClickMe_pressed();
    void on_btnClickMe_released();

private:
    Ui::MainWindow *ui;
    bool isClicked;
    int counter;
    QPushButton * newbutton;
    void setDefaults();
};

#endif // MAINWINDOW_H
