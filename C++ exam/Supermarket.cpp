#include "Supermarket.h"
#include "ui_Supermarket.h"

Supermarket::Supermarket(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Supermarket)
{

    ui->setupUi(this);
    addForm = new addTovar();
    try {
        database.readFromFile();
    }  catch (const char* sent) {
         QMessageBox::about(this,"Добавление",sent);
    }
    showTable();
    QMessageBox::about(this,"Добавление","Для добавления товара нажмите дважды на его название");
    connect(addForm,SIGNAL(sendString(QString)), this, SLOT(catchObject(QString)));

}

Supermarket::~Supermarket()
{
    QString path = QCoreApplication::applicationDirPath();

        QFile file(path+"\\Base.txt");
            if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                QMessageBox::critical(this,"save","Не удалось сохранить данные");
                return;
            }
            else{
                QTextStream write(&file);
                write << database.toString();
            }
    delete ui;
}

void Supermarket::showTable()
{
        int j = 0, check = 0;
    QString type;
    ui->tableWidget_sklad->setRowCount(database.getSize());
    if(ui->checkBox_Product->isChecked() || ui->checkBox_Meat->isChecked() || ui->checkBox_Drink->isChecked() || ui->checkBox_Dairy->isChecked()){
        for(int i = 0; i<database.getSize(); i++){

        type = database.getType(i);
        QTableWidgetItem* cellName = new QTableWidgetItem;
                cellName->setText(" ");

                QTableWidgetItem* cellCost = new QTableWidgetItem;
                        cellCost->setText(" ");

                        QTableWidgetItem* cellVolume = new QTableWidgetItem;
                                cellVolume->setText(" ");

                                QTableWidgetItem* cellPart = new QTableWidgetItem;
                                        cellPart->setText(" ");

                                        QTableWidgetItem* cellUseBefore= new QTableWidgetItem;
                                                cellUseBefore->setText(" ");


                                                QTableWidgetItem* cellWeight= new QTableWidgetItem;
                                                        cellWeight->setText(" ");
                                                        ui->tableWidget_sklad->setRowCount(database.getSize()-check);

        if(type == "Product" && ui->checkBox_Product->isChecked()){
            cellName->setText(database.getName(i));
            cellCost->setText(database.getCost(i));
            cellWeight->setText(database.getWeight(i));
        }
        else if(type == "Meat"&& ui->checkBox_Meat->isChecked()){
            cellName->setText(database.getName(i));
            cellCost->setText(database.getCost(i));
           cellPart->setText(database.getPart(i));
                       cellWeight->setText(database.getWeight(i));
        }
        else if(type == "Drink"&& ui->checkBox_Drink->isChecked()){
            cellName->setText(database.getName(i));
            cellCost->setText(database.getCost(i));
             cellVolume->setText(database.getVolume(i));
                         cellWeight->setText(database.getWeight(i));
        }
        else if(type == "Dairy"&& ui->checkBox_Dairy->isChecked()){
            cellName->setText(database.getName(i));
            cellCost->setText(database.getCost(i));
             cellVolume->setText(database.getVolume(i));
             cellUseBefore->setText(database.getUseBefore(i));
                         cellWeight->setText(database.getWeight(i));
        }
        if(cellName->text() == " "){
            j--;
            check++;
        }
        else{
        ui->tableWidget_sklad->setItem(j,0,cellName);
        ui->tableWidget_sklad->setItem(j,1,cellCost);
        ui->tableWidget_sklad->setItem(j,2,cellVolume);
        ui->tableWidget_sklad->setItem(j,3,cellPart);
        ui->tableWidget_sklad->setItem(j,4,cellUseBefore);
        ui->tableWidget_sklad->setItem(j,5,cellWeight);
        }
      j++;
     }
    }
    else   ui->tableWidget_sklad->setRowCount(0);
}


void Supermarket::showKlientTable()
{
    int j = 0;
    QString type;
    ui->tableWidget_sklad_2->setRowCount(klientDatabase.getSize());
        for(int i = 0; i<klientDatabase.getSize(); i++){

        type = klientDatabase.getType(i);
        QTableWidgetItem* cellName = new QTableWidgetItem;
                cellName->setText(" ");

                QTableWidgetItem* cellCost = new QTableWidgetItem;
                        cellCost->setText(" ");

                        QTableWidgetItem* cellVolume = new QTableWidgetItem;
                                cellVolume->setText(" ");

                                QTableWidgetItem* cellPart = new QTableWidgetItem;
                                        cellPart->setText(" ");

                                        QTableWidgetItem* cellUseBefore= new QTableWidgetItem;
                                                cellUseBefore->setText(" ");

                                                QTableWidgetItem* cellWeight= new QTableWidgetItem;
                                                        cellWeight->setText(" ");

        if(type == "Product"){
            cellName->setText(klientDatabase.getName(i));
            cellCost->setText(klientDatabase.getCost(i));
            cellWeight->setText(klientDatabase.getWeight(i));
        }
        else if(type == "Meat"){
           cellName->setText(klientDatabase.getName(i));
           cellCost->setText(klientDatabase.getCost(i));
           cellPart->setText(klientDatabase.getPart(i));
           cellWeight->setText(klientDatabase.getWeight(i));
        }
        else if(type == "Drink"){
            cellName->setText(klientDatabase.getName(i));
            cellCost->setText(klientDatabase.getCost(i));
            cellVolume->setText(klientDatabase.getVolume(i));
            cellWeight->setText(klientDatabase.getWeight(i));
        }
        else if(type == "Dairy"){
            cellName->setText(klientDatabase.getName(i));
            cellCost->setText(klientDatabase.getCost(i));
            cellVolume->setText(klientDatabase.getVolume(i));
            cellUseBefore->setText(klientDatabase.getUseBefore(i));
            cellWeight->setText(klientDatabase.getWeight(i));
        }
        if(cellName->text() == " "){
            j--;
        }
        else{
        ui->tableWidget_sklad_2->setItem(j,0,cellName);
        ui->tableWidget_sklad_2->setItem(j,1,cellCost);
        ui->tableWidget_sklad_2->setItem(j,2,cellVolume);
        ui->tableWidget_sklad_2->setItem(j,3,cellPart);
        ui->tableWidget_sklad_2->setItem(j,4,cellUseBefore);
        ui->tableWidget_sklad_2->setItem(j,5,cellWeight);
        }
        j++;
    }
}

