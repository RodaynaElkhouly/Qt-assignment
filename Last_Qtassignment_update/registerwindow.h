#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QDialog>
#include <QDate>

namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = nullptr);
    ~RegisterWindow();
private slots:
    //void on_RegisterButton_clicked();
    void on_pushButton_Register2_clicked();

private:
    Ui::RegisterWindow *ui;
};

#endif // REGISTERWINDOW_H
