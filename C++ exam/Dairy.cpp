#include "Dairy.h"

Dairy::Dairy()
{
    this->useBefore = QDate(1,1,2021);
}

Dairy::Dairy(QString name, double cost, float volume, QDate useBefore) :Drink(name, cost, volume)
{
    if(useBefore <= QDate::currentDate()) throw "Dairy date is <= now";
    else this->useBefore = useBefore;
}

void Dairy::setUseBefore(QDate useBefore)
{
    if(useBefore <= QDate::currentDate()) throw "Dairy date is <= now";
    else this->useBefore = useBefore;
}

QDate Dairy::getUseBefore() const &
{
    return useBefore;
}

QString Dairy::type() const &
{
    return "Dairy";
}

QString Dairy::toQString() const &
{
    QString tmp;
    tmp += Drink::toQString();
    tmp += '=';
    tmp += useBefore.toString("dd.MM.yyyy");
    return tmp;
}

bool Dairy::operator <(const Dairy &obj) const &
{
    return (this->cost < obj.cost);
}

bool Dairy::operator >(const Dairy &obj) const &
{
    return (!((*this) < obj));
}

