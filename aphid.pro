#-------------------------------------------------
#
# Project created by QtCreator 2015-04-28T16:25:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = aphid
TEMPLATE = app



INCLUDEPATH += C://opencv300RC//include\
               C://opencv300RC//include//opencv\
               C://opencv300RC//include//opencv2

LIBS += C://opencv300RC//lib//opencv_world300.lib\
        C://opencv300RC//lib//opencv_world300d.lib\
        C://opencv300RC//lib//opencv_ts300.lib\
        C://opencv300RC//lib//opencv_ts300d.lib


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

