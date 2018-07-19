#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H
#include <QOpenGLWidget>
#include <QWidget>
#include <QOpenGLWindow>
#include <QSurfaceFormat>
#include <QOpenGLFunctions>
#include <QOpenGLContext>
#include <string>
#include <QWheelEvent>
class OpenGLWidget:public QOpenGLWidget
{
public:
    OpenGLWidget();
    void initializeGL();
    void paintGL();
    void resizeGL();
    void resizeEvent(QResizeEvent* event);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent*event);
    void mouseReleaseEvent(QMouseEvent*event);
    void wheelEvent(QWheelEvent *event);
    void mouseMoveEvent(QMouseEvent* event);
    void keyPressEvent(QKeyEvent*event);
private:
    QOpenGLContext* context ;
    QOpenGLFunctions *openGLFunctions;

    void showMessage(const std::string &message);

};

#endif // OPENGLWIDGET_H
