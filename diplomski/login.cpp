#include "login.h"
#include "ui_login.h"
#include<QSqlDatabase>
#include<QtSql/QSqlDatabase>
#include<QtCore>
#include<QtGui>



#include "mainwindow.h"
#include <QMessageBox>
logIn::logIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logIn)
{
    ui->setupUi(this);


     mydatabase=QSqlDatabase::addDatabase("QSQLITE");
    mydatabase.setDatabaseName("E:/Users/emirh/OneDrive/Desktop/autosalon.db");

    if(!mydatabase.open())
    {
        ui->stanje->setText("Greska");
    }
    else
    {
         ui->stanje->setText("Povezana");

    }

}

void logIn::on_Login_clicked()
{

    QString user,pass,ID;

    user=ui->user->text();
    pass=ui->pass->text();

if(!mydatabase.isOpen()){
    qDebug()<<"Failed to open the database";
              return;
}

QSqlQuery query;

  //  QSqlQuery query(QSqlDatabase::database());

    if(query.exec("SELECT * FROM Racuni WHERE Ime='"+user+"' AND Lozinka='"+pass+"'"))
    {

      int i=0;
      while (query.next())
      {
          i++;
      }



      if(i==1)
      {
          ui->stanje->setText("Tacna sifra");
        this->hide();

         MainWindow* MainW= new MainWindow(this);
         MainW->show();
        // QSqlDatabase::database().close();
      }


else
      {

  QMessageBox::warning(this,"login", "Username and password is not correct");

         // QSqlDatabase::database().close();

      }
    }

}

logIn::~logIn()
{
    delete ui;
}





void logIn::on_pokazi_stateChanged(int arg1)
{

ui->pass->setEchoMode(ui->pokazi->checkState() == Qt::Checked ? QLineEdit::Normal : QLineEdit::Password);
ui->pokazi->checkState() == Qt::Checked ?  ui->pokazi->setText("HIDE") :  ui->pokazi->setText("SHOW");

}





