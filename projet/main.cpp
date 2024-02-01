#include <QCoreApplication>
#include <QDebug>
#include <QMainWindow>
#include <QApplication>
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow mainWindow;

    mainWindow.show();


    return a.exec();
}
