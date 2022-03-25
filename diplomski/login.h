#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QtDebug>
#include<QtSql>
#include<QtSql/QSqlError>
#include<QtCore>
#include <QtGui>
#include <QMainWindow>
#include <QFileInfo>

#include"home.h"
#include"mainwindow.h"


namespace Ui {
class logIn;
}

class logIn : public QDialog
{
    Q_OBJECT

public:
    explicit logIn(QWidget *parent = nullptr);
    ~logIn();


private slots:

    void on_Login_clicked();

    void on_pokazi_stateChanged(int arg1);


private:
    Ui::logIn *ui;
 QSqlDatabase mydatabase;

};

#endif // LOGIN_H
