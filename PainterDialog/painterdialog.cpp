#include "painterdialog.h"
#include "ui_painterdialog.h"

PainterDialog::PainterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PainterDialog)
{
    ui->setupUi(this);
}

PainterDialog::~PainterDialog()
{
    delete ui;
}

void PainterDialog :: paintEvent(QPaintEvent *e)
{
   /* QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.setFont(QFont("Arial", 80));
    painter.drawText(rect(), Qt::AlignCenter, "Qt");
   */
    QPainter Mypainter(this);
    QPen PointPen(Qt::red);
    PointPen.setWidth(5);
    QPen linePen(Qt::green);
    linePen.setWidth(2);

    QPoint p1;
    p1.setX(100);
    p1.setY(100);

    QPoint p2;
    p2.setX(300);
    p2.setY(200);

    Mypainter.setPen(PointPen);
    Mypainter.drawPoint(p1);
    Mypainter.drawPoint(p2);

    Mypainter.setPen(linePen);
    Mypainter.drawLine(p1, p2);

    QPen LinePen2(Qt::black);
    LinePen2.setStyle(Qt::DashDotDotLine);
    LinePen2.setWidth(3);

    Mypainter.setPen(LinePen2);
    Mypainter.drawLine(QPoint(300,100), QPoint(100,200));
    Mypainter.drawLine(QPoint(100,200), QPoint(100,0));



}
