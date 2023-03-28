#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "recipes.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
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
//    rm = new recipes(this);
//    rm->show();
//    hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    exit(0);
}

