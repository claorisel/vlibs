#-------------------------------------------------
#
# Project created by QtCreator 2018-12-14T13:26:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = accelerometer_view
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    points.cpp

HEADERS += \
#        mainwindow.h \
    points.h

#FORMS += \
#        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#VLIBS_DIR = /home/el/trash/ELSD_vlibs/vlibs
VLIBS_DIR = $$PWD/../../vlibs
include( $$VLIBS_DIR/qcustomplot/qcustomplot.pri )
include( $$VLIBS_DIR/vstring/vstring.pri )
include( $$VLIBS_DIR/vsignal/vsignal.pri )
include( $$VLIBS_DIR/vlog/vlog_qt.pri )
include( $$VLIBS_DIR/hdlc_parser/hdlc_parser.pri )
