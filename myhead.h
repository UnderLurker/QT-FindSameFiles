#ifndef MYHEAD_H
#define MYHEAD_H

#include <QWidget>
#include <QString>

namespace Ui {
class myHead;
}

class myHead : public QWidget
{
    Q_OBJECT

public:
    explicit myHead(QWidget *parent = nullptr);
    ~myHead();
    void setHeadTitle(const QString& title);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
private:
    Ui::myHead *ui;
signals:
    void mouseMove(QMouseEvent* event);
    void mousePress(QMouseEvent* event);
    void mouseRelease(QMouseEvent* event);
};

#endif // MYHEAD_H
