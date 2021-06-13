#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbconnection.h"
#include "dialogdbdiagram.h"
#include "dialognewquery.h"
#include <QAction>
#include <QActionGroup>
#include <memory>

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

    void on_pushButton_filters_cat_clicked();

    void on_actionDatabase_Diagram_triggered();

    void on_pushButton_filters_readers_clicked();

    void on_actionNew_Query_triggered();

private:
    Ui::MainWindow *ui;
    DbConnection mDbConnection;
    QSqlQueryModel *mModel;
    QActionGroup actionGroupCollectionsToolbar;
    std::unique_ptr<DialogDbDiagram> dbDiagramWindow;
    std::unique_ptr<DialogNewQuery> userQueryWindow;

};
#endif // MAINWINDOW_H
