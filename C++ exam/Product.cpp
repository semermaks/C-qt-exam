#include "Product.h"

Product::Product()
{
    this->name = "noname";
    this->cost = 1;
}

Product::Product(QString name, double cost)
{

    if(name.isEmpty()) throw "Product name empty";
    else this->name = name;
    if(cost <=0) throw "Product cost <=0";
    else this->cost = cost;
}

void Product::setName(QString name)
{
    if(name.isEmpty()) throw "Product name empty";
    else this->name = name;
}

void Product::setCost(double cost)
{
    if(cost <=0) throw "Product cost <=0";
    else this->cost = cost;
}

QString Product::getName() const &
{
    return this->name;
}

double Product::getCost() const &
{
    return this->cost;
}

QString Product::type() const &
{
    return "Product";
}

QString Product::toQString() const &
{
    QString tmp;
    tmp += '=';
    tmp += name;
    tmp += '=';
    tmp += QString::number(cost);
    return tmp;
}

bool Product::operator <(const Product &obj) const &
{
    return (this->cost < obj.cost);
}

bool Product::operator >(const Product &obj) const &
{
    return (!((*this) < obj));
}
