/********************************************************************************
** Form generated from reading UI file 'addtovar.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOVAR_H
#define UI_ADDTOVAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addTovar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_Product;
    QRadioButton *radioButton_Drink;
    QRadioButton *radioButton_Diary;
    QRadioButton *radioButton_Meat;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_Weight;
    QLabel *label;
    QLineEdit *lineEdit_Name;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_Cost;
    QLabel *label_volume;
    QDoubleSpinBox *doubleSpinBox_volume;
    QLabel *label_date;
    QDateEdit *dateEdit;
    QLabel *label_Part;
    QLineEdit *lineEdit_Part;
    QPushButton *pushButton;

    void setupUi(QDialog *addTovar)
    {
        if (addTovar->objectName().isEmpty())
            addTovar->setObjectName(QString::fromUtf8("addTovar"));
        addTovar->resize(344, 393);
        widget = new QWidget(addTovar);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 341, 391));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButton_Product = new QRadioButton(widget);
        radioButton_Product->setObjectName(QString::fromUtf8("radioButton_Product"));
        radioButton_Product->setChecked(true);

        gridLayout->addWidget(radioButton_Product, 0, 0, 1, 1);

        radioButton_Drink = new QRadioButton(widget);
        radioButton_Drink->setObjectName(QString::fromUtf8("radioButton_Drink"));

        gridLayout->addWidget(radioButton_Drink, 0, 1, 1, 1);

        radioButton_Diary = new QRadioButton(widget);
        radioButton_Diary->setObjectName(QString::fromUtf8("radioButton_Diary"));

        gridLayout->addWidget(radioButton_Diary, 0, 2, 1, 1);

        radioButton_Meat = new QRadioButton(widget);
        radioButton_Meat->setObjectName(QString::fromUtf8("radioButton_Meat"));

        gridLayout->addWidget(radioButton_Meat, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        doubleSpinBox_Weight = new QDoubleSpinBox(widget);
        doubleSpinBox_Weight->setObjectName(QString::fromUtf8("doubleSpinBox_Weight"));
        doubleSpinBox_Weight->setMaximum(9999999999999.000000000000000);
        doubleSpinBox_Weight->setSingleStep(0.500000000000000);

        verticalLayout->addWidget(doubleSpinBox_Weight);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineEdit_Name = new QLineEdit(widget);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));

        verticalLayout->addWidget(lineEdit_Name);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        doubleSpinBox_Cost = new QDoubleSpinBox(widget);
        doubleSpinBox_Cost->setObjectName(QString::fromUtf8("doubleSpinBox_Cost"));
        doubleSpinBox_Cost->setMaximum(9999999999999.000000000000000);
        doubleSpinBox_Cost->setSingleStep(0.500000000000000);

        verticalLayout->addWidget(doubleSpinBox_Cost);

        label_volume = new QLabel(widget);
        label_volume->setObjectName(QString::fromUtf8("label_volume"));
        label_volume->setEnabled(false);
        label_volume->setFont(font);

        verticalLayout->addWidget(label_volume);

        doubleSpinBox_volume = new QDoubleSpinBox(widget);
        doubleSpinBox_volume->setObjectName(QString::fromUtf8("doubleSpinBox_volume"));
        doubleSpinBox_volume->setEnabled(false);
        doubleSpinBox_volume->setMaximum(999.000000000000000);
        doubleSpinBox_volume->setSingleStep(0.500000000000000);

        verticalLayout->addWidget(doubleSpinBox_volume);

        label_date = new QLabel(widget);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setEnabled(false);
        label_date->setFont(font);

        verticalLayout->addWidget(label_date);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setEnabled(false);
        dateEdit->setMouseTracking(false);
        dateEdit->setTabletTracking(false);
        dateEdit->setAcceptDrops(false);
        dateEdit->setAccelerated(false);
        dateEdit->setCalendarPopup(true);

        verticalLayout->addWidget(dateEdit);

        label_Part = new QLabel(widget);
        label_Part->setObjectName(QString::fromUtf8("label_Part"));
        label_Part->setEnabled(false);
        label_Part->setFont(font);

        verticalLayout->addWidget(label_Part);

        lineEdit_Part = new QLineEdit(widget);
        lineEdit_Part->setObjectName(QString::fromUtf8("lineEdit_Part"));
        lineEdit_Part->setEnabled(false);

        verticalLayout->addWidget(lineEdit_Part);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(addTovar);

        QMetaObject::connectSlotsByName(addTovar);
    } // setupUi

    void retranslateUi(QDialog *addTovar)
    {
        addTovar->setWindowTitle(QCoreApplication::translate("addTovar", "Dialog", nullptr));
        radioButton_Product->setText(QCoreApplication::translate("addTovar", "\320\237\321\200\320\276\320\264\321\203\320\272\321\202\321\213", nullptr));
        radioButton_Drink->setText(QCoreApplication::translate("addTovar", "\320\235\320\260\320\277\320\270\321\202\320\272\320\270", nullptr));
        radioButton_Diary->setText(QCoreApplication::translate("addTovar", "\320\234\320\276\320\273\320\276\321\207\320\272\320\260", nullptr));
        radioButton_Meat->setText(QCoreApplication::translate("addTovar", "\320\234\321\217\321\201\320\276", nullptr));
        label_3->setText(QCoreApplication::translate("addTovar", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\265\321\201 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label->setText(QCoreApplication::translate("addTovar", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("addTovar", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\206\320\265\320\275\321\203 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_volume->setText(QCoreApplication::translate("addTovar", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\320\261\321\212\320\265\320\274 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_date->setText(QCoreApplication::translate("addTovar", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \321\201\321\200\320\276\320\272\320\260 \320\263\320\276\320\264\320\275\320\276\321\201\321\202\320\270 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_Part->setText(QCoreApplication::translate("addTovar", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\260\321\202\321\214 \321\202\320\265\320\273\320\260 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        pushButton->setText(QCoreApplication::translate("addTovar", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTovar: public Ui_addTovar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOVAR_H
