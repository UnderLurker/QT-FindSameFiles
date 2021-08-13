#include "myhead.h"
#include "ui_myhead.h"

myHead::myHead(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myHead)
{
    ui->setupUi(this);
}

myHead::~myHead()
{
    delete ui;
}

void myHead::setHeadTitle(const QString &title)
{
    ui->headLabel->setText(title);
}

void myHead::mouseMoveEvent(QMouseEvent *event)
{
    emit mouseMove(event);
}

void myHead::mousePressEvent(QMouseEvent *event)
{
    emit mousePress(event);
}

void myHead::mouseReleaseEvent(QMouseEvent *event)
{
    emit mouseRelease(event);
}
