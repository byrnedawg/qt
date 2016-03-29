#-------------------------------------------------
#
# Project created by QtCreator 2016-03-24T15:11:03
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainWindow
TEMPLATE = app

LIBS +=-LC:/Qt/5.5/mingw492_32/lib/libQt5OpenGL.a-lopengl32

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
