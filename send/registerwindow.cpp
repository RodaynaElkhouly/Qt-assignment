#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "users.h"
#include "welcomewindow.h"


RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)

{
    ui->setupUi(this);
    ui-> age_error -> setVisible(false);
    ui-> password_error -> setVisible(false);
    ui-> register_error-> setVisible(false);
    ui-> username_error -> setVisible(false);
}


RegisterWindow::~RegisterWindow()
{
    delete ui;
}


//void RegisterWindow::on_RegisterButton_clicked(){



//}



void RegisterWindow::on_pushButton_Register2_clicked()
{
    ui-> age_error -> setVisible(false);
    ui-> password_error -> setVisible(false);
    ui-> register_error-> setVisible(false);
    ui-> username_error -> setVisible(false);

    QString usernameinput = ui -> lineEditusernamereg ->text();
    QString passwordinput = ui -> lineEditretyppasswordreg ->text();
    QString retypedpassword = ui -> lineEditpasswordreg ->text();
    QString yearinput = ui -> lineEdityearreg ->text();
   // QString ageStr = ui->lineEdityearreg->text();
    int x=yearinput.toInt();

    bool checkboxaction = ui -> checkBox ->isChecked();
    bool checkboxcomedy = ui -> checkBox_2 ->isChecked();
    bool checkboxromance = ui -> checkBox_3 ->isChecked();
    bool checkboxdrama = ui -> checkBox_4 ->isChecked();
    bool checkboxhorror = ui -> checkBox_5 ->isChecked();
    bool checkboxother = ui -> checkBox_6 ->isChecked();
    bool radiobuttonmale = ui-> radioButton->isChecked();
    bool radiobuttonfemale= ui-> radioButton_2->isChecked();
    bool radiobuttonadmin= ui->radioButton_3->isChecked();
    bool radiobuttonuser= ui->radioButton_4->isChecked();
    //QString monthbutton=ui->comboBox->currentText();
    //QString yearbutton=ui->lineEdityearreg->text();
    QString daybutton=ui->lineEditdayreg->text();
    //QString  passlabel=ui->lineEditpasswordreg->text();
    //QString retypepass=ui->lineEditretyppasswordreg->text();
    //QString userbutton=ui->lineEditusernamereg->text();


    bool check1=true;
    bool check2=true;
    bool check3=true;
    bool check4=true;



    for (int i = 0; i < 5; i++) {
        if (usernameinput == usernames[i]) {
            ui->username_error->setVisible(true);

            check1=false;
        }
    }

    if (passwordinput != retypedpassword) {
        ui->password_error->setVisible(true);
        check2=false;
    }




    int currentYear = QDate::currentDate().year();
    int enteredYear = yearinput.toInt();
    int age = currentYear - enteredYear;

    if (age < 12) {
        ui->age_error->setVisible(true);
        check3=false;
    }



         if((usernameinput=="")or(passwordinput=="")or(retypedpassword=="")or(daybutton=="")or(yearinput=="")or((radiobuttonmale==false)&&(radiobuttonfemale==false))or((radiobuttonuser==false)&&(radiobuttonadmin==false))or
             ((checkboxaction==false)&&(checkboxcomedy==false)&&(checkboxromance==false)&&(checkboxdrama==false)&&(checkboxhorror==false)&&(checkboxother==false)))
         {
             ui->register_error->setVisible(true);
             check4=false;
         }
    else
        ui->register_error->setVisible(false);


    if(((check1)&&(check2)&&(check3)&&(check4))==true){
             usernames[usersCount]=usernameinput;
             passwords[usersCount]=passwordinput;
             ages[usersCount]=age;


        hide();
        Welcomewindow* welcomewin = new Welcomewindow(this, usernameinput, age);
        welcomewin->setVisible(true);
        welcomewin->show();
    }
}
