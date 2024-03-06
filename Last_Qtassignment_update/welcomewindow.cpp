#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"

Welcomewindow::Welcomewindow(QWidget *parent, QString username, int age): QDialog(parent), ui(new Ui::Welcomewindow)
    {
   ui->setupUi(this);
        QString ageStr = QString::number(age);
   ui->WelcomeLabel->setText("Hello "+username+" "+ageStr);

QPixmap pix (":/new/prefix1/cinema.jpg");
   int w = ui->pictLabel->width();
int h = ui->pictLabel->height();
ui-> pictLabel -> setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
QFont font;
font.setPointSize(20);
font.setFamily("times");
font.setWeight (QFont:: Bold) ; ui->WelcLabel -> setFont(font);

    ui->WelcLabel->setStyleSheet("QLabel {color: black; }");

}




Welcomewindow::~Welcomewindow()
{
    delete ui;
}



void Welcomewindow::on_pushButton_Logout_clicked()
{
    hide();
    LoginWindow* loginwin= new LoginWindow(this);
    loginwin->show();

}

