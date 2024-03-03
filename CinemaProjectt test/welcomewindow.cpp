#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"

Welcomewindow::Welcomewindow(QString username, int age, QWidget *parent): QDialog(parent), ui(new Ui::Welcomewindow)
    {
   ui->setupUi(this);
        QString ageStr = QString::number(age);
   ui->WelcomeLabel->setText("Hello"+username+" "+ageStr);

}



Welcomewindow::~Welcomewindow()
{
    delete ui;
}


