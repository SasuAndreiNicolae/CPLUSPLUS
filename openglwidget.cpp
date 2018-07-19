#include "openglwidget.h"
#include <QWidget>
#include <QOpenGLWindow>
#include <QSurfaceFormat>
#include <QOpenGLFunctions>
#include <QOpenGLContext>
#include <string>
#include <QWheelEvent>
OpenGLWidget::OpenGLWidget()
{
    //setSurfaceType(QWindow::OpenGLSurface);
    QSurfaceFormat format ;
    format.setProfile(QSurfaceFormat::CompatibilityProfile);
    format.setVersion(2,1);
    setFormat(format);
    context = new QOpenGLContext();
    context->setFormat(format);
    context->create();
   // context->makeCurrent();
    openGLFunctions = context->functions();
}

void OpenGLWidget::initializeGL()
{

}

void OpenGLWidget::paintGL()
{
    glClearColor(1.0,0.0f,1.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.1f,0.1f);
    glVertex2f(-0.1f,0.1f);
    glEnd();
    glFlush();
}

void OpenGLWidget::resizeGL()
{

}

void OpenGLWidget::resizeEvent(QResizeEvent *event)
{

}

void OpenGLWidget::paintEvent(QPaintEvent *event)
{
    paintGL();
}

void OpenGLWidget::mousePressEvent(QMouseEvent *event)
{

}

void OpenGLWidget::mouseReleaseEvent(QMouseEvent *event)
{

}

void OpenGLWidget::wheelEvent(QWheelEvent *event)
{

}

void OpenGLWidget::mouseMoveEvent(QMouseEvent *event)
{

}

void OpenGLWidget::keyPressEvent(QKeyEvent *event)
{

}

void OpenGLWidget::showMessage(const std::string &message)
{

}
