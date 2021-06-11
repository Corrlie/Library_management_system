#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQueryModel>
#include "dialogdbdiagram.h"

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
        ui->actionDatabase_Diagram->setEnabled(true);

        // set Model and Page
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

    ui->stackedWidget->setCurrentWidget(ui->page_catalogue);

    mModel->setQuery("select bo.title [Title], bo.authorLastName+' '+bo.authorFirstName [Author],  cgr.category [Category], br.city+' '+br.address [Library Branch] from Catalogue as cat "
"inner join Books AS bo on bo.id = cat.idBook "
"inner join Categories AS cgr ON cgr.id = bo.idCategory inner join Branches as br on br.id = cat.idBranch");

    ui->tableView_cat->setModel(mModel);
}


void MainWindow::on_actionLibraries_triggered()
{
    ui->stackedWidget->setCurrentWidget(ui->page_table);
    mModel->setQuery("SELECT city [City], postCode [Post Code], address [Address] FROM Branches");
    ui->tableView->setModel(mModel);
}


void MainWindow::on_actionReaders_triggered()
{
//    ui->stackedWidget->setCurrentWidget(ui->page_table);
    ui->stackedWidget->setCurrentWidget(ui->page_readers);
    mModel->setQuery("SELECT r.lastname+' '+r.firstName [Full Name],"
                    "r.dateOfBirth [Birth Date],"
                    "r.dateOfJoining [Join Date],"
                    "r.phoneNumber [Phone Number]"
                    " FROM Readers as r");
    ui->tableView_readers->setModel(mModel);
}


void MainWindow::on_actionBorrowings_triggered()
{
    ui->stackedWidget->setCurrentWidget(ui->page_table);
    mModel->setQuery("select bo.title [Title], bo.authorLastName+' '+bo.authorFirstName [Author], rd.lastName+' '+rd.firstName [Reader] from Rentals as r inner join Catalogue as cat on cat.id = r.idCatalogue inner join Books as bo on bo.id = cat.idBook inner join Readers as rd on rd.id = r.idReader");
    ui->tableView->setModel(mModel);
}


void MainWindow::on_actionEmployees_triggered()
{
    ui->stackedWidget->setCurrentWidget(ui->page_table);
    mModel->setQuery("SELECT e.lastName+' '+e.firstName [Full Name],"
                    "e.dateOfBirth [Birth Date],"
                    "e.dateOfEmployment [Employment Date]"
                    " FROM Employees as e");
    ui->tableView->setModel(mModel);
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Filters",
                             "Applied filters:\n\nCategory: "+ui->comboBox_cat->currentText()+"\n"
                             "City: "+ui->comboBox_cities->currentText());
    QString scope_cat;
    QString scope_cities;


    // filters actions
    if(ui->comboBox_cat->currentText() != "All Categories"){
        scope_cat = ui->comboBox_cat->currentText();
    }
    if(ui->comboBox_cities->currentData()!="All Cities"){
         scope_cities = ui->comboBox_cities->currentText();
    }

    // queries

    if(ui->comboBox_cat->currentText() == "All Categories" && ui->comboBox_cities->currentText()=="All Cities"){
        mModel->setQuery("select bo.title [Title], bo.authorLastName+' '+bo.authorFirstName [Author],  cgr.category [Category], br.city+' '+br.address [Library Branch] from Catalogue as cat "
        "inner join Books AS bo on bo.id = cat.idBook "
        "inner join Categories AS cgr ON cgr.id = bo.idCategory inner join Branches as br on br.id = cat.idBranch");
    }
    else if(ui->comboBox_cat->currentText() != "All Categories" && ui->comboBox_cities->currentText()=="All Cities"){
        mModel->setQuery(QString("select bo.title [Title], bo.authorLastName+' '+bo.authorFirstName [Author],  cgr.category [Category], br.city+' '+br.address [Library Branch] from Catalogue as cat "
    "inner join Books AS bo on bo.id = cat.idBook "
    "inner join Categories AS cgr ON cgr.id = bo.idCategory "
    "inner join Branches as br on br.id = cat.idBranch WHERE cgr.category='%1'").arg(scope_cat));
    }
    else if(ui->comboBox_cat->currentText() == "All Categories" && ui->comboBox_cities->currentText()!="All Cities"){
        mModel->setQuery(QString("select bo.title [Title], bo.authorLastName+' '+bo.authorFirstName [Author],  cgr.category [Category], br.city+' '+br.address [Library Branch]"
    " from Catalogue as cat inner join Books AS bo on bo.id = cat.idBook "
    "inner join Categories AS cgr ON cgr.id = bo.idCategory"
    " inner join Branches as br on br.id = cat.idBranch WHERE br.city='%1'").arg(scope_cities));
    }
    else{
        mModel->setQuery(QString("select bo.title [Title], bo.authorLastName+' '+bo.authorFirstName [Author],  cgr.category [Category], br.city+' '+br.address [Library Branch] from Catalogue as cat "
    "inner join Books AS bo on bo.id = cat.idBook "
    "inner join Categories AS cgr ON cgr.id = bo.idCategory "
    "inner join Branches as br on br.id = cat.idBranch WHERE cgr.category='%1' AND br.city='%2'").arg(scope_cat,scope_cities));
    }

    ui->tableView_cat->setModel(mModel);

}


void MainWindow::on_actionDatabase_Diagram_triggered()
{
    DialogDbDiagram dbDiagramWindow;
    dbDiagramWindow.setModal(true);
    dbDiagramWindow.exec();

}


void MainWindow::on_pushButton_filters_readers_clicked()
{
    QString name_reader = ui->lineEdit_name_reader->text();
    QString surname_reader = ui->lineEdit_surname_reader->text();
    QString query_readers = "SELECT r.lastname+' '+r.firstName [Full Name],"
                        "r.dateOfBirth [Birth Date],"
                        "r.dateOfJoining [Join Date],"
                        "r.phoneNumber [Phone Number]"
                        " FROM Readers as r";
    if(name_reader.size() == 0 && surname_reader.size() == 0){
        mModel->setQuery(query_readers);
    }
    else if(name_reader.size() != 0 && surname_reader.size() == 0){
        mModel->setQuery(QString(query_readers + " WHERE r.firstName = '%1'").arg(name_reader));
    }
    else if(name_reader.size() == 0 && surname_reader.size() != 0){
        mModel->setQuery(QString(query_readers + " WHERE r.lastname = '%1'").arg(surname_reader));
    }
    else{
        mModel->setQuery(QString(query_readers + " WHERE r.firstName = '%1' AND r.lastname = '%2'").arg(name_reader, surname_reader));
    }

    ui->tableView_readers->setModel(mModel);
}

