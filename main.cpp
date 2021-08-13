#include "widget.h"

#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec* code=QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForLocale(code);
    Widget w;
    w.show();
    return a.exec();
}
