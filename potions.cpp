#include "potions.h"
#include "ui_potions.h"

potions::potions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::potions)
{
    ui->setupUi(this);
}

potions::~potions()
{
    delete ui;
}

void potions::on_radioButton_clicked()
{
    if(ui->radioButton->isChecked()) {
        ui->label_5->hide();
        ui->label_3->hide();
        ui->label->hide();
    } else if(ui->radioButton->isCheckable()) {
        ui->label_5->show();
        ui->label_3->show();
        ui->label->show();
    }
}


void potions::on_radioButton_2_clicked()
{
    if(ui->radioButton_2->isChecked()) {
        ui->label_2->hide();
        ui->label_4->hide();
        ui->label_6->hide();
    } else if(ui->radioButton_2->isCheckable()) {
        ui->label_2->show();
        ui->label_4->show();
        ui->label_6->show();
    }
}


void potions::on_radioButton_3_clicked()
{
    if(ui->radioButton_3->isChecked()) {
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
    } else if(ui->radioButton_3->isCheckable()) {
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
    }
}

