#include "View.h"

View::View(QWidget *parent)
    : QFrame(parent)
{
    initLayout();
    initSetting();
}

View::~View()
{

}

void View::initLayout()
{
    PRINT_FUNC_STEP("func initlayout");
}

void View::initSetting()
{
    setWindowFlag(Qt::FramelessWindowHint);
//    this->setAttribute(Qt::WA_NoSystemBackground,true);
    setFixedSize(MAINWINDOW_WID,MAINWINDOW_HEI);
    setStyleSheet(QString("View{background-color:")+ MAINWINDOW_RGBA + "}");
    setWindowOpacity(0.7);

}

void View::mouseMoveEvent(QMouseEvent *ev)
{
    if (ev->buttons() & Qt::LeftButton)
     {
         QPoint relativePos = ev->globalPos() - m_startPoint;
         move(m_windowPoint + relativePos);
    }
}

void View::mousePressEvent(QMouseEvent *ev)
{
    if (ev->button() == Qt::LeftButton)
     {
         m_move = true;
         m_startPoint = ev->globalPos();
         m_windowPoint = this->pos();
     }
}

void View::mouseReleaseEvent(QMouseEvent *ev)
{
    if (ev->button() == Qt::LeftButton)
    {
        m_move = false;
    }
}
