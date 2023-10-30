#ifndef DRINK_H
#define DRINK_H
#include "Product.h"

class Drink :public Product
{
protected:
float volume;
public:
    Drink();
    Drink(QString name,double cost, float volume);

    void setVolume (float volume);

    float getVolume() const&;
virtual QString type()const& override;

    virtual QString toQString() const& override;

    bool operator <(const Drink& obj) const&;
 bool operator >(const Drink& obj) const&;
};

#endif // DRINK_H
