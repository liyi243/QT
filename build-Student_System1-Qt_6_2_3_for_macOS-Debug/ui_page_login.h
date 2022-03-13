/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_login
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_login;
    QPushButton *btn_exit;
    QLabel *label_3;

    void setupUi(QWidget *Page_login)
    {
        if (Page_login->objectName().isEmpty())
            Page_login->setObjectName(QString::fromUtf8("Page_login"));
        Page_login->resize(400, 250);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Page_login->sizePolicy().hasHeightForWidth());
        Page_login->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Page_login->setWindowIcon(icon);
        gridLayout = new QGridLayout(Page_login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_2 = new QWidget(Page_login);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaxLength(8);

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaxLength(8);
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(Page_login);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_login = new QPushButton(widget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));

        horizontalLayout->addWidget(btn_login);

        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));

        horizontalLayout->addWidget(btn_exit);


        gridLayout->addWidget(widget, 2, 0, 1, 1);

        label_3 = new QLabel(Page_login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 60));
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);


        retranslateUi(Page_login);

        QMetaObject::connectSlotsByName(Page_login);
    } // setupUi

    void retranslateUi(QWidget *Page_login)
    {
        Page_login->setWindowTitle(QCoreApplication::translate("Page_login", "\347\231\273\351\231\206", nullptr));
#if QT_CONFIG(tooltip)
        Page_login->setToolTip(QCoreApplication::translate("Page_login", "\350\277\231\346\230\257\347\231\273\351\231\206\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Page_login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Page_login", "\345\257\206\347\240\201\357\274\232", nullptr));
        btn_login->setText(QCoreApplication::translate("Page_login", "\347\231\273\351\231\206", nullptr));
        btn_exit->setText(QCoreApplication::translate("Page_login", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("Page_login", "<html><head/><body><p><span style=\" font-size:24pt;\">\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_login: public Ui_Page_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
