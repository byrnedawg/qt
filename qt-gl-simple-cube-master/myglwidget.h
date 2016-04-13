#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QMatrix4x4>

class MyGLWidget : public QOpenGLWidget{

  Q_OBJECT // must include this if you use Qt signals/slots


public:
    MyGLWidget(QWidget *parent = NULL)
        : QOpenGLWidget(parent) {}


protected:
    // Set up the rendering context, define display lists etc.:
   void initializeGL();
   // draw the scene:
   void paintGL();
   // setup viewport, projection etc.:
   void resizeGL (int width, int height);
};



#endif // MYGLWIDGET_H
