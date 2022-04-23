#include "connection.h"

Connection::Connection(){}

bool Connection::createconnect()
{
    bool test=false;

QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_projet2A");
db.setUserName("mahmoud");
db.setPassword("mahmoud");

if (db.open()) test=true;

return  test;
}
