#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include "Users.h"
#include "RegisterWindow.h"
#include "welcomewindow.h"


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
    QString password=ui->lineEditPassword->text();



        hide();
     WelcomeWindow* Welcome= new WelcomeWindow(this);
        Welcome->show();
        else
        {
            ui->labelError->setVisible(true);
        }

}


void LoginWindow::on_pushButtonRegister_clicked()
{
    QMessageBox::about(this,"Please wait ","Registration in process...");
    hide();
    RegisterWindow* registerwindow=new RegisterWindow(this);
    registerwindow->show();
}



