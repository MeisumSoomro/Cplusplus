#include "database.h"

Database& Database::getInstance() {
    static Database instance;
    return instance;
}

bool Database::connect() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("hr_database.db");
    return db.open();
}

bool Database::init() {
    if (!connect()) return false;
    
    QSqlQuery query;
    // Create users table
    query.exec("CREATE TABLE IF NOT EXISTS users ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "username TEXT UNIQUE NOT NULL,"
               "password TEXT NOT NULL)");
               
    // Create employees table
    query.exec("CREATE TABLE IF NOT EXISTS employees ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "name TEXT NOT NULL,"
               "position TEXT NOT NULL,"
               "salary REAL NOT NULL)");
               
    return true;
}

bool Database::addUser(const QString& username, const QString& password) {
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password) VALUES (?, ?)");
    query.addBindValue(username);
    query.addBindValue(password); // In production, use proper password hashing
    return query.exec();
}

bool Database::validateUser(const QString& username, const QString& password) {
    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = ? AND password = ?");
    query.addBindValue(username);
    query.addBindValue(password);
    return query.exec() && query.next();
}

bool Database::addEmployee(const QString& name, const QString& position, double salary) {
    QSqlQuery query;
    query.prepare("INSERT INTO employees (name, position, salary) VALUES (?, ?, ?)");
    query.addBindValue(name);
    query.addBindValue(position);
    query.addBindValue(salary);
    return query.exec();
}

QSqlQuery Database::getAllEmployees() {
    QSqlQuery query;
    query.exec("SELECT * FROM employees ORDER BY id");
    return query;
}

bool Database::updateEmployee(int id, const QString& name, const QString& position, double salary) {
    QSqlQuery query;
    query.prepare("UPDATE employees SET name = ?, position = ?, salary = ? WHERE id = ?");
    query.addBindValue(name);
    query.addBindValue(position);
    query.addBindValue(salary);
    query.addBindValue(id);
    return query.exec();
}

bool Database::deleteEmployee(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM employees WHERE id = ?");
    query.addBindValue(id);
    return query.exec();
}
