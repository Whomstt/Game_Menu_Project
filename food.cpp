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

void food::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked()) {
        ui->duck->hide();
    } else if(ui->checkBox->isCheckable()) {
        ui->duck->show();
    }
}

