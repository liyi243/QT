/********************************************************************************
** Form generated from reading UI file 'serverdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERDIALOG_H
#define UI_SERVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_serverDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *portEdit;
    QPushButton *creatButton;

    void setupUi(QDialog *serverDialog)
    {
        if (serverDialog->objectName().isEmpty())
            serverDialog->setObjectName(QString::fromUtf8("serverDialog"));
        serverDialog->resize(323, 394);
        verticalLayout = new QVBoxLayout(serverDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(serverDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(serverDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));

        horizontalLayout->addWidget(label);

        portEdit = new QLineEdit(serverDialog);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));
        portEdit->setStyleSheet(QString::fromUtf8("color:rgb(12, 97, 145)"));

        horizontalLayout->addWidget(portEdit);


        verticalLayout->addLayout(horizontalLayout);

        creatButton = new QPushButton(serverDialog);
        creatButton->setObjectName(QString::fromUtf8("creatButton"));
        creatButton->setMinimumSize(QSize(240, 60));

        verticalLayout->addWidget(creatButton);


        retranslateUi(serverDialog);

        QMetaObject::connectSlotsByName(serverDialog);
    } // setupUi

    void retranslateUi(QDialog *serverDialog)
    {
        serverDialog->setWindowTitle(QCoreApplication::translate("serverDialog", "\350\201\212\345\244\251\345\256\244\346\234\215\345\212\241\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("serverDialog", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", nullptr));
        portEdit->setText(QCoreApplication::translate("serverDialog", "8080", nullptr));
        creatButton->setText(QCoreApplication::translate("serverDialog", "\345\210\233\345\273\272\346\234\215\345\212\241\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class serverDialog: public Ui_serverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERDIALOG_H
