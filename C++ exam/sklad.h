#ifndef SKLAD_H
#define SKLAD_H
#include "meat.h"
#include "Dairy.h"
#include "Drink.h"
#include <QMap>
#include<QFile>
#include<fstream>
#include <QMessageBox>
#include <QTextStream>
#include <QCoreApplication>
class Sklad
{
protected:
QMap<Product*,float> arr;
public:
    Sklad();
    void addElement(Product* obj, float weight);
    double SellElement(int number, float weight);
    int getSize() const&;
    void readFromFile();
    Product* stringToObj(QString line);
     QString getName(int a);
     QString getCost(int a);
     QString getType(int a);
     QString getVolume(int a);
     QString getUseBefore(int a);
     QString getPart(int a);
     QString getWeight(int a);
    QString toString();
    void clear();
};

#endif // SKLAD_H
