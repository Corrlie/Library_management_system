#ifndef DIALOGNEWQUERY_H
#define DIALOGNEWQUERY_H

#include <QDialog>
#include <dbconnection.h>

namespace Ui {
class DialogNewQuery;
}

class QSqlQueryModel;

class DialogNewQuery : public QDialog
{
    Q_OBJECT

public:
    explicit DialogNewQuery(QWidget *parent = nullptr);
    ~DialogNewQuery();

private slots:
    void on_pushButton_execQuery_clicked();

private:
    Ui::DialogNewQuery *ui;
    QSqlQueryModel *mUserQuery;
};

#endif // DIALOGNEWQUERY_H
