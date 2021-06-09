#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class DbConnection
{
public:
    DbConnection(const QString &server,
                 const QString &driver,
                 const QString &user,
                 const QString &password,
                 const QString &databaseName,
                 bool trustedConnection = true,
                 bool isDbConnected = false);

        bool openDatabase(QString *error = nullptr);
        void setIsConnected(bool isDbConnected);
private:
    QSqlDatabase Database;
    QString mServer;
    QString mDriver;
    QString mUser;
    QString mPassword;
    QString mDatabaseName;
    bool mTrustedConnection;
    bool mIsDbConnected;

};

#endif // DBCONNECTION_H
