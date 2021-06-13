/********************************************************************************
** Form generated from reading UI file 'dialogdbdiagram.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDBDIAGRAM_H
#define UI_DIALOGDBDIAGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogDbDiagram
{
public:
    QGridLayout *gridLayout;
    QLabel *lbl_dbDiagram;

    void setupUi(QDialog *DialogDbDiagram)
    {
        if (DialogDbDiagram->objectName().isEmpty())
            DialogDbDiagram->setObjectName(QString::fromUtf8("DialogDbDiagram"));
        DialogDbDiagram->resize(1063, 654);
        DialogDbDiagram->setMaximumSize(QSize(1092, 800));
        gridLayout = new QGridLayout(DialogDbDiagram);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbl_dbDiagram = new QLabel(DialogDbDiagram);
        lbl_dbDiagram->setObjectName(QString::fromUtf8("lbl_dbDiagram"));
        lbl_dbDiagram->setMaximumSize(QSize(16777215, 16777215));
        lbl_dbDiagram->setPixmap(QPixmap(QString::fromUtf8(":/res/img/diagramDbUpdate.PNG")));
        lbl_dbDiagram->setScaledContents(false);

        gridLayout->addWidget(lbl_dbDiagram, 0, 0, 1, 1);


        retranslateUi(DialogDbDiagram);

        QMetaObject::connectSlotsByName(DialogDbDiagram);
    } // setupUi

    void retranslateUi(QDialog *DialogDbDiagram)
    {
        DialogDbDiagram->setWindowTitle(QCoreApplication::translate("DialogDbDiagram", "Library Database Diagram", nullptr));
        lbl_dbDiagram->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogDbDiagram: public Ui_DialogDbDiagram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDBDIAGRAM_H
