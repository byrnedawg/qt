#include "logo.h"
#include <qmath.h>

Logo::Logo()
    : m_count(0)
{
    m_data.resize(2500 * 6);

     GLfloat x1 = +0.00f;
     GLfloat y1 = +0.00f;
     GLfloat x2 = +0.2f;
     GLfloat y2 = +0.00f;
     GLfloat x3 = +0.2f;
     GLfloat y3 = +0.3f;
     GLfloat x4 = +0.0f;
     GLfloat y4 = +0.3f;
     GLfloat thickness1 = 0.1f;



     GLfloat x11 = -0.3f;
     GLfloat y11 = -0.1f;
     GLfloat x12 = -0.1f;
     GLfloat y12 = -0.1f;
     GLfloat x13 = -0.1f;
     GLfloat y13 = +0.3f;
     GLfloat x14 = -0.3f;
     GLfloat y14 = +0.3f;
     GLfloat thickness11 = 0.2f;
    /*
    const GLfloat x1 = +0.06f;
    const GLfloat y1 = -0.14f;
    const GLfloat x2 = +0.14f;
    const GLfloat y2 = -0.06f;
    const GLfloat x3 = +0.08f;
    const GLfloat y3 = +0.00f;
    const GLfloat x4 = +0.30f;
    const GLfloat y4 = +0.22f;
*/
     quad(x1, y1, x2, y2, x3, y3, x4, y4, thickness1);

     quad(x11, y11, x12, y12, x13, y13, x14, y14, thickness11);

    // quad(x4, y4, x3, y3, y2, x2, y1, x1);
    //quad(x1, y1, x2, y2, y2, x2, y1, x1);
    //quad(x3, y3, x4, y4, y4, x4, y3, x3);
   // QVector3D fnz = QVector3D::normal(QVector3D(0.1f - -0.1f, -1.0f - -1.0f, 0.0f), QVector3D(-0.1f - -0.1f, 1.0f - -1.0f, 0.0f));
    //side 0
    //add(QVector3D(-0.1f, -0.1f, 0.1f),fnz);
    //add(QVector3D(0.1f, -0.1f, 0.1f), fnz);
    //add(QVector3D(-0.1f, 0.1f, 0.1f), fnz);

   // add(QVector3D(0.1f, -0.1f, 0.1f), fnz);
    //add(QVector3D(0.1f, 0.1f, 0.1f), fnz);
    //add(QVector3D(-0.1f, 0.1f, 0.1f), fnz);
    /*
    add(QVector3D(-0.1f, -0.1f, 0.1f), QVector3D(0.0f, 0.0f, 0.1f));
    add(QVector3D(0.1f, -0.1f, 0.1f), QVector3D(0.0f, 0.0f, 0.1f));
    add(QVector3D(-0.1f, 0.1f, 0.1f), QVector3D(0.0f, 0.0f, 0.1f));

    add(QVector3D(0.1f, -0.1f, 0.1f), QVector3D(0.0f, 0.0f, 0.1f));
    add(QVector3D(0.1f, 0.1f, 0.1f), QVector3D(0.0f, 0.0f, 0.1f));
    add(QVector3D(-0.1f, 0.1f, 0.1f), QVector3D(0.0f, 0.0f, 0.1f));

    //side 1
   // add(QVector3D(-0.1f, 0.1f, -0.1f), QVector3D(0.0f, 0.1f, 0.0f));
    add(QVector3D(0.1f, 0.1f, -0.1f), QVector3D(0.0f, 0.1f, 0.0f));
    add(QVector3D(-0.1f, 0.1f, 0.1f), QVector3D(0.0f, 0.1f, 0.0f));

    add(QVector3D(0.1f, 0.1f, -0.1f), QVector3D(0.0f, 0.1f, 0.0f));
    add(QVector3D(0.1f, 0.1f, 0.1f), QVector3D(0.0f, 0.1f, 0.0f));
    add(QVector3D(-0.1f, 0.1f, 0.1f), QVector3D(0.0f, 0.1f, 0.0f));

    //side 2
    add(QVector3D(0.1f, -0.1f, -0.1f), QVector3D(0.1f, 0.0f, 0.0f));
    add(QVector3D(0.1f, 0.1f, -0.1f), QVector3D(0.1f, 0.0f, 0.0f));
    add(QVector3D(0.1f, 0.1f, 0.1f), QVector3D(0.1f, 0.0f, 0.0f));

    add(QVector3D(0.1f, 0.1f, 0.1f), QVector3D(0.1f, 0.0f, 0.0f));
    add(QVector3D(0.1f, -0.1f, 0.1f), QVector3D(0.1f, 0.0f, 0.0f));
    add(QVector3D(0.1f, -0.1f, -0.1f), QVector3D(0.1f, 0.0f, 0.0f));
*/
    extrude(x1, y1, x2, y2, thickness1);
    extrude(x2, y2, x3, y3, thickness1);
    extrude(x3, y3, x4, y4, thickness1);
    extrude(x4, y4, x1, y1, thickness1);

    extrude(x11, y11, x12, y12, thickness11);
    extrude(x12, y12, x13, y13, thickness11);
    extrude(x13, y13, x14, y14, thickness11);
    extrude(x14, y14, x11, y11, thickness11);


    //extrude(x1, y1, x2, y2);
    //extrude(x2, y2, y2, x2);
   // extrude(y2, x2, y1, x1);
    //extrude(y1, x1, x1, y1);
    //extrude(x3, y3, x4, y4);
    //extrude(x4, y4, y4, x4);
   // extrude(y4, x4, y3, x3);
    cout << "Extruding time x1 y1 =  (" << x1 << ',' << y1 << ')/n';
    cout << "mdata = " << m_data.count() << '/n';

    const int NumSectors = 100;

    for (int i = 0; i < NumSectors; ++i) {
        GLfloat angle = (i * 2 * M_PI) / NumSectors;
        GLfloat angleSin = qSin(angle);
        GLfloat angleCos = qCos(angle);
        const GLfloat x5 = 0.30f * angleSin;
        const GLfloat y5 = 0.30f * angleCos;
        const GLfloat x6 = 0.20f * angleSin;
        const GLfloat y6 = 0.20f * angleCos;

        angle = ((i + 1) * 2 * M_PI) / NumSectors;
        angleSin = qSin(angle);
        angleCos = qCos(angle);
        const GLfloat x7 = 0.20f * angleSin;
        const GLfloat y7 = 0.20f * angleCos;
        const GLfloat x8 = 0.30f * angleSin;
        const GLfloat y8 = 0.30f * angleCos;

       // quad(x5, y5, x6, y6, x7, y7, x8, y8);

        //extrude(x6, y6, x7, y7);
       // extrude(x8, y8, x5, y5);
    }
}

