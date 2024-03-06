#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include "Users.h"
#include "registerwindow.h"
#include "welcomewindow.h"
#include<QString>
#include<QStringList>



LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->labelError->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}



void LoginWindow::on_pushButtonLogin_clicked()
{
    QString username=ui->lineEditUsername->text();
    QString password=ui->lineEditUsername->text();

    for (int i=0;i<100;i++)
    {
        if(username==usernames[i] && password==passwords[i])
        {
        hide();
     WelcomeWindow* Welcome= new WelcomeWindow(this);
        Welcome->show();
        }
    }


        ui->labelError->setVisible(true);


}


void LoginWindow::on_pushButtonRegister_clicked()
{
    QMessageBox::about(this,"Please wait ","Registration in process...");
    hide();
    RegisterWindow* registerwindow=new RegisterWindow(this);
    registerwindow->show();
}







