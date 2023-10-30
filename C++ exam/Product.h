#ifndef PRODUCT_H
#define PRODUCT_H
#include <QString>

class Product
{
protected:
 QString name;
 double cost;
public:
    Product();
    Product(QString name,double cost);

    void setName(QString name);
    void setCost(double cost);

    QString getName()const&;
    double getCost()const&;
   virtual QString type()const&;

     virtual QString toQString() const&;
    bool operator <(const Product& obj) const&;
 bool operator >(const Product& obj) const&;
};

#endif // PRODUCT_H