void Supermarket::saveKlientDatabase()
{
    QString path = QCoreApplication::applicationDirPath();

        QFile file(path+"\\Sales.txt");
            if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
            {
                QMessageBox::critical(this,"save","Не удалось сохранить данные");
                return;
            }
            else{
                QTextStream write(&file);
                write << QDateTime::currentDateTime().toString();
                write << '\n';
                write << klientDatabase.toString();
                write << "\n___________________________________\n";
            }
}

void Supermarket::on_checkBox_Product_stateChanged(int arg1)
{
            showTable();
}


void Supermarket::on_checkBox_Drink_stateChanged(int arg1)
{
            showTable();
}


void Supermarket::on_checkBox_Dairy_stateChanged(int arg1)
{
            showTable();
}


void Supermarket::on_checkBox_Meat_stateChanged(int arg1)
{
            showTable();
}


void Supermarket::on_tableWidget_sklad_itemDoubleClicked(QTableWidgetItem *item)
{
    try{
    QString type;
    int getNumber = -1;
    double weight = ui->doubleSpinBox->value();
    for(int i = 0; i<database.getSize(); i++){
        if(item->text() == database.getName(i)){
            getNumber = i;
            type = database.getType(i);
            if(type == "Product") klientDatabase.addElement(new Product(database.getName(i),
            database.getCost(i).toDouble()),weight);
            else if(type == "Meat")klientDatabase.addElement(new Meat(database.getName(i),
            database.getCost(i).toDouble(),database.getPart(i)),weight);
            else if(type == "Drink")klientDatabase.addElement(new Drink(database.getName(i),
            database.getCost(i).toDouble(),database.getVolume(i).toFloat()),weight);
            else if(type == "Dairy") klientDatabase.addElement(new Dairy(database.getName(i),
            database.getCost(i).toDouble(),database.getVolume(i).toFloat(),
            QDate::fromString(database.getUseBefore(i), "dd.MM.yyyy")),weight);

            else QMessageBox::critical(this,"Добавление","Для добавления товара нажмите дважды на его название");
        }
    }
    ui->label_money->setText(QString::number(money+=database.SellElement(getNumber,weight)));
    showKlientTable();
    showTable();
    }  catch (const char* sms) {
        QMessageBox::about(this,"Eror",sms);
    }
}


void Supermarket::on_pushButton_clicked()
{
    saveKlientDatabase();
    klientDatabase.clear();
    this->klientDatabase = Sklad();
    money = 0;
    ui->label_money->setText("0");
     showKlientTable();
}


void Supermarket::on_tableWidget_sklad_2_itemDoubleClicked(QTableWidgetItem *item)
{
    try{
    QString type;
    int getNumber = -1;
    double weight = ui->doubleSpinBox->value();
    for(int i = 0; i<klientDatabase.getSize(); i++){
        if(item->text() == klientDatabase.getName(i)){
            getNumber = i;
            type = klientDatabase.getType(i);
            if(type == "Product") database.addElement(new Product(klientDatabase.getName(i),
            klientDatabase.getCost(i).toDouble()),weight);
            else if(type == "Meat")database.addElement(new Meat(klientDatabase.getName(i),
            klientDatabase.getCost(i).toDouble(),klientDatabase.getPart(i)),weight);
            else if(type == "Drink")database.addElement(new Drink(klientDatabase.getName(i),
            klientDatabase.getCost(i).toDouble(),klientDatabase.getVolume(i).toFloat()),weight);
            else if(type == "Dairy")database.addElement(new Dairy(klientDatabase.getName(i),
            klientDatabase.getCost(i).toDouble(),klientDatabase.getVolume(i).toFloat(),
            QDate::fromString(klientDatabase.getUseBefore(i), "dd.MM.yyyy")),weight);
            else
                QMessageBox::critical(this,"Добавление","Для добавления товара нажмите дважды на его название");
        }
    }
        ui->label_money->setText(QString::number(money-=klientDatabase.SellElement(getNumber,weight)));
    showKlientTable();
    showTable();
    }  catch (const char* sms) {
        QMessageBox::about(this,"Eror",sms);
    }
}

void Supermarket::on_pushButton_addTovar_clicked()
{
    addForm->show();
}

void Supermarket::catchObject(QString a)
{
    try{
    QString line = a;
    QStringList lines = line.split("=");
   float weight = lines.at(0).toFloat();
    database.addElement(database.stringToObj(line),weight);
    showTable();
}  catch (const char* sms) {
    QMessageBox::about(this,"Eror",sms);
}
}
