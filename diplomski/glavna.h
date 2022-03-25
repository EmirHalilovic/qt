#ifndef GLAVNA_H
#define GLAVNA_H

#include <QMainWindow>

namespace Ui {
class Glavna;
}

class Glavna : public QMainWindow
{
    Q_OBJECT

public:
    explicit Glavna(QWidget *parent = nullptr);
    ~Glavna();

private:
    Ui::Glavna *ui;
};

#endif // GLAVNA_H
