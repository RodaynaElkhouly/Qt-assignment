#include "welcomewindow.h"
#include "ui_welcomewindow.h"

Welcomewindow::Welcomewindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Welcomewindow)
{
    ui->setupUi(this);
}

Welcomewindow::~Welcomewindow()
{
    delete ui;
}
