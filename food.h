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

private slots:
    void on_checkBox_stateChanged(int arg1);

private:
    Ui::food *ui;
};

#endif // FOOD_H
