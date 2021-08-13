/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <myhead.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *vlayout;
    QWidget *window;
    QVBoxLayout *window_layout;
    QWidget *content;
    QVBoxLayout *verticalLayout;
    myHead *head;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *filePath;
    QPushButton *btnScan;
    QPushButton *pushButton;
    QWidget *showContent;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *md5Widget;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QListWidget *pathWidget;
    QProgressBar *progressBar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        vlayout = new QVBoxLayout(Widget);
        vlayout->setObjectName(QString::fromUtf8("vlayout"));
        vlayout->setContentsMargins(0, 0, 0, 0);
        window = new QWidget(Widget);
        window->setObjectName(QString::fromUtf8("window"));
        window->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        window_layout = new QVBoxLayout(window);
        window_layout->setSpacing(6);
        window_layout->setObjectName(QString::fromUtf8("window_layout"));
        window_layout->setContentsMargins(0, 0, 0, 0);
        content = new QWidget(window);
        content->setObjectName(QString::fromUtf8("content"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(content->sizePolicy().hasHeightForWidth());
        content->setSizePolicy(sizePolicy);
        content->setStyleSheet(QString::fromUtf8("#content{\n"
"	border-radius:5;\n"
"}"));
        verticalLayout = new QVBoxLayout(content);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        head = new myHead(content);
        head->setObjectName(QString::fromUtf8("head"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(head->sizePolicy().hasHeightForWidth());
        head->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(head);

        widget = new QWidget(content);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        filePath = new QLineEdit(widget);
        filePath->setObjectName(QString::fromUtf8("filePath"));
        filePath->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(filePath);

        btnScan = new QPushButton(widget);
        btnScan->setObjectName(QString::fromUtf8("btnScan"));
        btnScan->setMinimumSize(QSize(0, 30));
        btnScan->setStyleSheet(QString::fromUtf8("#btnScan{\n"
"	border-radius:5px;\n"
"	background-color: rgb(232, 232, 232);\n"
"	width:60px;\n"
"	height:30px;\n"
"}\n"
"#btnScan:hover{\n"
"	background-color: rgb(213, 213, 213);\n"
"}"));

        horizontalLayout_2->addWidget(btnScan);


        verticalLayout->addWidget(widget);

        pushButton = new QPushButton(content);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pushButton);

        showContent = new QWidget(content);
        showContent->setObjectName(QString::fromUtf8("showContent"));
        horizontalLayout = new QHBoxLayout(showContent);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_3 = new QWidget(showContent);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        md5Widget = new QListWidget(widget_3);
        md5Widget->setObjectName(QString::fromUtf8("md5Widget"));

        verticalLayout_2->addWidget(md5Widget);


        horizontalLayout->addWidget(widget_3);

        widget_4 = new QWidget(showContent);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        pathWidget = new QListWidget(widget_4);
        pathWidget->setObjectName(QString::fromUtf8("pathWidget"));

        verticalLayout_3->addWidget(pathWidget);


        horizontalLayout->addWidget(widget_4);


        verticalLayout->addWidget(showContent);

        progressBar = new QProgressBar(content);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);


        window_layout->addWidget(content);


        vlayout->addWidget(window);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnScan->setText(QCoreApplication::translate("Widget", "\346\265\217\350\247\210", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\346\237\245\346\211\276", nullptr));
        label->setText(QCoreApplication::translate("Widget", "md5", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\351\207\215\345\244\215\346\226\207\344\273\266\350\267\257\345\276\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
