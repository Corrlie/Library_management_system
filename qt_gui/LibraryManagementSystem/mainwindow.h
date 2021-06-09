#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbconnection.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QSqlQueryModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionConnect_DB_triggered();

    void on_actionQuit_triggered();

    void on_actionAbout_triggered();

    void on_actionAbout_Qt_triggered();

    void on_actionCatalogue_triggered();

    void on_actionLibraries_triggered();

    void on_actionReaders_triggered();

    void on_actionBorrowings_triggered();

    void on_actionEmployees_triggered();

private:
    Ui::MainWindow *ui;
    DbConnection mDbConnection;
    QSqlQueryModel *mModel;
};
#endif // MAINWINDOW_H
