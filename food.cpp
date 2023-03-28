#include "food.h"
#include "ui_food.h"
#include <QListWidget>

food::food(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::food)
{
    ui->setupUi(this);
}

food::~food()
{
    delete ui;
}
