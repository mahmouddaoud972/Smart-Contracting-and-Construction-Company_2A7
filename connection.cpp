#include "connection.h"

Connection::Connection(){}

bool Connection::createconnect()
{

db = QSqlDatabase::addDatabase("QODBC");
bool test=false;
db.setDatabaseName("Projet2A");
db.setUserName("mamoud");
db.setPassword("mamoud");

if (db.open()) test=true;

return  test;
}
