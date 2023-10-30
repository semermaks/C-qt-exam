#include "sklad.h"
#include <QDebug>

Sklad::Sklad()
{

}

void Sklad::addElement(Product* obj, float weight)
{
    int counter = 0;
    QMap<Product*,float>::iterator iter;
    QMap<Product*,float>::iterator save;
    int i = 0;
for(iter = arr.begin(); iter!= arr.end(); iter++, i++){
    if(obj->getName() == iter.key()->getName()){
        save = iter;
        counter++;
    }
}
    if(weight > 0 && counter == 0) arr.insert(obj, weight);
    else if(weight > 0 ) save.value() +=weight;
    else throw "Sklad weight <=0 ";
}

double Sklad::SellElement(int number, float weight)
{
    QMap<Product*,float>::iterator iter;
    QMap<Product*,float>::iterator dell;
    int i = 0, check = 0;
    float oldValue;
    double cost;
    for(iter = arr.begin(); iter != arr.end();i++){
        dell = iter;
        iter++;
        if(i == number){
            if(weight == dell.value()){
            check++;
            cost = weight*dell.key()->getCost();
            dell.value() = 0;
            }
            else if(weight < dell.value()){
            check++;
            cost = weight*dell.key()->getCost();
            oldValue = dell.value();
            oldValue -= weight;
            dell.value() = oldValue;
            }
            else throw "Нехватка товара";
        }
    }
    if(check == 0) throw  "SellElement element not found";
    if(check > 1) throw  "SellElement deleted 2 or more elements";
    else return cost;
}

int Sklad::getSize() const&
{
    return arr.size();
}

void Sklad::readFromFile()
{
    float weight;
    QString path = QCoreApplication::applicationDirPath();

       QFile file(path+"\\Base.txt");
           if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
           {
               throw "Не удалось выгрузить данные";
               return;
           }

           while (!file.atEnd()) {
             QString line = file.readLine();
             QStringList lines = line.split("=");
             weight = lines.at(0).toFloat();
             addElement(stringToObj(line),weight);
           }
}

Product* Sklad::stringToObj(QString line)
{

    QString type,name,chast,tmp,tmp2; // tmp и tmp 2 для вырезания \n у стринга для преврощения её в датту
    float volume;
    double cost;
    QDate date;
    QStringList lines = line.split("=");
    type = lines.at(1);
    name = lines.at(2);
    cost = lines.at(3).toDouble();
    if(type == "Product"){
      return (new Product(name, cost));
    }
    else if(type == "Meat"){
       chast =  lines.at(4);
       chast.remove(chast.lastIndexOf('\n'),1);
     return (new Meat (name, cost,chast));

    }
    else if(type == "Drink" || type == "Dairy"){
       volume =  lines.at(4).toFloat();
       if(type == "Dairy"){
           tmp = lines.at(5);
            //tmp.remove(tmp.lastIndexOf(' '),2); //удаляем \n из текста
            tmp.remove(tmp.lastIndexOf('\n'),1);
           date = QDate::fromString(tmp, "dd.MM.yyyy");
         return (new Dairy (name, cost,volume,date));
       }
       else{
         return  (new Drink(name, cost,volume));
       }
    }
    else throw "Type eror";
}

QString Sklad::getName(int a)
{
    int i = 0;
    QMap<Product*,float>::iterator iter;
for(iter = arr.begin(); iter!= arr.end(); iter++){
if(i == a) return iter.key()->getName();
i++;
}



}

QString Sklad::getCost(int a)
{
    int i = 0;
    QMap<Product*,float>::iterator iter;
for(iter = arr.begin(); iter!= arr.end(); iter++){
    if(i == a) return QString::number(iter.key()->getCost());
    i++;
    }

    }

QString Sklad::getType(int a)
{
    int i = 0;
    QMap<Product*,float>::iterator iter;
for(iter = arr.begin(); iter!= arr.end(); iter++){
    if(i == a) return iter.key()->type();
    i++;
    }

    }

QString Sklad::getVolume(int a)
{
    int i = 0;
    QMap<Product*,float>::iterator iter;
for(iter = arr.begin(); iter!= arr.end(); iter++){
    if(i == a) {

        if(iter.key()->type() == "Drink" || iter.key()->type() == "Dairy")return QString::number(((Drink *)iter.key())->getVolume());

    }
        i++;
    }
}
QString Sklad::getUseBefore(int a)
{
    int i = 0;
    QMap<Product*,float>::iterator iter;
for(iter = arr.begin(); iter!= arr.end(); iter++){
    if(i == a){
        qDebug() << ((Dairy *)iter.key())->getUseBefore().toString("dd.MM.yyyy") << " \n";
        return((Dairy *)iter.key())->getUseBefore().toString("dd.MM.yyyy");
    }
    i++;
    }

    }

QString Sklad::getPart(int a)
{
    int i = 0;
    QMap<Product*,float>::iterator iter;
for(iter = arr.begin(); iter!= arr.end(); iter++){
    if(i == a) return ((Meat *)iter.key())->getPart();
    i++;
    }

    }

QString Sklad::getWeight(int a)
{
    int i = 0;
    QMap<Product*,float>::iterator iter;
for(iter = arr.begin(); iter!= arr.end(); iter++){
    if(i == a) return QString::number(iter.value());
    i++;
    }

    }

QString Sklad::toString()
{
    QString tmp;
    QMap<Product*,float>::iterator iter;
for(iter = arr.begin(); iter!= arr.end(); iter++)
{

    tmp+= QString::number(iter.value());
    tmp+= '=';
    tmp+= iter.key()->type();
    tmp+= iter.key()->toQString();
    tmp+= '\n';
}
return tmp;
}

void Sklad::clear()
{
    arr.clear();
}

