#include "registerwindow.h"
#include "ui_registerwindow.h"
#include <QGroupBox>
#include<QComboBox>
#include<Users.h>
RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->labelAlreadyExisting->setVisible(false);
    ui->labelNotMatching->setVisible(false);
    ui->labelAgeError->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}



void RegisterWindow::on_pushButtonRegisterWindow_clicked()
{
    ui->labelAlreadyExisting->setVisible(false);
    ui->labelNotMatching->setVisible(false);
    ui->labelAgeError->setVisible(false);
    ui->labelFilledError->setVisible(false);

    QString user=ui->labelUsernameRegister->text();
   QString pass1= ui->labelPasswordRegister->text();
    QString pass2=ui->labelRetypePassword->text();

  QString mon= ui->comboBoxMonth->currentText();
    int x  =mon.toInt();

  ui-> groupBoxGender->isChecked();
  ui->groupBoxAccountType->isChecked();

  ui-> groupBoxBirth->isChecked();
    ui->groupBoxFavouriteGenre->isChecked();


    for (int i=0;i<100;i++)
     {
         if (user==usernames[i])
        {
            ui->labelAlreadyExisting->setVisible(true);
         }
     }
    if(pass1!=pass2)
     {
         ui->labelNotMatching->setVisible(true);
     }

    int age= 2024-x;
     if(x<12)
    {
        ui->labelAgeError->setVisible(true);
    }
     if(user.isEmpty()|| pass1.isEmpty()||pass2.isEmpty()||mon.isEmpty())
    {
        ui->labelFilledError->setVisible(true);
    }
     if(x==0)
    {
       ui->labelFilledError->setVisible(true);
    }


}

