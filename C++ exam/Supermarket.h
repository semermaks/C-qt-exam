#ifndef SUPERMARKET_H
#define SUPERMARKET_H

#include <QMainWindow>
#include "sklad.h"
#include <QTableWidget>
#include <QDateTime>
#include <addtovar.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Supermarket; }
QT_END_NAMESPACE

class Supermarket : public QMainWindow
{
    friend Sklad;
    Q_OBJECT

public:
    Supermarket(QWidget *parent = nullptr);
    ~Supermarket();
    void showTable();
    void showKlientTable();
    void saveKlientDatabase();
private slots:

    void on_checkBox_Product_stateChanged(int arg1);

    void on_checkBox_Drink_stateChanged(int arg1);

    void on_checkBox_Dairy_stateChanged(int arg1);

    void on_checkBox_Meat_stateChanged(int arg1);


    void on_tableWidget_sklad_itemDoubleClicked(QTableWidgetItem *item);

    void on_pushButton_clicked();

    void on_tableWidget_sklad_2_itemDoubleClicked(QTableWidgetItem *item);

    void on_pushButton_addTovar_clicked();

    void catchObject(QString a);

private:
    Ui::Supermarket *ui;
    Sklad database;
    Sklad klientDatabase;
    double money;
    addTovar* addForm;
};
#endif // SUPERMARKET_H
