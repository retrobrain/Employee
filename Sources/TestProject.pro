TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    employee.cpp \
    fixedrateemployee.cpp \
    hourlyrateemployee.cpp \
    database.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    employee.h \
    fixedrateemployee.h \
    hourlyrateemployee.h \
    globalappconsts.h \
    database.h

