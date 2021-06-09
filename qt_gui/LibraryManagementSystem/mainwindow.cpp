#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQueryModel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , mDbConnection("DESKTOP-LM64CK7\\SQLEXPRESS","SQL SERVER", "hp", "", "Library", true)
{
    ui->setupUi(this);
    mModel = nullptr;

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionConnect_DB_triggered()
{
    QString error;
    if(!mDbConnection.openDatabase(&error)){
        QMessageBox::critical(this, "Error", error);
        return;
    }
    if(mModel == nullptr){
        mModel = new QSqlQueryModel(this);
        mDbConnection.setIsConnected(true);
        mModel->setQuery("SELECT * FROM Books");
        ui->tableView->setModel(mModel);
    }
    else{
        QMessageBox::information(this, "Info", "Database is already connected");
    }
}
void MainWindow::on_actionQuit_triggered()
{
    close();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "About",  "This project was created in order to learn SQL and Qt\n\n"
                 "It connects SQL database from sql server management studio");
}


void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this, "Qt");
}

