#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStringList>
#include <QHash>
#include <QThread>
#include "filetomd5.h"
#include "myhead.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

signals:
    QStringList useMd5(const QString& path);
private slots:
    void on_btnClose_clicked();

    void on_btnMax_clicked();

    void on_btnMin_clicked();

    void on_btnScan_clicked();

    void print(const QHash<QString,QStringList>& sameFile);

    void setProgressBar(int current,int total);

    void on_md5Widget_currentTextChanged(const QString &currentText);

    void mouseMove(QMouseEvent* event);

    void mousePress(QMouseEvent* event);

    void mouseRelease(QMouseEvent* event);

private:
    Ui::Widget *ui;
    fileToMd5 md5;
    QPoint z;
    QThread thread;
    QHash<QString,QStringList> hash;
};

#endif // WIDGET_H
