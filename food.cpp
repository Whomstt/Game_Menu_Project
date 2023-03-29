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

void food::on_carrot_linkActivated(const QString &link)
{

}


void food::on_cauldron_stateChanged(int arg1)
{

}


void food::on_cookstat_stateChanged(int arg1)
{

}


void food::on_cultiv_stateChanged(int arg1)
{
    if(ui->cultiv->isChecked()) {
        ui->carrot->hide();
    } else if(ui->cultiv->isCheckable()) {
        ui->carrot->show();
    }
}


void food::on_oven_stateChanged(int arg1)
{

}


void food::on_windmill_stateChanged(int arg1)
{

}

void food::on_checkBox_stateChanged(int arg1)
{

}

