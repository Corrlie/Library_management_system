/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect_DB;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionCatalogue;
    QAction *actionLibraries;
    QAction *actionReaders;
    QAction *actionBorrowings;
    QAction *actionEmployees;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_table;
    QTableView *tableView;
    QWidget *page_start;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_notConnected;
    QLabel *lbl_connection_status;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionConnect_DB = new QAction(MainWindow);
        actionConnect_DB->setObjectName(QString::fromUtf8("actionConnect_DB"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/img/new_database.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect_DB->setIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/img/close2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionCatalogue = new QAction(MainWindow);
        actionCatalogue->setObjectName(QString::fromUtf8("actionCatalogue"));
        actionCatalogue->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/img/books.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCatalogue->setIcon(icon2);
        actionLibraries = new QAction(MainWindow);
        actionLibraries->setObjectName(QString::fromUtf8("actionLibraries"));
        actionLibraries->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/img/branches.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLibraries->setIcon(icon3);
        actionReaders = new QAction(MainWindow);
        actionReaders->setObjectName(QString::fromUtf8("actionReaders"));
        actionReaders->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/img/reader.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReaders->setIcon(icon4);
        actionBorrowings = new QAction(MainWindow);
        actionBorrowings->setObjectName(QString::fromUtf8("actionBorrowings"));
        actionBorrowings->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/img/rentals.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBorrowings->setIcon(icon5);
        actionEmployees = new QAction(MainWindow);
        actionEmployees->setObjectName(QString::fromUtf8("actionEmployees"));
        actionEmployees->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/img/employee.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEmployees->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_table = new QWidget();
        page_table->setObjectName(QString::fromUtf8("page_table"));
        tableView = new QTableView(page_table);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 711, 531));
        stackedWidget->addWidget(page_table);
        page_start = new QWidget();
        page_start->setObjectName(QString::fromUtf8("page_start"));
        verticalLayout_2 = new QVBoxLayout(page_start);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lbl_notConnected = new QLabel(page_start);
        lbl_notConnected->setObjectName(QString::fromUtf8("lbl_notConnected"));
        QFont font;
        font.setPointSize(16);
        lbl_notConnected->setFont(font);
        lbl_notConnected->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_notConnected);

        stackedWidget->addWidget(page_start);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        lbl_connection_status = new QLabel(centralwidget);
        lbl_connection_status->setObjectName(QString::fromUtf8("lbl_connection_status"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_connection_status->sizePolicy().hasHeightForWidth());
        lbl_connection_status->setSizePolicy(sizePolicy);
        lbl_connection_status->setMinimumSize(QSize(0, 0));
        lbl_connection_status->setMaximumSize(QSize(20, 20));
        lbl_connection_status->setPixmap(QPixmap(QString::fromUtf8(":/res/img/warning.png")));
        lbl_connection_status->setScaledContents(true);

        gridLayout->addWidget(lbl_connection_status, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QFont font1;
        font1.setPointSize(7);
        toolBar->setFont(font1);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionConnect_DB);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Qt);
        toolBar->addAction(actionConnect_DB);
        toolBar->addSeparator();
        toolBar->addAction(actionCatalogue);
        toolBar->addSeparator();
        toolBar->addAction(actionLibraries);
        toolBar->addSeparator();
        toolBar->addAction(actionReaders);
        toolBar->addSeparator();
        toolBar->addAction(actionBorrowings);
        toolBar->addSeparator();
        toolBar->addAction(actionEmployees);
        toolBar->addSeparator();
        toolBar->addAction(actionQuit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConnect_DB->setText(QCoreApplication::translate("MainWindow", "Connect DB", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionCatalogue->setText(QCoreApplication::translate("MainWindow", "Catalogue", nullptr));
        actionLibraries->setText(QCoreApplication::translate("MainWindow", "Branches", nullptr));
        actionReaders->setText(QCoreApplication::translate("MainWindow", "Readers", nullptr));
        actionBorrowings->setText(QCoreApplication::translate("MainWindow", "Borrowed Books", nullptr));
        actionEmployees->setText(QCoreApplication::translate("MainWindow", "Employees", nullptr));
        lbl_notConnected->setText(QCoreApplication::translate("MainWindow", "No database connected!", nullptr));
        lbl_connection_status->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
