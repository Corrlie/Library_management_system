/********************************************************************************
** Form generated from reading UI file 'dialognewquery.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNEWQUERY_H
#define UI_DIALOGNEWQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogNewQuery
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QTableView *tableView_userQuery;
    QPlainTextEdit *plainTextEdit_userQuery;
    QLabel *label_2;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_execQuery;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogNewQuery)
    {
        if (DialogNewQuery->objectName().isEmpty())
            DialogNewQuery->setObjectName(QString::fromUtf8("DialogNewQuery"));
        DialogNewQuery->resize(691, 462);
        verticalLayout = new QVBoxLayout(DialogNewQuery);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView_userQuery = new QTableView(DialogNewQuery);
        tableView_userQuery->setObjectName(QString::fromUtf8("tableView_userQuery"));

        gridLayout->addWidget(tableView_userQuery, 1, 2, 1, 1);

        plainTextEdit_userQuery = new QPlainTextEdit(DialogNewQuery);
        plainTextEdit_userQuery->setObjectName(QString::fromUtf8("plainTextEdit_userQuery"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit_userQuery->sizePolicy().hasHeightForWidth());
        plainTextEdit_userQuery->setSizePolicy(sizePolicy);
        plainTextEdit_userQuery->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(plainTextEdit_userQuery, 1, 0, 1, 1);

        label_2 = new QLabel(DialogNewQuery);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(DialogNewQuery);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line = new QFrame(DialogNewQuery);
        line->setObjectName(QString::fromUtf8("line"));
        QFont font;
        font.setBold(false);
        line->setFont(font);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_execQuery = new QPushButton(DialogNewQuery);
        pushButton_execQuery->setObjectName(QString::fromUtf8("pushButton_execQuery"));

        horizontalLayout->addWidget(pushButton_execQuery);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogNewQuery);

        QMetaObject::connectSlotsByName(DialogNewQuery);
    } // setupUi

    void retranslateUi(QDialog *DialogNewQuery)
    {
        DialogNewQuery->setWindowTitle(QCoreApplication::translate("DialogNewQuery", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DialogNewQuery", "Table View:", nullptr));
        label->setText(QCoreApplication::translate("DialogNewQuery", "Query Script:", nullptr));
        pushButton_execQuery->setText(QCoreApplication::translate("DialogNewQuery", "Execute Query", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogNewQuery: public Ui_DialogNewQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNEWQUERY_H
