#pragma once

#include <QMainWindow>
#include <QTableWidget>
#include <QLineEdit>
#include <QPushButton>

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

private slots:
    void onAddEmployee();
    void onUpdateEmployee();
    void onDeleteEmployee();
    void onRefreshTable();
    void onLogout();
    void onRowSelected(int row);

private:
    void setupUI();
    void loadEmployees();

    QTableWidget *employeeTable;
    QLineEdit *nameEdit;
    QLineEdit *positionEdit;
    QLineEdit *salaryEdit;
    QPushButton *addButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QPushButton *logoutButton;
    
    int selectedEmployeeId = -1;
};
