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
    ui->statusbar->addPermanentWidget(ui->lbl_connection_status);
    ui->statusbar->showMessage("Database is not connected");
    ui->stackedWidget->setCurrentWidget(ui->page_start);


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
        QMessageBox::information(this, "Info", "Database is connected now");

        // statusBar
        ui->statusbar->showMessage("Database is connected");
        QPixmap pixMap(":/res/img/confirm.png");
        int w = ui->lbl_connection_status->width();
        int h = ui->lbl_connection_status->height();
        ui->lbl_connection_status->setPixmap(pixMap.scaled(w,h,Qt::KeepAspectRatio));

        // enable/disable
        ui->actionConnect_DB->setDisabled(true);
        ui->actionCatalogue->setEnabled(true);
        ui->actionLibraries->setEnabled(true);
        ui->actionReaders->setEnabled(true);
        ui->actionBorrowings->setEnabled(true);
        ui->actionEmployees->setEnabled(true);



        ui->tableView->setModel(mModel);
        ui->stackedWidget->setCurrentWidget(ui->page_table);
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


void MainWindow::on_actionCatalogue_triggered()
{
    mModel->setQuery("select bo.title [Title], bo.authorLastName+' '+bo.authorFirstName [Author],  cgr.category [Category], br.city+' '+br.address [Library Branch] from Catalogue as cat "
"inner join Books AS bo on bo.id = cat.idBook "
"inner join Categories AS cgr ON cgr.id = bo.idCategory inner join Branches as br on br.id = cat.idBranch");

    ui->tableView->setModel(mModel);
}


void MainWindow::on_actionLibraries_triggered()
{
    mModel->setQuery("SELECT city [City], postCode [Post Code], address [Address] FROM Branches");
    ui->tableView->setModel(mModel);
}


void MainWindow::on_actionReaders_triggered()
{
    mModel->setQuery("SELECT r.lastname+' '+r.firstName [Full Name],"
                    "r.dateOfBirth [Birth Date],"
                    "r.dateOfJoining [Join Date],"
                    "r.phoneNumber [Phone Number]"
                    " FROM Readers as r");
    ui->tableView->setModel(mModel);
}


void MainWindow::on_actionBorrowings_triggered()
{
    mModel->setQuery("select bo.title [Title], bo.authorLastName+' '+bo.authorFirstName [Author], rd.lastName+' '+rd.firstName [Reader] from Rentals as r inner join Catalogue as cat on cat.id = r.idCatalogue inner join Books as bo on bo.id = cat.idBook inner join Readers as rd on rd.id = r.idReader");
    ui->tableView->setModel(mModel);
}


void MainWindow::on_actionEmployees_triggered()
{
    mModel->setQuery("SELECT e.lastName+' '+e.firstName [Full Name],"
                    "e.dateOfBirth [Birth Date],"
                    "e.dateOfEmployment [Employment Date]"
                    " FROM Employees as e");
    ui->tableView->setModel(mModel);
}

