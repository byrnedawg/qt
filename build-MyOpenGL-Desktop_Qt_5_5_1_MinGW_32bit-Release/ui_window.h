/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "myglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    MyGLWidget *myGLWidget;
    QSlider *xRotSlider;
    QSlider *yRotSlider;
    QSlider *zRotSlider;

    void setupUi(QWidget *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->resize(400, 300);
        myGLWidget = new MyGLWidget(Window);
        myGLWidget->setObjectName(QStringLiteral("myGLWidget"));
        myGLWidget->setGeometry(QRect(40, 10, 331, 171));
        xRotSlider = new QSlider(Window);
        xRotSlider->setObjectName(QStringLiteral("xRotSlider"));
        xRotSlider->setGeometry(QRect(10, 210, 361, 19));
        xRotSlider->setMaximum(360);
        xRotSlider->setSingleStep(16);
        xRotSlider->setPageStep(15);
        xRotSlider->setOrientation(Qt::Horizontal);
        xRotSlider->setTickPosition(QSlider::TicksAbove);
        xRotSlider->setTickInterval(15);
        yRotSlider = new QSlider(Window);
        yRotSlider->setObjectName(QStringLiteral("yRotSlider"));
        yRotSlider->setGeometry(QRect(10, 240, 361, 19));
        yRotSlider->setMaximum(360);
        yRotSlider->setSingleStep(16);
        yRotSlider->setPageStep(15);
        yRotSlider->setOrientation(Qt::Horizontal);
        yRotSlider->setTickPosition(QSlider::TicksAbove);
        yRotSlider->setTickInterval(15);
        zRotSlider = new QSlider(Window);
        zRotSlider->setObjectName(QStringLiteral("zRotSlider"));
        zRotSlider->setGeometry(QRect(10, 270, 361, 19));
        zRotSlider->setMaximum(360);
        zRotSlider->setSingleStep(16);
        zRotSlider->setPageStep(15);
        zRotSlider->setOrientation(Qt::Horizontal);
        zRotSlider->setTickPosition(QSlider::TicksAbove);
        zRotSlider->setTickInterval(15);

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QWidget *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Window", 0));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
