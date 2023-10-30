#ifndef DAIRY_H
#define DAIRY_H
#include <QDate>
#include "Drink.h"

class Dairy : public Drink
{
protected:
QDate useBefore;
public:
    Dairy();
    Dairy(QString name,double cost, float volume, QDate useBefore);

    void setUseBefore (QDate useBefore);

    QDate getUseBefore() const&;
virtual QString type()const& override;

    virtual QString toQString() const& override;

    bool operator <(const Dairy& obj) const&;
 bool operator >(const Dairy& obj) const&;
};

#endif // DAIRY_H
