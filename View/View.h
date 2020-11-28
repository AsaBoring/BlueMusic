#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Common.h"

class View : public QFrame
{
    Q_OBJECT

public:
    View(QWidget *parent = nullptr);
    ~View();

private:
    bool m_move = false;

    QPoint m_startPoint;
    QPoint m_windowPoint;

    void initLayout();
    void initSetting();

protected:
    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent * ev);
    void mouseReleaseEvent(QMouseEvent * ev);

};
#endif // MAINWINDOW_H
