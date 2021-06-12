#include "dialognewquery.h"
#include "ui_dialognewquery.h"
#include <QMessageBox>
#include <QSqlQueryModel>

DialogNewQuery::DialogNewQuery(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNewQuery)
{
    ui->setupUi(this);
}

DialogNewQuery::~DialogNewQuery()
{
    delete mUserQuery;
    delete ui;
}

void DialogNewQuery::on_pushButton_execQuery_clicked()
{
    QString userQuery = ui->plainTextEdit_userQuery->toPlainText();
    QMessageBox::information(this, "Info", "Entered Query:\n\n"+userQuery);

    mUserQuery = new QSqlQueryModel(this);
    mUserQuery->setQuery(userQuery);
    ui->tableView_userQuery->setModel(mUserQuery);
}

