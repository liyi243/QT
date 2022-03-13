/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *valuecomboBox;
    QComboBox *condcomboBox;
    QPushButton *sortButton;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *idEdit;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *scoreEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *insertButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(356, 425);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        valuecomboBox = new QComboBox(Dialog);
        valuecomboBox->addItem(QString());
        valuecomboBox->addItem(QString());
        valuecomboBox->setObjectName(QString::fromUtf8("valuecomboBox"));

        horizontalLayout->addWidget(valuecomboBox);

        condcomboBox = new QComboBox(Dialog);
        condcomboBox->addItem(QString());
        condcomboBox->addItem(QString());
        condcomboBox->setObjectName(QString::fromUtf8("condcomboBox"));

        horizontalLayout->addWidget(condcomboBox);

        sortButton = new QPushButton(Dialog);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));

        horizontalLayout->addWidget(sortButton);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(Dialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        idEdit = new QLineEdit(Dialog);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));

        gridLayout->addWidget(idEdit, 0, 1, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(Dialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        scoreEdit = new QLineEdit(Dialog);
        scoreEdit->setObjectName(QString::fromUtf8("scoreEdit"));

        gridLayout->addWidget(scoreEdit, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        insertButton = new QPushButton(Dialog);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));

        horizontalLayout_2->addWidget(insertButton);

        deleteButton = new QPushButton(Dialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout_2->addWidget(deleteButton);

        updateButton = new QPushButton(Dialog);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        horizontalLayout_2->addWidget(updateButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        valuecomboBox->setItemText(0, QCoreApplication::translate("Dialog", "ID", nullptr));
        valuecomboBox->setItemText(1, QCoreApplication::translate("Dialog", "Score", nullptr));

        condcomboBox->setItemText(0, QCoreApplication::translate("Dialog", "\345\215\207\345\272\217", nullptr));
        condcomboBox->setItemText(1, QCoreApplication::translate("Dialog", "\351\231\215\345\272\217", nullptr));

        sortButton->setText(QCoreApplication::translate("Dialog", "\346\216\222\345\272\217", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\345\255\246\347\224\237\346\210\220\347\273\251\357\274\232", nullptr));
        insertButton->setText(QCoreApplication::translate("Dialog", "\346\217\222\345\205\245", nullptr));
        deleteButton->setText(QCoreApplication::translate("Dialog", "\345\210\240\351\231\244", nullptr));
        updateButton->setText(QCoreApplication::translate("Dialog", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
