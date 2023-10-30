#include "Drink.h"

Drink::Drink()
{
    this->volume = 1;
}

Drink::Drink(QString name, double cost, float volume) :Product(name, cost)
{
    if(volume <=0 || volume >999) throw "Drink volume";
    else this->volume = volume;
}

void Drink::setVolume(float volume)
{
    if(volume <=0 || volume >999) throw "Drink volume";
    else this->volume = volume;
}

float Drink::getVolume() const &
{
    return volume;
}

QString Drink::type() const &
{
    return "Drink";
}

QString Drink::toQString() const &
{
    QString tmp;
    tmp += Product::toQString();
    tmp += '=';
    tmp += QString::number(volume);
    return tmp;
}

bool Drink::operator <(const Drink &obj) const &
{
    return (this->cost < obj.cost);
}

bool Drink::operator >(const Drink &obj) const &
{
    return (!((*this) < obj));
}
