#ifndef MEAT_H
#define MEAT_H

#include "Product.h"

class Meat : public Product
   {
protected:
QString part;
   public:
Meat();
Meat(QString name,double cost, QString part);

void setPart (QString part);
QString getPart() const&;
virtual QString type()const& override;

virtual QString toQString() const& override;

bool operator <(const Meat& obj) const&;
bool operator >(const Meat& obj) const&;
};

#endif // MEAT_H
