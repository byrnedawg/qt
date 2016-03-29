#ifndef PAINTERDIALOG_H
#define PAINTERDIALOG_H

#include <QDialog>
#include <QPainter>

namespace Ui {
class PainterDialog;
}

class PainterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PainterDialog(QWidget *parent = 0);
    ~PainterDialog();

private:
    Ui::PainterDialog *ui;

protected:
    void paintEvent(QPaintEvent *e);
};

#endif // PAINTERDIALOG_H
