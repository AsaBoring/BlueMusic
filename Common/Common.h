#ifndef COMMON_H
#define COMMON_H

#include <QFrame>
#include <QDebug>
#include <QPoint>
#include <QString>
#include <QMouseEvent>
#include <QMainWindow>
#include <QApplication>

#include <fstream>
#include <ostream>

/*
 * class : mainwindow
*/
#define MAINWINDOW_WID 800
#define MAINWINDOW_HEI 500
#define MAINWINDOW_RGBA "rgb(39,64,139)"

/*  class : print
 *  author : Asa
 *  code 1 : print log to colsole
 *  code 2 : print nothing
*/
#define IS_PRINT_LOG 1
#if IS_PRINT_LOG  == 1
    #define PRINT_FUNC_STEP(str) qDebug()<<str;
#else
    #define PRINT_FUNC_STEP(str)
#endif


#endif // COMMON_H
