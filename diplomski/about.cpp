    #include "about.h"
#include "ui_about.h"
#include "mainwindow.h"
#include <QPixmap>
#include <qpixmap.h>
#include <QApplication>
#include <QLabel>

#include <login.h>
About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);


}

About::~About()
{
    delete ui;
}

void About::on_logout_clicked()
{
    logIn *log = new  logIn;
   log->show();
    hide();
}

void About::on_homeb_clicked()
{
   MainWindow *MainW = new MainWindow;
    MainW->show();
    hide();
}
