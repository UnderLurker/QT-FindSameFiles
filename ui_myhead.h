/********************************************************************************
** Form generated from reading UI file 'myhead.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYHEAD_H
#define UI_MYHEAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myHead
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *headLabel;
    QPushButton *btnMin;
    QPushButton *btnMax;
    QPushButton *btnClose;

    void setupUi(QWidget *myHead)
    {
        if (myHead->objectName().isEmpty())
            myHead->setObjectName(QString::fromUtf8("myHead"));
        myHead->resize(400, 43);
        myHead->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 249, 249);"));
        horizontalLayout = new QHBoxLayout(myHead);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        headLabel = new QLabel(myHead);
        headLabel->setObjectName(QString::fromUtf8("headLabel"));
        headLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(headLabel);

        btnMin = new QPushButton(myHead);
        btnMin->setObjectName(QString::fromUtf8("btnMin"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnMin->sizePolicy().hasHeightForWidth());
        btnMin->setSizePolicy(sizePolicy);
        btnMin->setMinimumSize(QSize(43, 43));
        btnMin->setStyleSheet(QString::fromUtf8("#btnMin{\n"
"	background-color: rgb(240, 240, 240);\n"
"	image:url(://img/min.png);\n"
"	border:none;\n"
"}\n"
"#btnMin:hover{\n"
"	background-color: rgb(221, 221, 221);\n"
"}"));

        horizontalLayout->addWidget(btnMin);

        btnMax = new QPushButton(myHead);
        btnMax->setObjectName(QString::fromUtf8("btnMax"));
        sizePolicy.setHeightForWidth(btnMax->sizePolicy().hasHeightForWidth());
        btnMax->setSizePolicy(sizePolicy);
        btnMax->setMinimumSize(QSize(43, 43));
        btnMax->setStyleSheet(QString::fromUtf8("#btnMax{\n"
"	background-color: rgb(240, 240, 240);\n"
"	image:url(://img/max.png);\n"
"	border:none;\n"
"}\n"
"#btnMax:hover{\n"
"	background-color: rgb(221, 221, 221);\n"
"}"));

        horizontalLayout->addWidget(btnMax);

        btnClose = new QPushButton(myHead);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        sizePolicy.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy);
        btnClose->setMinimumSize(QSize(43, 43));
        btnClose->setStyleSheet(QString::fromUtf8("#btnClose{\n"
"	image:url(://img/close.png);\n"
"	background-color: rgb(255, 20, 90);\n"
"	border-top-right-radius:5px;\n"
"	border:none;\n"
"}\n"
"#btnClose:hover{\n"
"	background-color: rgb(216, 44, 84);\n"
"}"));

        horizontalLayout->addWidget(btnClose);


        retranslateUi(myHead);

        QMetaObject::connectSlotsByName(myHead);
    } // setupUi

    void retranslateUi(QWidget *myHead)
    {
        myHead->setWindowTitle(QCoreApplication::translate("myHead", "Form", nullptr));
        headLabel->setText(QString());
        btnMin->setText(QString());
        btnMax->setText(QString());
        btnClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class myHead: public Ui_myHead {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYHEAD_H
