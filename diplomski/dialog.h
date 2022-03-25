#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QPainter>
#include<QObject>


namespace Ui {
class Dialog;
}
class MY
{
public:

   static float var, var1, var2, var3, var4, var5, var6, var7, var8, var9, var10;
   static float var11, var12, var13, var14, var15, var16, var17, var18, var19, var20, var21;

};
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

protected:
    void paintEvent(QPaintEvent *a);

public:
    QString id;
private slots:
    void on_golman_L_currentIndexChanged(const QString &arg1);

    void on_igrac1_L_currentIndexChanged(const QString &arg1);

    void on_igrac2_L_currentIndexChanged(const QString &arg1);

    void on_igrac3_L_currentIndexChanged(const QString &arg1);

    void on_igrac4_L_currentIndexChanged(const QString &arg1);

    void on_igrac5_L_currentIndexChanged(const QString &arg1);

    void on_igrac6_L_currentIndexChanged(const QString &arg1);

    void on_igrac7_L_currentIndexChanged(const QString &arg1);

    void on_igrac8_L_currentIndexChanged(const QString &arg1);

    void on_igrac9_L_currentIndexChanged(const QString &arg1);

    void on_igrac10_L_currentIndexChanged(const QString &arg1);

    void on_golman_D_currentIndexChanged(const QString &arg1);

    void on_igrac1_D_currentIndexChanged(const QString &arg1);

    void on_igrac2_D_currentIndexChanged(const QString &arg1);

    void on_igrac3_D_currentIndexChanged(const QString &arg1);

    void on_igrac4_D_currentIndexChanged(const QString &arg1);

    void on_igrac5_D_currentIndexChanged(const QString &arg1);

    void on_igrac6_D_currentIndexChanged(const QString &arg1);

    void on_igrac7_D_currentIndexChanged(const QString &arg1);

    void on_igrac8_D_currentIndexChanged(const QString &arg1);

    void on_igrac9_D_currentIndexChanged(const QString &arg1);

    void on_igrac10_D_currentIndexChanged(const QString &arg1);

    void on_snimi_clicked();

private:
    Ui::Dialog *ui;

};

#endif // DIALOG_H
