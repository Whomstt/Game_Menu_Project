#include "recipemenu.h"
#include "ui_recipemenu.h"


recipemenu::recipemenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recipemenu)
{
    ui->setupUi(this);
}

recipemenu::~recipemenu()
{
    delete ui;
}
