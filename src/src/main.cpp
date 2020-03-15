/*
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
*/

#include <iostream>
#include "formula.h"

int main() {
    std::cout << "Bla: " << Formula::bla(2) << std::endl;
    return 0;
}


