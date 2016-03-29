/********************************************************************************
** Form generated from reading UI file 'painterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTERDIALOG_H
#define UI_PAINTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_PainterDialog
{
public:

    void setupUi(QDialog *PainterDialog)
    {
        if (PainterDialog->objectName().isEmpty())
            PainterDialog->setObjectName(QStringLiteral("PainterDialog"));
        PainterDialog->resize(400, 300);

        retranslateUi(PainterDialog);

        QMetaObject::connectSlotsByName(PainterDialog);
    } // setupUi

    void retranslateUi(QDialog *PainterDialog)
    {
        PainterDialog->setWindowTitle(QApplication::translate("PainterDialog", "PainterDialog", 0));
    } // retranslateUi

};

namespace Ui {
    class PainterDialog: public Ui_PainterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTERDIALOG_H
