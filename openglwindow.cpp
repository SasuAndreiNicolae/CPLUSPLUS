#include "openglwindow.h"
#include "ui_openglwindow.h"
#include <QMessageBox>
#include <QColor>
#include <QPalette>


OpenGLWindow::OpenGLWindow(QWidget *parent) /*QOpenGLWindow(parent),*/
    //ui(new Ui::OpenGLWindow)
{
    //ui->setupUi(this);
    setSurfaceType(QWindow::OpenGLSurface);
    QSurfaceFormat format ;
    format.setProfile(QSurfaceFormat::CompatibilityProfile);
    format.setVersion(2,1);
    setFormat(format);
    context = new QOpenGLContext();
    context->setFormat(format);
    context->create();
    context->makeCurrent(this);
    openGLFunctions = context->functions();
    label= new QLabel{"Text"};

}

OpenGLWindow::~OpenGLWindow()
{
    //delete ui;
}

void OpenGLWindow::initializeGL()
{

}

void OpenGLWindow::resizeGL()
{

}


void OpenGLWindow::paintGL()
{
    draw();

}

void OpenGLWindow::resizeEvent(QResizeEvent *event)
{

}

void OpenGLWindow::paintEvent(QPaintEvent *event)
{
    paintGL();
}

void OpenGLWindow::mousePressEvent(QMouseEvent *event)
{

//    if(event->buttons()==Qt::LeftButton)
//        showMessage("Left button pressed!");
//    if(event->buttons()==Qt::RightButton)
       // showMessage("Right button pressed!");
    //showMessage("You clicked me!");

}

void OpenGLWindow::mouseReleaseEvent(QMouseEvent *event)
{

 //   showMessage("You released me!");
}

void OpenGLWindow::wheelEvent(QWheelEvent *event)
{
    glClearColor(0.7f,0.3f,2.0f,0.0f);
    //glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
    //showMessage("You scrolled!");
    int x=event->pixelDelta().rx();
    int y=event->pixelDelta().ry();
    showMessage(std::to_string(x)+" "+std::to_string(y)+" "+std::to_string(event->angleDelta().rx())+" "+std::to_string(event->angleDelta().ry()));
}

void OpenGLWindow::mouseMoveEvent(QMouseEvent *event)
{/*

    float dx=event->x();
    float dy = event->y();*/
    //showMessage(std::to_string(dx)+" "+std::to_string(dy));
                // Start Drawing Quads
}

void OpenGLWindow::keyPressEvent(QKeyEvent *event)
{
    showMessage( std::to_string(event->key())+" "+event->text().toStdString());
}

void OpenGLWindow::draw()
{
    //showMessage("l");
    glClearColor(0.7,0.3f,2.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    //glBegin(GL_QUADS);

    glBegin(GL_LINES);
    glLineWidth(4);

    float xs=-1.0f,xd=1.0f,decr=0.25f,y=-1.0f;
    int i=0;
    while(i<8)
    {

         //glColor3f(0,0,0);
        glVertex2f(xs,y);
        glVertex2f(xd,y);

        glVertex2f(y,xs);
        glVertex2f(y,xd
               );
        y+=decr;
      //  showMessage(std::to_string(xs)+" "+std::to_string(y)+" "+std::to_string(xd)+" "+std::to_string(y));
        i++;
    }glEnd();
    glFlush();
}

void OpenGLWindow::showMessage(const std::string &message)
{
    QMessageBox* messageBox= new QMessageBox(nullptr);
    messageBox->setText(QString::fromStdString(message));
    messageBox->show();
}


