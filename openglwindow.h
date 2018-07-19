#ifndef OPENGLWINDOW_H
#define OPENGLWINDOW_H

#include <QWidget>
#include <QOpenGLWindow>
#include <QSurfaceFormat>
#include <QOpenGLFunctions>
#include <QOpenGLContext>
#include <string>
#include <QWheelEvent>
#include <QLabel>

namespace Ui {
class OpenGLWindow;
}

class OpenGLWindow : public QOpenGLWindow
{
    Q_OBJECT

public:
    explicit OpenGLWindow(QWidget *parent = 0);
    ~OpenGLWindow();
    void initializeGL();
    virtual void resizeGL();
    void paintGL();
    void resizeEvent(QResizeEvent* event);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent*event);
    void mouseReleaseEvent(QMouseEvent*event);
    void wheelEvent(QWheelEvent *event);
    void mouseMoveEvent(QMouseEvent* event);
    void keyPressEvent(QKeyEvent*event);

private:
   // Ui::OpenGLWindow *ui;
    QOpenGLContext* context ;
    QOpenGLFunctions *openGLFunctions;
    void draw();
    void showMessage(const std::string &message);
    QLabel* label;
};

#endif // OPENGLWINDOW_H
