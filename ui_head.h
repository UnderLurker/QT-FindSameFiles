/********************************************************************************
** Form generated from reading UI file 'head.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEAD_H
#define UI_HEAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_head
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *headLabel;
    QPushButton *btnMin;
    QPushButton *btnMax;
    QPushButton *btnClose;

    void setupUi(QWidget *head)
    {
        if (head->objectName().isEmpty())
            head->setObjectName(QString::fromUtf8("head"));
        head->resize(400, 43);
        horizontalLayout = new QHBoxLayout(head);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        headLabel = new QLabel(head);
        headLabel->setObjectName(QString::fromUtf8("headLabel"));
        QFont font;
        font.setPointSize(10);
        headLabel->setFont(font);
        headLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(headLabel);

        btnMin = new QPushButton(head);
        btnMin->setObjectName(QString::fromUtf8("btnMin"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnMin->sizePolicy().hasHeightForWidth());
        btnMin->setSizePolicy(sizePolicy);
        btnMin->setMinimumSize(QSize(43, 43));
        btnMin->setStyleSheet(QString::fromUtf8("#btnMin{\n"
"	background-color: rgb(231, 231, 231);\n"
"	border:none;\n"
"	image:url(://img/min.png)\n"
"}\n"
"#btnMin:hover{\n"
"	background-color: rgb(194, 194, 194);\n"
"}"));

        horizontalLayout->addWidget(btnMin);

        btnMax = new QPushButton(head);
        btnMax->setObjectName(QString::fromUtf8("btnMax"));
        sizePolicy.setHeightForWidth(btnMax->sizePolicy().hasHeightForWidth());
        btnMax->setSizePolicy(sizePolicy);
        btnMax->setMinimumSize(QSize(43, 43));
        btnMax->setStyleSheet(QString::fromUtf8("#btnMax{\n"
"	background-color: rgb(231, 231, 231);\n"
"	border:none;\n"
"	image:url(://img/max.png)\n"
"}\n"
"#btnMax:hover{\n"
"	background-color: rgb(194, 194, 194);\n"
"}"));

        horizontalLayout->addWidget(btnMax);

        btnClose = new QPushButton(head);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        sizePolicy.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy);
        btnClose->setMinimumSize(QSize(43, 43));
        btnClose->setStyleSheet(QString::fromUtf8("#btnClose{\n"
"	background-color: rgb(211, 28, 15);\n"
"	border-top-right-radius:5;\n"
"	border:none;\n"
"	image:url(://img/close.png)\n"
"}\n"
"#btnClose:pressed {\n"
"	background-color: rgb(132, 15, 9);\n"
"}"));

        horizontalLayout->addWidget(btnClose);


        retranslateUi(head);

        QMetaObject::connectSlotsByName(head);
    } // setupUi

    void retranslateUi(QWidget *head)
    {
        head->setWindowTitle(QCoreApplication::translate("head", "Form", nullptr));
        headLabel->setText(QString());
        btnMin->setText(QString());
        btnMax->setText(QString());
        btnClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class head: public Ui_head {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEAD_H
