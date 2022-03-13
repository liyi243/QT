/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QTreeWidget *treeWidget;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btn_exit;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QPushButton *delButton;
    QLineEdit *idEdit;
    QPushButton *gaiButton;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QPushButton *soushuoButton;
    QLineEdit *scoreEdit;
    QLineEdit *nameEdit;
    QCheckBox *checkBox;
    QPushButton *addButton;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMinimumSize(QSize(160, 0));
        treeWidget->setMaximumSize(QSize(160, 16777215));
        treeWidget->header()->setVisible(false);

        gridLayout_3->addWidget(treeWidget, 1, 0, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: #001871;\n"
"color: rgb(255, 255, 255);"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(12, 12, 40, 40));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(40, 40));
        label_2->setMaximumSize(QSize(40, 40));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/img/icon1.jpg);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(62, 12, 90, 19));
        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setGeometry(QRect(166, 16, 57, 35));
        btn_exit->setStyleSheet(QString::fromUtf8("\n"
"QPushButton background-color:#ff585d;"));

        gridLayout_2->addWidget(widget, 0, 2, 1, 1);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        gridLayout_2->addWidget(widget_3, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);

        gridLayout_3->addWidget(widget_2, 0, 0, 1, 2);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        delButton = new QPushButton(page);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        gridLayout->addWidget(delButton, 0, 5, 1, 1);

        idEdit = new QLineEdit(page);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));

        gridLayout->addWidget(idEdit, 1, 3, 1, 1);

        gaiButton = new QPushButton(page);
        gaiButton->setObjectName(QString::fromUtf8("gaiButton"));

        gridLayout->addWidget(gaiButton, 0, 4, 1, 1);

        tableView = new QTableView(page);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 3, 1, 1, 5);

        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        soushuoButton = new QPushButton(page);
        soushuoButton->setObjectName(QString::fromUtf8("soushuoButton"));

        gridLayout->addWidget(soushuoButton, 0, 2, 1, 1);

        scoreEdit = new QLineEdit(page);
        scoreEdit->setObjectName(QString::fromUtf8("scoreEdit"));

        gridLayout->addWidget(scoreEdit, 1, 5, 1, 1);

        nameEdit = new QLineEdit(page);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 1, 4, 1, 1);

        checkBox = new QCheckBox(page);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        addButton = new QPushButton(page);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 0, 3, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\231\346\230\257\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237\357\274\214\350\257\267\346\263\250\346\204\217\357\274\201", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232admin", nullptr));
        btn_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        delButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        idEdit->setToolTip(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245ID", nullptr));
#endif // QT_CONFIG(tooltip)
        gaiButton->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        soushuoButton->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
