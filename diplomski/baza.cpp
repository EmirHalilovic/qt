#include "baza.h"
#include "ui_baza.h"
#include "login.h"

#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQueryModel>
#include<QtSql/QSqlQuery>
#include<QtDebug>
#include<QtSql/QSqlError>

baza::baza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::baza)
{
    ui->setupUi(this);
    QSqlQueryModel * model=new QSqlQueryModel();

    QSqlDatabase mydatabase=QSqlDatabase::addDatabase("QSQLITE");
    mydatabase.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");

    QSqlQuery qry(QSqlDatabase::database());
    qry.prepare("select * from Brazil");
    qry.exec();
    model->setQuery(qry);
    ui->tableView->setModel(model);
    ui->tableView->update();
    mydatabase.close();
    mydatabase.removeDatabase(QSqlDatabase::defaultConnection);
}
//PRIKAZ TABELE
void baza::on_UPDATE_clicked()
{

    QSqlQueryModel * model=new QSqlQueryModel();

    QSqlDatabase mydatabase=QSqlDatabase::addDatabase("QSQLITE");
    mydatabase.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");

    QSqlQuery qry(QSqlDatabase::database());
    qry.prepare("select * from Brazil");
    qry.exec();
    model->setQuery(qry);
    ui->tableView->setModel(model);
    ui->tableView->update();

    mydatabase.close();
    mydatabase.removeDatabase(QSqlDatabase::defaultConnection);

}
//BRISANJE REDOVA TABELE
void baza::on_obrisi_tabelu_clicked()
{
    QString BR;
    BR=ui->Brisanje_Redova->text();

    QSqlDatabase mydatabase=QSqlDatabase::addDatabase("QSQLITE");
    mydatabase.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");

    QSqlQuery qry(QSqlDatabase::database());
    qry.prepare("delete from Brazil where ID_BRAZIL='"+BR+"'");
    if(qry.exec())
    {
        mydatabase.close();

        QSqlQueryModel * model=new QSqlQueryModel();

        QSqlQuery qry(QSqlDatabase::database());
        qry.prepare("select * from Brazil");
        qry.exec();
        model->setQuery(qry);
        ui->tableView->setModel(model);
        ui->tableView->update();
        ui->label_OBRISI->setText("Uspjesno obrisano");
    }else {
ui->label_OBRISI->setText(" greska !! ");
}
    mydatabase.close();
mydatabase.removeDatabase(QSqlDatabase::defaultConnection);
    ui->Brisanje_Redova->setText("");
}
//IZABERI ID ZA IZMJENU
void baza::on_izaberi_clicked()
{
    QSqlDatabase mydatabase=QSqlDatabase::addDatabase("QSQLITE");
    mydatabase.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");

        QString ID=ui->ID_izmjena_redova->text();
    QSqlQuery qry(QSqlDatabase::database());
    qry.prepare("select * from Brazil where ID_BRAZIL='"+ID+"'");
    qry.exec();
    if(qry.next())
    {
        ui->ID->setText(qry.value(0).toString());
        ui->broj_dresa->setText(qry.value(1).toString());
        ui->ime->setText(qry.value(2).toString());
        ui->prezime->setText(qry.value(3).toString());
        ui->poeni->setText(qry.value(4).toString());
        ui->korisnicko_ime->setText(qry.value(5).toString());
        ui->sifra->setText(qry.value(6).toString());
    }
    mydatabase.close();
mydatabase.removeDatabase(QSqlDatabase::defaultConnection);
    ui->ID_izmjena_redova->setText("");
    ui->stanje_za_izmjenu->setText("");
    ui->label_OBRISI->setText("");
}
//IZMJENA ODREDJENOG ODABIRA
void baza::on_izmjeni_tabelu_clicked()
{
    QSqlDatabase mydatabase=QSqlDatabase::addDatabase("QSQLITE");
    mydatabase.setDatabaseName("C:/Users/ZELJKO/Desktop/zadaca-emir/EKIPE.db");

    QString ID, BROJ_DRESA, IME, PREZIME, POENI, KORI_IME, SIFRA;
        ID=ui->ID->text();
        BROJ_DRESA=ui->broj_dresa->text();
        IME=ui->ime->text();
        PREZIME=ui->prezime->text();
        POENI=ui->poeni->text();
        KORI_IME=ui->korisnicko_ime->text();
        SIFRA=ui->sifra->text();

    QSqlQuery qry(QSqlDatabase::database());
    qry.prepare("update Brazil set ID_BRAZIL='"+ID+"',"
                                " BROJ_DRESA='"+BROJ_DRESA+"', "
                                " IME='"+IME+"', "
                                " PREZME='"+PREZIME+"', "
                                " POENI='"+POENI+"', "
                                " KORISNICKO_IME='"+KORI_IME+"', "
                                " SIFRA='"+SIFRA+"' where ID_BRAZIL='"+ID+"'");//obavezno postaviti šrimarni kljuc kao orijentir za bazu
    if(qry.exec())
    {
        ui->stanje_za_izmjenu->setText(" Promjene uspjesne.");

     QSqlQueryModel * model=new QSqlQueryModel();

        QSqlQuery qry(QSqlDatabase::database());
        qry.prepare("select * from Brazil");
        qry.exec();
        model->setQuery(qry);
        ui->tableView->setModel(model);
        ui->tableView->update();
    }
    else {
        ui->stanje_za_izmjenu->setText(" GRESKA!!!!");
    }
    ui->ID->setText("");
    ui->broj_dresa->setText("");
    ui->ime->setText("");
    ui->prezime->setText("");
    ui->poeni->setText("");
    ui->korisnicko_ime->setText("");
    ui->sifra->setText("");

    mydatabase.close();
    mydatabase.removeDatabase(QSqlDatabase::defaultConnection);
}

void baza::on_unesiUtabelu_clicked()
{
    unpodat.show();
}

baza::~baza()
{

    delete ui;
}





