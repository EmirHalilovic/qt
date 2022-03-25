#include "glavna.h"
#include "ui_glavna.h"

Glavna::Glavna(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Glavna)
{
    ui->setupUi(this);
}

Glavna::~Glavna()
{
    delete ui;
}
