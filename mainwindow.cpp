#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "recipes.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    this->setFixedSize(QSize(800, 600));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    recipes rm;
    rm.setModal(true);
    rm.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    exit(0);
}


void MainWindow::on_actionExit_triggered()
{
    exit(0);
}


void MainWindow::on_verticalSlider_actionTriggered(int action)
{

}


void MainWindow::on_verticalSlider_valueChanged(int value)
{
    QPixmap mypix (":/icons/background.jpg");
    QPixmap mypix1 (":/icons/backgroundpix8.png");
    if((ui->verticalSlider->value()) == 1) {
        ui->label->setPixmap(mypix1);
    }
    if((ui->verticalSlider->value()) == 0) {
        ui->label->setPixmap(mypix);
    }
}

