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

private:
    Ui::potions *ui;
};

#endif // POTIONS_H
