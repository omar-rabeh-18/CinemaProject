#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include "WelcomeWindow.h"


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
    QMessageBox::about(this, "Please Wait","Logging in...");

    if()
    {

        hide();
        WelcomeWindow* welcomeWindow=new WelcomeWindow(this);
        welcomeWindow->show();
    }
    else
    {
       ui->labelError->setVisible(true);
    }

}


void LoginWindow::on_pushButtonRegister_clicked()
{
    QMessageBox::about(this,"Please wait ","Registration in process...");
}

