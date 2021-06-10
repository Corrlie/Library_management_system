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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_table;
    QTableView *tableView;
    QWidget *page_catalogue;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_cat;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *comboBox_cat;
    QPushButton *pushButton;
    QFrame *line;
    QComboBox *comboBox_cities;
    QLabel *label;
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
        MainWindow->resize(1068, 628);
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
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_table = new QWidget();
        page_table->setObjectName(QString::fromUtf8("page_table"));
        tableView = new QTableView(page_table);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(9, 9, 921, 551));
        stackedWidget->addWidget(page_table);
        page_catalogue = new QWidget();
        page_catalogue->setObjectName(QString::fromUtf8("page_catalogue"));
        page_catalogue->setMaximumSize(QSize(965, 543));
        horizontalLayout = new QHBoxLayout(page_catalogue);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView_cat = new QTableView(page_catalogue);
        tableView_cat->setObjectName(QString::fromUtf8("tableView_cat"));

        horizontalLayout->addWidget(tableView_cat);

        groupBox = new QGroupBox(page_catalogue);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(400, 250));
        groupBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboBox_cat = new QComboBox(groupBox);
        comboBox_cat->addItem(QString());
        comboBox_cat->addItem(QString());
        comboBox_cat->addItem(QString());
        comboBox_cat->addItem(QString());
        comboBox_cat->addItem(QString());
        comboBox_cat->addItem(QString());
        comboBox_cat->addItem(QString());
        comboBox_cat->setObjectName(QString::fromUtf8("comboBox_cat"));

        gridLayout->addWidget(comboBox_cat, 0, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton, 3, 0, 1, 2);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        comboBox_cities = new QComboBox(groupBox);
        comboBox_cities->addItem(QString());
        comboBox_cities->addItem(QString());
        comboBox_cities->addItem(QString());
        comboBox_cities->setObjectName(QString::fromUtf8("comboBox_cities"));

        gridLayout->addWidget(comboBox_cities, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);

        stackedWidget->addWidget(page_catalogue);
        page_start = new QWidget();
        page_start->setObjectName(QString::fromUtf8("page_start"));
        verticalLayout_2 = new QVBoxLayout(page_start);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lbl_notConnected = new QLabel(page_start);
        lbl_notConnected->setObjectName(QString::fromUtf8("lbl_notConnected"));
        QFont font1;
        font1.setPointSize(16);
        lbl_notConnected->setFont(font1);
        lbl_notConnected->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_notConnected);

        stackedWidget->addWidget(page_start);

        horizontalLayout_2->addWidget(stackedWidget);

        lbl_connection_status = new QLabel(centralwidget);
        lbl_connection_status->setObjectName(QString::fromUtf8("lbl_connection_status"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lbl_connection_status->sizePolicy().hasHeightForWidth());
        lbl_connection_status->setSizePolicy(sizePolicy3);
        lbl_connection_status->setMinimumSize(QSize(0, 0));
        lbl_connection_status->setMaximumSize(QSize(20, 20));
        lbl_connection_status->setPixmap(QPixmap(QString::fromUtf8(":/res/img/warning.png")));
        lbl_connection_status->setScaledContents(true);

        horizontalLayout_2->addWidget(lbl_connection_status);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1068, 21));
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
        QFont font2;
        font2.setPointSize(7);
        toolBar->setFont(font2);
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Filters", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Selected\n"
"City:", nullptr));
        comboBox_cat->setItemText(0, QCoreApplication::translate("MainWindow", "All Categories", nullptr));
        comboBox_cat->setItemText(1, QCoreApplication::translate("MainWindow", "Biography", nullptr));
        comboBox_cat->setItemText(2, QCoreApplication::translate("MainWindow", "Crime", nullptr));
        comboBox_cat->setItemText(3, QCoreApplication::translate("MainWindow", "Fiction", nullptr));
        comboBox_cat->setItemText(4, QCoreApplication::translate("MainWindow", "Health", nullptr));
        comboBox_cat->setItemText(5, QCoreApplication::translate("MainWindow", "Sport", nullptr));
        comboBox_cat->setItemText(6, QCoreApplication::translate("MainWindow", "Travel", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "Apply filters", nullptr));
        comboBox_cities->setItemText(0, QCoreApplication::translate("MainWindow", "All Cities", nullptr));
        comboBox_cities->setItemText(1, QCoreApplication::translate("MainWindow", "London", nullptr));
        comboBox_cities->setItemText(2, QCoreApplication::translate("MainWindow", "Toronto", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Selected\n"
"Categories:", nullptr));
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
