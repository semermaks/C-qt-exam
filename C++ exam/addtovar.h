#ifndef ADDTOVAR_H
#define ADDTOVAR_H

#include <QDialog>

namespace Ui {
class addTovar;
}

class addTovar : public QDialog
{
    Q_OBJECT

public:
    explicit addTovar(QWidget *parent = nullptr);
    ~addTovar();

private slots:
    void on_radioButton_Product_clicked();

    void on_radioButton_Drink_clicked();

    void on_radioButton_Diary_clicked();

    void on_radioButton_Meat_clicked();

    void on_pushButton_clicked();
    signals:
    void sendString(QString);

private:
    Ui::addTovar *ui;
};

#endif // ADDTOVAR_H
