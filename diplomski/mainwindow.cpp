#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about.h"
#include "login.h"
#include <QtWidgets>
#include <QPixmap>
#include <QScrollArea>
#include <QHBoxLayout>
#include <QPushButton>
#include <QString>
#include <QVector>
#include <QtCore>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


   // QScrollArea * scrollArea = new QScrollArea(this);
  //   QWidget * pWgt = new QWidget;

     QPixmap pix(":/slike/Astra.jpg");
     QLabel * slika = new QLabel;
        QLabel * ime = new QLabel;
   QGridLayout *pLayout = new QGridLayout();
      slika->setMaximumSize(QSize(200,150));
     int w =  slika->width();
     int h =  slika->height();

     for (int i = 0; i < 10; i++){
     slika->setPixmap(pix);
     ime->setText("Astra");
    slika->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
        pLayout->addWidget(slika);
    }
//pWgt->setLayout(pLayout);
//scrollArea->setWidget(pWgt);
 // setCentralWidget(scrollArea);
   ui->scrollArea->widget()->setLayout(pLayout);

/*

    QLabel *ime=new QLabel("Astra");
    QLabel *god=new QLabel("2009");
    QLabel *kilo=new QLabel("200k");
    QVBoxLayout *vlay=new QVBoxLayout();
    vlay->addWidget(ime);
    vlay->addWidget(god);
    vlay->addWidget(kilo);
    QWidget *stats=new QWidget();
    stats->setLayout(vlay);



    QLabel* slika1=new QLabel;
   slika1->setPixmap(QPixmap (":/slike/Astra.jpg"));
    slika1->setScaledContents(true);
    slika1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
slika1->setScaledContents(true);


    QHBoxLayout *sve=new QHBoxLayout();
    sve->addWidget(slika1);
    sve->addWidget(stats);
    ui->scrollArea1->setLayout(sve);
*/





}

MainWindow::~MainWindow()
{
    delete ui;




}


void MainWindow::on_logout_clicked()
{
    logIn *log = new  logIn;
   log->show();
    hide();
}

void MainWindow::on_aboutb_clicked()
{
    About *abo = new About;
    abo->show();
    hide();
}
