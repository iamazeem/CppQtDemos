#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <cstdlib>
#include <ctime>
#include <QDebug>

MainWindow::MainWindow( QWidget *parent ) :
                        QMainWindow( parent ),
                        ui( new Ui::MainWindow )
{
    ui->setupUi( this );
    setDefaults();
    isClicked = false;
    srand( time(NULL) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setDefaults()
{
    int btnWidth  = ui->btnClickMe->width();
    int btnHeight = ui->btnClickMe->height();
    int btnX = btnWidth  / 2;
    int btnY = btnHeight / 2;

    int pgWidth  = ui->grpPlayground->width();
    int pgHeight = ui->grpPlayground->height();
    int pgX = pgWidth  / 2;
    int pgY = pgHeight / 2;

    int x = pgX - btnX;
    int y = pgY - btnY;

    ui->btnClickMe->setGeometry( x, y, btnWidth, btnHeight );
}

void MainWindow::on_btnClickMe_pressed()
{
    if( isClicked )
    {
        ui->lblClickMe->setText("Click on the Click Me! button if you can!");
        isClicked = false;
    }

    int btnWidth  = ui->btnClickMe->width();
    int btnHeight = ui->btnClickMe->height();
    int xValue = ui->grpPlayground->width()  - btnWidth  - 8;
    int yValue = ui->grpPlayground->height() - btnHeight - 8;

    int x = 0;
    int y = 0;
    for( int i = 0; i < rand()%10; ++i )
    {
        x = rand() % xValue;
        y = rand() % yValue;
    }

    if( x == 0 ) x = 8;
    if( y == 0 ) y = 8;

    ui->btnClickMe->setGeometry( x, y, btnWidth, btnHeight );
}

void MainWindow::on_btnClickMe_released()
{
    isClicked = true;
    ui->lblClickMe->setText("Finally! You clicked! :)");
}
