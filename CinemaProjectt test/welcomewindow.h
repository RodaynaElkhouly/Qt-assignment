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
    explicit Welcomewindow(QString username= " " , int age= 0, QWidget *parent = nullptr);
    ~Welcomewindow();

    void setname(QString name);

private:
    Ui::Welcomewindow *ui;
};

#endif // WELCOMEWINDOW_H
