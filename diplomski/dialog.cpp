#include "dialog.h"
#include "ui_dialog.h"

#include<QtCore>
#include<QtGui>
#include<QtSql>
#include<QtSql/QSql>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlError>
#include<QtSql/QSqlQueryModel>

#include<QModelIndex>
float MY::var, MY::var1, var2, var3, var4, var5, var6, var7, var8, var9, var10;
float MY::var11, var12, var13, var14, var15, var16, var17, var18, var19, var20, var21;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //  combo box konekcija, izlistavanje
        QSqlQueryModel *model=new QSqlQueryModel();

        QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
        mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
        mydata.open();

        model->setQuery("select IME from Brazil");


        ui->igrac1_D->setModel(model);   ui->igrac1_L->setModel(model);
        ui->igrac2_D->setModel(model);   ui->igrac2_L->setModel(model);
        ui->igrac3_D->setModel(model);   ui->igrac3_L->setModel(model);
        ui->igrac4_D->setModel(model);   ui->igrac4_L->setModel(model);
        ui->igrac5_D->setModel(model);   ui->igrac5_L->setModel(model);
        ui->igrac6_D->setModel(model);   ui->igrac6_L->setModel(model);
        ui->igrac7_D->setModel(model);   ui->igrac7_L->setModel(model);
        ui->igrac8_D->setModel(model);   ui->igrac8_L->setModel(model);
        ui->igrac9_D->setModel(model);   ui->igrac9_L->setModel(model);
        ui->igrac10_D->setModel(model);  ui->igrac10_L->setModel(model);
        ui->golman_D->setModel(model);   ui->golman_L->setModel(model);

        ui->igrac1_D->setCurrentIndex(0);   ui->igrac1_L->setCurrentIndex(11);
        ui->igrac2_D->setCurrentIndex(1);   ui->igrac2_L->setCurrentIndex(12);
        ui->igrac3_D->setCurrentIndex(2);   ui->igrac3_L->setCurrentIndex(13);
        ui->igrac4_D->setCurrentIndex(3);   ui->igrac4_L->setCurrentIndex(14);
        ui->igrac5_D->setCurrentIndex(4);   ui->igrac5_L->setCurrentIndex(15);
        ui->igrac6_D->setCurrentIndex(5);   ui->igrac6_L->setCurrentIndex(16);
        ui->igrac7_D->setCurrentIndex(6);   ui->igrac7_L->setCurrentIndex(17);
        ui->igrac8_D->setCurrentIndex(7);   ui->igrac8_L->setCurrentIndex(18);
        ui->igrac9_D->setCurrentIndex(8);   ui->igrac9_L->setCurrentIndex(19);
        ui->igrac10_D->setCurrentIndex(9);  ui->igrac10_L->setCurrentIndex(20);
        ui->golman_D->setCurrentIndex(10);  ui->golman_L->setCurrentIndex(21);

    mydata.close();
}

void Dialog::on_golman_L_currentIndexChanged(const QString &arg1)
{
    float i, c = 0.0;
    QString IME=ui->golman_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())
        {
            ui->lineEdit_3_L_golman->setText(qry.value(1).toString());
         //upitno?
            i=ui->lineEdit_L_igrac1->text().toFloat();
            c=ui->Le_L_igrac1->text().toFloat();
        }
    }
    MY::var=1+c;
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}


