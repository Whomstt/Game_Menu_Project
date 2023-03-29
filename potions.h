#ifndef POTIONS_H
#define POTIONS_H

#include <QDialog>

namespace Ui {
class potions;
}

class potions : public QDialog
{
    Q_OBJECT

public:
    explicit potions(QWidget *parent = nullptr);
    ~potions();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::potions *ui;
};

#endif // POTIONS_H
