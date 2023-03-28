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
