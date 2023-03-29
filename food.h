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

    void on_cauldron_stateChanged(int arg1);

    void on_cultiv_stateChanged(int arg1);

    void on_carrot_linkActivated(const QString &link);

    void on_oven_stateChanged(int arg1);

    void on_cookstat_stateChanged(int arg1);

    void on_windmill_stateChanged(int arg1);

private:
    Ui::food *ui;
};

#endif // FOOD_H
