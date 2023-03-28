#ifndef FOOD_H
#define FOOD_H

#include <QDialog>

namespace Ui {
class food;
}

class food : public QDialog
{
    Q_OBJECT

public:
    explicit food(QWidget *parent = nullptr);
    ~food();

private:
    Ui::food *ui;
};

#endif // FOOD_H
