#ifndef RECIPES_H
#define RECIPES_H

#include <QDialog>

namespace Ui {
class recipes;
}

class recipes : public QDialog
{
    Q_OBJECT

public:
    explicit recipes(QWidget *parent = nullptr);
    ~recipes();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::recipes *ui;
};

#endif // RECIPES_H
