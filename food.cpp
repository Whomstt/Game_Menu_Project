#include "food.h"
#include "ui_food.h"

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
