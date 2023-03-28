#include "recipes.h"
#include "ui_recipes.h"
#include "food.h"
#include "potions.h"

recipes::recipes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipes)
{
    ui->setupUi(this);
}

recipes::~recipes()
{
    delete ui;
}

void recipes::on_pushButton_clicked()
{
    food fm;
    fm.setModal(true);
    fm.exec();
}


void recipes::on_pushButton_2_clicked()
{
    potions pm;
    pm.setModal(true);
    pm.exec();
}

