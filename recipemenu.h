#ifndef RECIPEMENU_H
#define RECIPEMENU_H

#include <QWidget>

namespace Ui {
class recipemenu;
}

class recipemenu : public QWidget
{
    Q_OBJECT

public:
    explicit recipemenu(QWidget *parent = nullptr);
    ~recipemenu();

private:
    Ui::recipemenu *ui;
};

#endif // RECIPEMENU_H
