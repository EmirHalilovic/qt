#include "home.h"
#include "ui_home.h"
#include "about.h"
#include <QtWidgets>
#include <QScrollArea>
home::home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);


}

home::~home()
{
    delete ui;
}



