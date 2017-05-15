#-------------------------------------------------
#
# Project created by QtCreator 2016-12-16T13:53:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = new_world
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gestionaires.cpp \
    gestionproduit.cpp \
    gestiondupersonnel.cpp \
    gestiondesstatistiques.cpp \
    controleurs.cpp \
    controlepointdevente.cpp \
    controledesproducteurs.cpp

HEADERS  += mainwindow.h \
    gestionaires.h \
    gestionproduit.h \
    gestiondupersonnel.h \
    gestiondesstatistiques.h \
    controleurs.h \
    controlepointdevente.h \
    controledesproducteurs.h

FORMS    += mainwindow.ui \
    gestionaires.ui \
    gestionproduit.ui \
    gestiondupersonnel.ui \
    gestiondesstatistiques.ui \
    controleurs.ui \
    controlepointdevente.ui \
    controledesproducteurs.ui
