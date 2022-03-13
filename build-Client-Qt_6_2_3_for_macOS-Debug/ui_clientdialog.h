/********************************************************************************
** Form generated from reading UI file 'clientdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDIALOG_H
#define UI_CLIENTDIALOG_H

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

class Ui_ClientDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *messageEdit;
    QPushButton *sendButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *serveripEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *portEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *usernameEdit;
    QPushButton *conncetButton;

    void setupUi(QDialog *ClientDialog)
    {
        if (ClientDialog->objectName().isEmpty())
            ClientDialog->setObjectName(QString::fromUtf8("ClientDialog"));
        ClientDialog->resize(329, 391);
        verticalLayout = new QVBoxLayout(ClientDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(ClientDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        messageEdit = new QLineEdit(ClientDialog);
        messageEdit->setObjectName(QString::fromUtf8("messageEdit"));

        horizontalLayout->addWidget(messageEdit);

        sendButton = new QPushButton(ClientDialog);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setEnabled(false);
        QFont font;
        font.setPointSize(18);
        sendButton->setFont(font);

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ClientDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        serveripEdit = new QLineEdit(ClientDialog);
        serveripEdit->setObjectName(QString::fromUtf8("serveripEdit"));

        horizontalLayout_2->addWidget(serveripEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(ClientDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        portEdit = new QLineEdit(ClientDialog);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));

        horizontalLayout_3->addWidget(portEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(ClientDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        usernameEdit = new QLineEdit(ClientDialog);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));

        horizontalLayout_4->addWidget(usernameEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        conncetButton = new QPushButton(ClientDialog);
        conncetButton->setObjectName(QString::fromUtf8("conncetButton"));
        conncetButton->setFont(font);

        verticalLayout->addWidget(conncetButton);


        retranslateUi(ClientDialog);

        QMetaObject::connectSlotsByName(ClientDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientDialog)
    {
        ClientDialog->setWindowTitle(QCoreApplication::translate("ClientDialog", "\350\201\212\345\244\251\345\256\244\345\256\242\346\210\267\347\253\257", nullptr));
        sendButton->setText(QCoreApplication::translate("ClientDialog", "\345\217\221\351\200\201", nullptr));
        label->setText(QCoreApplication::translate("ClientDialog", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        serveripEdit->setText(QCoreApplication::translate("ClientDialog", "127.0.0.1", nullptr));
        label_2->setText(QCoreApplication::translate("ClientDialog", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", nullptr));
        portEdit->setText(QCoreApplication::translate("ClientDialog", "8080", nullptr));
        label_3->setText(QCoreApplication::translate("ClientDialog", "\350\201\212\345\244\251\345\256\244\346\230\265\347\247\260\357\274\232", nullptr));
        usernameEdit->setText(QCoreApplication::translate("ClientDialog", "Jerry", nullptr));
        conncetButton->setText(QCoreApplication::translate("ClientDialog", "\350\277\233\345\205\245\350\201\212\345\244\251\345\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientDialog: public Ui_ClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDIALOG_H
