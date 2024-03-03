#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QDialog>

namespace Ui {
class Welcomewindow;
}

class Welcomewindow : public QDialog
{
    Q_OBJECT

public:
    explicit Welcomewindow(QWidget *parent = nullptr);
    ~Welcomewindow();

private:
    Ui::Welcomewindow *ui;
};

#endif // WELCOMEWINDOW_H
