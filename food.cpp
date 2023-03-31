#include "food.h"
#include "ui_food.h"
#include <QListWidget>

food::food(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::food)
{
    this->setFixedSize(QSize(500, 600));
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
    if(ui->cauldron->isChecked()) {
        ui->carrot->hide();
        ui->mince->hide();
        ui->blood->hide();
        ui->bread->hide();
        ui->fish->hide();
        ui->serpent->hide();
        ui->sausages->hide();
        ui->lox->hide();
    } else if(ui->cauldron->isCheckable()) {
        ui->carrot->show();
        ui->mince->show();
        ui->blood->show();
        ui->bread->show();
        ui->fish->show();
        ui->serpent->show();
        ui->sausages->show();
        ui->lox->show();
    }
}


void food::on_cookstat_stateChanged(int arg1)
{
    if(ui->cookstat->isChecked()) {
        ui->serpent->hide();
        ui->lox->hide();
        ui->fish->hide();
    } else if(ui->cookstat->isCheckable()) {
        ui->serpent->show();
        ui->lox->show();
        ui->fish->show();
    }
}


void food::on_cultiv_stateChanged(int arg1)
{
    if(ui->cultiv->isChecked()) {
        ui->carrot->hide();
        ui->mince->hide();
    } else if(ui->cultiv->isCheckable()) {
        ui->carrot->show();
        ui->mince->show();
    }
}


void food::on_oven_stateChanged(int arg1)
{
    if(ui->oven->isChecked()) {
        ui->bread->hide();
    } else if(ui->oven->isCheckable()) {
        ui->bread->show();
    }

}


void food::on_windmill_stateChanged(int arg1)
{
    if(ui->windmill->isChecked()) {
        ui->bread->hide();
        ui->fish->hide();
        ui->blood->hide();
    } else if(ui->windmill->isCheckable()) {
        ui->bread->show();
        ui->fish->show();
        ui->blood->show();
    }
}

void food::on_checkBox_stateChanged(int arg1)
{

}


void food::on_toolButton_triggered(QAction *arg1)
{
    exit(0);
}

