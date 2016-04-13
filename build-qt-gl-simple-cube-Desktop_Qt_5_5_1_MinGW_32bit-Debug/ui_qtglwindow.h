/********************************************************************************
** Form generated from reading UI file 'qtglwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGLWINDOW_H
#define UI_QTGLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGLWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGLWindow)
    {
        if (QtGLWindow->objectName().isEmpty())
            QtGLWindow->setObjectName(QStringLiteral("QtGLWindow"));
        QtGLWindow->resize(400, 300);
        menuBar = new QMenuBar(QtGLWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGLWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGLWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGLWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGLWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGLWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGLWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGLWindow->setStatusBar(statusBar);

        retranslateUi(QtGLWindow);

        QMetaObject::connectSlotsByName(QtGLWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QtGLWindow)
    {
        QtGLWindow->setWindowTitle(QApplication::translate("QtGLWindow", "QtGLWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class QtGLWindow: public Ui_QtGLWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGLWINDOW_H
