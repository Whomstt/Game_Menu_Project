#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    exit(0);
}


void MainWindow::on_pushButton_clicked()
{

    ui->label->hide();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
}

