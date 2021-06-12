#include "dbconnection.h"

DbConnection::DbConnection(const QString &server, const QString &driver,const QString &user,const QString &password, const QString &databaseName, bool trustedConnection, bool isDbConnected)
{
    Database = QSqlDatabase::addDatabase("QODBC");
    mDatabaseName  = databaseName;
    mServer = server;
    mDriver = driver;
    mUser = user;
    mPassword = password;
    mDatabaseName = databaseName;
    mTrustedConnection = trustedConnection;
    mIsDbConnected = isDbConnected;
}
bool DbConnection::openDatabase(QString *error){
    Database.setDatabaseName(QString("DRIVER={%1}; SERVER=%2; DATABASE=%3; UID=%4; PWD=%5;Trusted_Connection=%6;")
                             .arg(mDriver, mServer, mDatabaseName, mUser, mPassword, mTrustedConnection?"Yes":"No"));

    if(!Database.open()){
        if(error!=nullptr){
            *error = Database.lastError().text();
        }
        return false;
    }
    return true;
}
void DbConnection::setIsConnected(bool isDbConnected){
    mIsDbConnected = isDbConnected;
}
