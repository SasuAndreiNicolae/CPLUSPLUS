#include "openglwindow.h"
#include <QApplication>
#include "tet.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpenGLWindow w;
    w.show();
    return a.exec();
}
