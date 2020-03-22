#include <iostream>

#include <QApplication>

#include "mainwindow.h"

int main(int argc, char ** argv)
{
  std::cout<<"Hello World!"<<std::endl;

  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();
}
