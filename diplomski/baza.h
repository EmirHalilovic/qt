#ifndef BAZA_H
#define BAZA_H

#include <QDialog>

#include"unosenje_podataka.h"

namespace Ui {
class baza;
}

class baza : public QDialog
{
    Q_OBJECT

public:
    explicit baza(QWidget *parent = nullptr);
    ~baza();

private slots:
    void on_unesiUtabelu_clicked();

    void on_UPDATE_clicked();

    void on_obrisi_tabelu_clicked();

    void on_izaberi_clicked();

    void on_izmjeni_tabelu_clicked();

private:
    Ui::baza *ui;
    unosenje_podataka unpodat;
};

#endif // BAZA_H
