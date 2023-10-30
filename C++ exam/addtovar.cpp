#include "addtovar.h"
#include "ui_addtovar.h"

addTovar::addTovar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addTovar)
{
    ui->setupUi(this);
}

addTovar::~addTovar()
{
    delete ui;
}

void addTovar::on_radioButton_Product_clicked()
{
    ui->label_date->setEnabled(0);
    ui->dateEdit->setEnabled(0);
    ui->label_volume->setEnabled(0);
    ui->doubleSpinBox_volume->setEnabled(0);
    ui->label_Part->setEnabled(0);
    ui->lineEdit_Part->setEnabled(0);
}


void addTovar::on_radioButton_Drink_clicked()
{
    ui->label_date->setEnabled(0);
    ui->dateEdit->setEnabled(0);
    ui->label_volume->setEnabled(1);
    ui->doubleSpinBox_volume->setEnabled(1);
    ui->label_Part->setEnabled(0);
    ui->lineEdit_Part->setEnabled(0);
}


void addTovar::on_radioButton_Diary_clicked()
{
    ui->label_date->setEnabled(1);
    ui->dateEdit->setEnabled(1);
    ui->label_volume->setEnabled(1);
    ui->doubleSpinBox_volume->setEnabled(1);
    ui->label_Part->setEnabled(0);
    ui->lineEdit_Part->setEnabled(0);
}


void addTovar::on_radioButton_Meat_clicked()
{
    ui->label_date->setEnabled(0);
    ui->dateEdit->setEnabled(0);
    ui->label_volume->setEnabled(0);
    ui->doubleSpinBox_volume->setEnabled(0);
    ui->label_Part->setEnabled(1);
    ui->lineEdit_Part->setEnabled(1);
}


void addTovar::on_pushButton_clicked()
{
    QString name,part,result;
    double cost;
    float volume, weight;
    QDate date;
    name = ui->lineEdit_Name->text();
    cost = ui->doubleSpinBox_Cost->value();
    weight = ui->doubleSpinBox_Weight->value();

    result += QString::number(weight);
    result += '=';

    if(ui->radioButton_Product->isChecked()){
        result += "Product";
        result += '=';
        result += name;
        result += '=';
        result += QString::number(cost);
    }
    if(ui->radioButton_Drink->isChecked()){
        volume = ui->doubleSpinBox_volume->value();
        result += "Drink";
        result += '=';
        result += name;
        result += '=';
        result += QString::number(cost);
        result += '=';
        result += QString::number(volume);
    }
    if(ui->radioButton_Diary->isChecked()){
        volume = ui->doubleSpinBox_volume->value();
        date = ui->dateEdit->date();
        result += "Diary";
        result += '=';
        result += name;
        result += '=';
        result += QString::number(cost);
        result += '=';
        result += QString::number(volume);
        result += '=';
        result += date.toString("dd.MM.yyyy");
    }
    if(ui->radioButton_Meat->isChecked()){
        part = ui->lineEdit_Part->text();
        result += "Meat";
        result += '=';
        result += name;
        result += '=';
        result += QString::number(cost);
        result += '=';
        result += part;
    }
    sendString(result);
    this->close();
}

