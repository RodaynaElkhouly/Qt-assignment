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
    explicit Welcomewindow(QWidget *parent = nullptr, QString username="", int age=0);
    ~Welcomewindow();


    void setname(QString name);

private slots:
    void on_pushButton_Logout_clicked();

private:
    Ui::Welcomewindow *ui;
};

#endif // WELCOMEWINDOW_H
