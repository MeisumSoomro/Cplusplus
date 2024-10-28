#pragma once

#include <QtSql>
#include <QString>

class Database {
public:
    static Database& getInstance();
    bool connect();
    bool init();
    
    // User operations
    bool addUser(const QString& username, const QString& password);
    bool validateUser(const QString& username, const QString& password);
    
    // CRUD operations
    bool addEmployee(const QString& name, const QString& position, double salary);
    QSqlQuery getAllEmployees();
    bool updateEmployee(int id, const QString& name, const QString& position, double salary);
    bool deleteEmployee(int id);

private:
    Database() = default;
    QSqlDatabase db;
};
