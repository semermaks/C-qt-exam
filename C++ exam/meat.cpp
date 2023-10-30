#include "meat.h"

Meat::Meat()
{
    this->part = "no info";
}

Meat::Meat(QString name, double cost, QString part) :Product(name,cost)
{
    if(part.isEmpty()) throw "Meat part is empty";
    else this->part = part;
}

void Meat::setPart(QString part)
{
    if(part.isEmpty()) throw "Meat part is empty";
    else this->part = part;
}

QString Meat::getPart() const &
{
    return part;
}

QString Meat::type() const &
{
    return "Meat";
}

QString Meat::toQString() const &
{
    QString tmp;
    tmp += Product::toQString();
    tmp += '=';
    tmp += part;
    return tmp;
}

bool Meat::operator <(const Meat &obj) const &
{
    return (this->cost < obj.cost);
}

bool Meat::operator >(const Meat &obj) const &
{
    return (!((*this) < obj));
}
