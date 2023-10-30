/********************************************************************************
** Form generated from reading UI file 'Supermarket.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERMARKET_H
#define UI_SUPERMARKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Supermarket
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_Meat;
    QCheckBox *checkBox_Dairy;
    QCheckBox *checkBox_Drink;
    QCheckBox *checkBox_Product;
    QTableWidget *tableWidget_sklad;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_money;
    QLabel *label_3;
    QTableWidget *tableWidget_sklad_2;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_addTovar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Supermarket)
    {
        if (Supermarket->objectName().isEmpty())
            Supermarket->setObjectName(QString::fromUtf8("Supermarket"));
        Supermarket->resize(1451, 691);
        Supermarket->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Supermarket);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 671, 601));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox_Meat = new QCheckBox(layoutWidget);
        checkBox_Meat->setObjectName(QString::fromUtf8("checkBox_Meat"));
        checkBox_Meat->setStyleSheet(QString::fromUtf8(""));
        checkBox_Meat->setChecked(true);

        gridLayout->addWidget(checkBox_Meat, 0, 3, 1, 1);

        checkBox_Dairy = new QCheckBox(layoutWidget);
        checkBox_Dairy->setObjectName(QString::fromUtf8("checkBox_Dairy"));
        checkBox_Dairy->setStyleSheet(QString::fromUtf8(""));
        checkBox_Dairy->setChecked(true);

        gridLayout->addWidget(checkBox_Dairy, 0, 2, 1, 1);

        checkBox_Drink = new QCheckBox(layoutWidget);
        checkBox_Drink->setObjectName(QString::fromUtf8("checkBox_Drink"));
        checkBox_Drink->setStyleSheet(QString::fromUtf8(""));
        checkBox_Drink->setChecked(true);

        gridLayout->addWidget(checkBox_Drink, 0, 1, 1, 1);

        checkBox_Product = new QCheckBox(layoutWidget);
        checkBox_Product->setObjectName(QString::fromUtf8("checkBox_Product"));
        checkBox_Product->setStyleSheet(QString::fromUtf8(""));
        checkBox_Product->setChecked(true);

        gridLayout->addWidget(checkBox_Product, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tableWidget_sklad = new QTableWidget(layoutWidget);
        if (tableWidget_sklad->columnCount() < 6)
            tableWidget_sklad->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_sklad->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_sklad->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_sklad->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_sklad->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_sklad->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_sklad->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget_sklad->setObjectName(QString::fromUtf8("tableWidget_sklad"));
        QPalette palette;
        tableWidget_sklad->setPalette(palette);
        tableWidget_sklad->setFocusPolicy(Qt::StrongFocus);
        tableWidget_sklad->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget_sklad->setLayoutDirection(Qt::LeftToRight);
        tableWidget_sklad->setStyleSheet(QString::fromUtf8(""));
        tableWidget_sklad->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_sklad->horizontalHeader()->setMinimumSectionSize(41);
        tableWidget_sklad->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget_sklad->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget_sklad);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 1541, 31));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(770, 640, 229, 31));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_money = new QLabel(layoutWidget2);
        label_money->setObjectName(QString::fromUtf8("label_money"));
        QFont font1;
        font1.setPointSize(14);
        label_money->setFont(font1);
        label_money->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(label_money, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        tableWidget_sklad_2 = new QTableWidget(centralwidget);
        if (tableWidget_sklad_2->columnCount() < 6)
            tableWidget_sklad_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_sklad_2->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_sklad_2->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_sklad_2->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_sklad_2->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_sklad_2->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_sklad_2->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        tableWidget_sklad_2->setObjectName(QString::fromUtf8("tableWidget_sklad_2"));
        tableWidget_sklad_2->setGeometry(QRect(770, 30, 671, 601));
        tableWidget_sklad_2->setStyleSheet(QString::fromUtf8(""));
        tableWidget_sklad_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_sklad_2->horizontalHeader()->setMinimumSectionSize(41);
        tableWidget_sklad_2->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget_sklad_2->horizontalHeader()->setStretchLastSection(true);
        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(590, 640, 81, 31));
        doubleSpinBox->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox->setMinimum(1.000000000000000);
        doubleSpinBox->setMaximum(100000000000000004764729344.000000000000000);
        doubleSpinBox->setSingleStep(0.500000000000000);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 640, 145, 29));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1250, 640, 191, 31));
        pushButton->setAutoFillBackground(true);
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_addTovar = new QPushButton(centralwidget);
        pushButton_addTovar->setObjectName(QString::fromUtf8("pushButton_addTovar"));
        pushButton_addTovar->setGeometry(QRect(0, 640, 191, 31));
        pushButton_addTovar->setStyleSheet(QString::fromUtf8(""));
        Supermarket->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Supermarket);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Supermarket->setStatusBar(statusbar);

        retranslateUi(Supermarket);

        QMetaObject::connectSlotsByName(Supermarket);
    } // setupUi

    void retranslateUi(QMainWindow *Supermarket)
    {
        Supermarket->setWindowTitle(QCoreApplication::translate("Supermarket", "Supermarket", nullptr));
        checkBox_Meat->setText(QCoreApplication::translate("Supermarket", "\320\234\321\217\321\201\320\276", nullptr));
        checkBox_Dairy->setText(QCoreApplication::translate("Supermarket", "\320\234\320\276\320\273\320\276\321\207\320\272\320\260", nullptr));
        checkBox_Drink->setText(QCoreApplication::translate("Supermarket", "\320\235\320\260\320\277\320\270\321\202\320\272\320\270", nullptr));
        checkBox_Product->setText(QCoreApplication::translate("Supermarket", "\320\237\321\200\320\276\320\264\321\203\320\272\321\202\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_sklad->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Supermarket", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_sklad->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Supermarket", "\320\246\320\265\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_sklad->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Supermarket", "\320\236\320\261\321\214\321\221\320\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_sklad->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Supermarket", "\320\247\320\260\321\201\321\202\321\214 \321\202\320\265\320\273\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_sklad->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Supermarket", "\320\241\321\200\320\276\320\272 \320\263\320\276\320\264\320\275\320\276\321\201\321\202\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_sklad->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Supermarket", "\320\222\320\265\321\201", nullptr));
        label->setText(QCoreApplication::translate("Supermarket", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265 \321\202\320\276\320\262\320\260\321\200\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("Supermarket", "\320\222\320\260\321\210\320\260 \320\272\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        label_money->setText(QCoreApplication::translate("Supermarket", "0", nullptr));
        label_3->setText(QCoreApplication::translate("Supermarket", "\320\230\321\202\320\276\320\263\320\276 \320\272 \320\276\320\277\320\273\320\260\321\202\320\265: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_sklad_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Supermarket", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_sklad_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Supermarket", "\320\246\320\265\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_sklad_2->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Supermarket", "\320\236\320\261\321\214\321\221\320\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_sklad_2->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Supermarket", "\320\247\320\260\321\201\321\202\321\214 \321\202\320\265\320\273\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_sklad_2->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Supermarket", "\320\241\321\200\320\276\320\272 \320\263\320\276\320\264\320\275\320\276\321\201\321\202\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_sklad_2->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Supermarket", "\320\222\320\265\321\201", nullptr));
        label_4->setText(QCoreApplication::translate("Supermarket", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\265\321\201: ", nullptr));
        pushButton->setText(QCoreApplication::translate("Supermarket", "\320\236\320\277\320\273\320\260\321\202\320\260", nullptr));
        pushButton_addTovar->setText(QCoreApplication::translate("Supermarket", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Supermarket: public Ui_Supermarket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERMARKET_H