void Logo::add(const QVector3D &v, const QVector3D &n)
{
    GLfloat *p = m_data.data() + m_count;
    *p++ = v.x();
    *p++ = v.y();
    *p++ = v.z();
    *p++ = n.x();
    *p++ = n.y();
    *p++ = n.z();
    m_count += 6;
}

void Logo::quad(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3, GLfloat x4, GLfloat y4, GLfloat quadThickness)
{
    QVector3D n = QVector3D::normal(QVector3D(x4 - x1, y4 - y1, 0.0f), QVector3D(x2 - x1, y2 - y1, 0.0f));

    add(QVector3D(x1, y1, -quadThickness), n);
    add(QVector3D(x4, y4, -quadThickness), n);
    add(QVector3D(x2, y2, -quadThickness), n);

    add(QVector3D(x3, y3, -quadThickness), n);
    add(QVector3D(x2, y2, -quadThickness), n);
    add(QVector3D(x4, y4, -quadThickness), n);
    /*
    add(QVector3D(x1, y1, -0.05f), n);
    add(QVector3D(x4, y4, -0.05f), n);
    add(QVector3D(x2, y2, -0.05f), n);

    add(QVector3D(x3, y3, -0.05f), n);
    add(QVector3D(x2, y2, -0.05f), n);
    add(QVector3D(x4, y4, -0.05f), n);
    */

    n = QVector3D::normal(QVector3D(x1 - x4, y1 - y4, 0.0f), QVector3D(x2 - x4, y2 - y4, 0.0f));

    add(QVector3D(x4, y4, quadThickness), n);
    add(QVector3D(x1, y1, quadThickness), n);
    add(QVector3D(x2, y2, quadThickness), n);

    add(QVector3D(x2, y2, quadThickness), n);
    add(QVector3D(x3, y3, quadThickness), n);
    add(QVector3D(x4, y4, quadThickness), n);
    /*
    add(QVector3D(x4, y4, 0.05f), n);
    add(QVector3D(x1, y1, 0.05f), n);
    add(QVector3D(x2, y2, 0.05f), n);

    add(QVector3D(x2, y2, 0.05f), n);
    add(QVector3D(x3, y3, 0.05f), n);
    add(QVector3D(x4, y4, 0.05f), n);
    */
}

void Logo::extrude(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat extrudeThickness)
{
    QVector3D n = QVector3D::normal(QVector3D(0.0f, 0.0f, -0.1f), QVector3D(x2 - x1, y2 - y1, 0.0f));

    add(QVector3D(x1, y1, +extrudeThickness), n);
    add(QVector3D(x1, y1, -extrudeThickness), n);
    add(QVector3D(x2, y2, +extrudeThickness), n);

    add(QVector3D(x2, y2, -extrudeThickness), n);
    add(QVector3D(x2, y2, +extrudeThickness), n);
    add(QVector3D(x1, y1, -extrudeThickness), n);
}
