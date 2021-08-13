#include "widget.h"
#include "ui_widget.h"
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <qlabel.h>
#include <QPushButton>
#include <QFile>
#include <QCryptographicHash>
#include <QDebug>
#include <QFileDialog>
#include <QCryptographicHash>
#include <QDir>
#include <QApplication>
#include <QFileInfo>
#include <QHash>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    thread.start();
    this->md5.moveToThread(&thread);
    ui->head->setHeadTitle(QString("find same file"));
    this->setWindowFlag(Qt::FramelessWindowHint);
    QGraphicsDropShadowEffect* shadow=new QGraphicsDropShadowEffect();
    shadow->setColor(Qt::black);
    shadow->setOffset(0);
    shadow->setBlurRadius(10);
    ui->window->setGraphicsEffect(shadow);
    this->setAttribute(Qt::WA_TranslucentBackground,true);
    this->installEventFilter(ui->head);

    qRegisterMetaType<QHash<QString,QStringList>> ("QHash<QString,QStringList>");
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        if(ui->filePath->text()!=""){
            emit useMd5(ui->filePath->text());
        }
    });
    connect(this,SIGNAL(useMd5(QString)),
            &md5,SLOT(filesToMd5(QString)));
    connect(&this->md5,SIGNAL(findSameFile(const QHash<QString,QStringList>)),
            this,SLOT(print(const QHash<QString,QStringList>)));
    connect(&this->md5,SIGNAL(progress(int,int)),this,SLOT(setProgressBar(int,int)));
    connect(ui->head,SIGNAL(mouseMove(QMouseEvent*)),this,SLOT(mouseMove(QMouseEvent*)));
    connect(ui->head,SIGNAL(mousePress(QMouseEvent*)),this,SLOT(mousePress(QMouseEvent*)));
    connect(ui->head,SIGNAL(mouseRelease(QMouseEvent*)),this,SLOT(mouseRelease(QMouseEvent*)));

}

Widget::~Widget()
{
    thread.exit();
    thread.wait(5*1000);
    delete ui;
}

void Widget::on_btnClose_clicked()
{
    this->close();
}

void Widget::on_btnMax_clicked()
{
    if(this->isMaximized()){
        ui->vlayout->setMargin(9);
        this->showNormal();
    }
    else{
        ui->vlayout->setMargin(0);
        this->showMaximized();
    }
}

void Widget::on_btnMin_clicked()
{
    this->showMinimized();
}

void Widget::on_btnScan_clicked()
{
    ui->progressBar->setValue(0);
    QString name=QFileDialog::getExistingDirectory(this,"open","./");
    ui->filePath->setText(name);
}

void Widget::print(const QHash<QString,QStringList>& sameFile)
{
    ui->md5Widget->clear();
    this->hash.clear();
    for(auto it=sameFile.begin();it!=sameFile.end();it++){
        //qDebug()<<it.key()<<"   "<<it.value();
        if(it.value().count()>1){
            this->hash[it.key()]=it.value();
            ui->md5Widget->addItem(it.key());
        }
    }
}

void Widget::setProgressBar(int current, int total)
{
    ui->progressBar->setRange(0,total);
    ui->progressBar->setValue(current);
}

void Widget::on_md5Widget_currentTextChanged(const QString &currentText)
{
    ui->pathWidget->clear();
    ui->pathWidget->addItems(this->hash[currentText]);
}

void Widget::mouseMove(QMouseEvent *event)
{
    Widget::mouseMoveEvent(event);
    if(this->z==QPoint()) return;
    this->move(event->globalPos()-this->z);
}

void Widget::mousePress(QMouseEvent *event)
{
    Widget::mousePressEvent(event);
    this->z=event->globalPos()-this->geometry().topLeft();
}

void Widget::mouseRelease(QMouseEvent *event)
{
    Widget::mouseReleaseEvent(event);
    this->z=QPoint();
}
