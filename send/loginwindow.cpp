#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "users.h"
#include "welcomewindow.h"
#include "registerwindow.h"
LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->ErrorLabel->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_PushButton_login_clicked()
{
    for (int i = 0; i < 100; i++) {
        QString name=ui->lineEdit_Username->text();
         QString pass=ui->lineEdit_password->text();
        if ((name==usernames[i])&& (pass==passwords[i])){
             hide();
            Welcomewindow* welcomewin = new Welcomewindow(this,name,ages[i]);


            //QString age=(QString::number(ages[i]));
            // QString inf = name + age;
           // welcomewin->setname(ui->lineEdit_Username->text());
            welcomewin->setVisible(true);
             welcomewin->show();
          //  ui->lineEdit_Username->setText(inf);
        }else ui->ErrorLabel->setVisible(true);
    }
}


void LoginWindow::on_PushButton_Register_clicked()
{
    hide();
    RegisterWindow* registerWindow = new RegisterWindow(this);
    registerWindow->show();
}

