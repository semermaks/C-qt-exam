QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Dairy.cpp \
    Drink.cpp \
    Product.cpp \
    addtovar.cpp \
    main.cpp \
    Supermarket.cpp \
    meat.cpp \
    sklad.cpp

HEADERS += \
    Dairy.h \
    Drink.h \
    Product.h \
    Supermarket.h \
    addtovar.h \
    meat.h \
    sklad.h

FORMS += \
    Supermarket.ui \
    addtovar.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

STATECHARTS +=

DISTFILES +=