void Dialog::on_igrac1_L_currentIndexChanged(const QString &arg1)
{
    float i,c = 0.0;
    QString IME=ui->igrac1_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())
        {
            ui->lineEdit_L_igrac1->setText(qry.value(1).toString());
//upitno?
             i=ui->lineEdit_L_igrac1->text().toFloat();
             c=ui->Le_L_igrac1->text().toFloat();
        }
    }
    MY::var1=1+c;
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac2_L_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac2_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_2_L_igrac2->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac3_L_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac3_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_8_L_igrac3->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac4_L_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac4_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_10_L_igrac4->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac5_L_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac5_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_4_L_igrac5->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac6_L_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac6_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_6_L_igrac6->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac7_L_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac7_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_9_L_igrac7->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac8_L_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac8_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_5_L_igrac8->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac9_L_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac9_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_7_L_igrac9->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac10_L_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac10_L->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_11_L_igrac10->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}
//DESNA STRANA TERENA
void Dialog::on_golman_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->golman_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_15_D_golman->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac1_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac1_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_20_D_igrac1->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac2_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac2_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_17_D_igrac2->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac3_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac3_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_16_D_igrac3->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac4_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac4_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_14_D_igrac4->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac5_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac5_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_21_D_igrac5->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac6_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac6_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_18_D_igrac6->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac7_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac7_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_13_D_igrac7->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac8_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac8_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_22_D_igrac8->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac9_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac9_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_19_D_igrac9->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_igrac10_D_currentIndexChanged(const QString &arg1)
{
    QString IME=ui->igrac10_D->currentText();

    QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
    mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
    QSqlQuery qry(QSqlDatabase::database());

    if(qry.exec("select * from Brazil where IME ='"+IME+"' "))
    {
        if(qry.next())ui->lineEdit_12_D_igrac10->setText(qry.value(1).toString());
    }
    mydata.close();
    mydata.removeDatabase(QSqlDatabase::defaultConnection);
}

void Dialog::on_snimi_clicked()
{

         QString car,car1;
 //    QSqlQueryModel *model=new QSqlQueryModel();

     QSqlDatabase mydata=QSqlDatabase::addDatabase("QSQLITE");
     mydata.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");
     mydata.open();
//NECE NESTO JEBAT GA
 /*    QString ime_i_1=ui->igrac1_L->currentText();;

     QSqlQuery qry(QSqlDatabase::database());
     qry.exec("update Brazil set POENI='"+QVariant(MY::var1).toString()+"' where IME='"+ime_i_1+"'");

    ui->TEST->setText(QVariant(MY::var1).toString());
*/


     mydata.close();
     mydata.removeDatabase(QSqlDatabase::defaultConnection);

}

void Dialog::paintEvent(QPaintEvent *a)
{
    QPainter painter(this);

    QRect igraliste(0, 0, 1210, 710);
    QBrush brush(Qt::green, Qt::SolidPattern);
    QPen black(Qt::black); QPen white(Qt::white);
    black.setWidth(2);  white.setWidth(3);

    painter.fillRect(igraliste, brush);

    painter.setPen(black);
    QRect border(1,1,1210,710);
    painter.drawRect(border);
//okolica
    QRect line(3,3,1205,705);
    painter.setPen(white);

    painter.drawRect(line);
//GOLOVI I JOS NEKi kvadrati
    //gol L i llijevo nesto
    line.setCoords(3,297,30,406);
    painter.drawRect(line);
    line.setCoords(3,251,80,451);
    painter.drawRect(line);
    //desna strana sve isto
    line.setCoords(1207,297,1177,406);
    painter.drawRect(line);
    line.setCoords(1207,251,1127,451);
    painter.drawRect(line);
//krug u centru
    painter.drawEllipse(530,280,150,150);
// linija po sredini
    QPoint p1(605,3);
    QPoint p2(605,708);
    painter.drawLine(p1,p2);
//tackica u centru
    QPoint center(605,355);

    white.setWidth(5);
    painter.setPen(white);
    painter.drawPoint(center);

//KORNERI
    //gornji lijevi
    white.setWidth(3);
    QRect korner(-5,-5,20,20);

    int start=16*10;
    int end=16*(-100);

    painter.setPen(white);
    painter.drawArc(korner,start,end);
    //donji lijevi
    korner.setRect(-5,695,20,20);
    start=16*(-10);
    end=16*100;
    painter.drawArc(korner,start,end);
    //gornji desni
    korner.setCoords(1197,-10,1217,15);
    start=16*180;
    end=16*80;
    painter.drawArc(korner,start,end);

    korner.setRect(1197,697,20,20);
    start=16*180;
    end=16*-80;
    painter.drawArc(korner,start,end);

}

Dialog::~Dialog()
{
    delete ui;
}


