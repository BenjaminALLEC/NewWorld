#-------------------------------------------------
#
# Project created by QtCreator 2017-03-03T14:12:38
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = client_lourd_nw
TEMPLATE = app


SOURCES += main.cpp\
    dialog_connection.cpp \
    controller.cpp \
    manager.cpp

HEADERS  += \
    dialog_connection.h \
    controller.h \
    manager.h

FORMS    += \
    dialog_connection.ui \
    controller.ui \
    manager.ui
