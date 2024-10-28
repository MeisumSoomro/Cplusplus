#include "mainwindow.h"
#include "loginwindow.h"
#include "../database/database.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("HR Management System");
    setMinimumSize(800, 600);
    setupUI();
    loadEmployees();
}

void MainWindow::setupUI() {
    auto centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    
    auto mainLayout = new QVBoxLayout(centralWidget);
    auto inputLayout = new QHBoxLayout();
    
    // Create input fields
    nameEdit = new QLineEdit(this);
    nameEdit->setPlaceholderText("Name");
    positionEdit = new QLineEdit(this);
    positionEdit->setPlaceholderText("Position");
    salaryEdit = new QLineEdit(this);
    salaryEdit->setPlaceholderText("Salary");
    
    inputLayout->addWidget(nameEdit);
    inputLayout->addWidget(positionEdit);
    inputLayout->addWidget(salaryEdit);
    
    // Create buttons
    auto buttonLayout = new QHBoxLayout();
    addButton = new QPushButton("Add", this);
    updateButton = new QPushButton("Update", this);
    deleteButton = new QPushButton("Delete", this);
    logoutButton = new QPushButton("Logout", this);
    
    buttonLayout->addWidget(addButton);
    buttonLayout->addWidget(updateButton);
    buttonLayout->addWidget(deleteButton);
    buttonLayout->addWidget(logoutButton);
    
    // Create table
    employeeTable = new QTableWidget(this);
    employeeTable->setColumnCount(4);
    employeeTable->setHorizontalHeaderLabels({"ID", "Name", "Position", "Salary"});
    employeeTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    
    mainLayout->addLayout(inputLayout);
    mainLayout->addLayout(buttonLayout);
    mainLayout->addWidget(employeeTable);
    
    // Connect signals
    connect(addButton, &QPushButton::clicked, this, &MainWindow::onAddEmployee);
    connect(updateButton, &QPushButton::clicked, this, &MainWindow::onUpdateEmployee);
    connect(deleteButton, &QPushButton::clicked, this, &MainWindow::onDeleteEmployee);
    connect(logoutButton, &QPushButton::clicked, this, &MainWindow::onLogout);
    connect(employeeTable, &QTableWidget::cellClicked, this, &MainWindow::onRowSelected);
}

void MainWindow::loadEmployees() {
    employeeTable->setRowCount(0);
    QSqlQuery query = Database::getInstance().getAllEmployees();
    
    while (query.next()) {
        int row = employeeTable->rowCount();
        employeeTable->insertRow(row);
        
        employeeTable->setItem(row, 0, new QTableWidgetItem(query.value("id").toString()));
        employeeTable->setItem(row, 1, new QTableWidgetItem(query.value("name").toString()));
        employeeTable->setItem(row, 2, new QTableWidgetItem(query.value("position").toString()));
        employeeTable->setItem(row, 3, new QTableWidgetItem(QString::number(query.value("salary").toDouble())));
    }
}

// Add the remaining CRUD operation implementations to database.cpp

void MainWindow::onAddEmployee() {
    QString name = nameEdit->text();
    QString position = positionEdit->text();
    QString salaryText = salaryEdit->text();
    
    if (name.isEmpty() || position.isEmpty() || salaryText.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill all fields");
        return;
    }
    
    bool ok;
    double salary = salaryText.toDouble(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Error", "Invalid salary value");
        return;
    }
    
    if (Database::getInstance().addEmployee(name, position, salary)) {
        QMessageBox::information(this, "Success", "Employee added successfully");
        loadEmployees();
        nameEdit->clear();
        positionEdit->clear();
        salaryEdit->clear();
    } else {
        QMessageBox::warning(this, "Error", "Failed to add employee");
    }
}

void MainWindow::onUpdateEmployee() {
    if (selectedEmployeeId == -1) {
        QMessageBox::warning(this, "Error", "Please select an employee to update");
        return;
    }
    
    QString name = nameEdit->text();
    QString position = positionEdit->text();
    QString salaryText = salaryEdit->text();
    
    if (name.isEmpty() || position.isEmpty() || salaryText.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill all fields");
        return;
    }
    
    bool ok;
    double salary = salaryText.toDouble(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Error", "Invalid salary value");
        return;
    }
    
    if (Database::getInstance().updateEmployee(selectedEmployeeId, name, position, salary)) {
        QMessageBox::information(this, "Success", "Employee updated successfully");
        loadEmployees();
        nameEdit->clear();
        positionEdit->clear();
        salaryEdit->clear();
        selectedEmployeeId = -1;
    } else {
        QMessageBox::warning(this, "Error", "Failed to update employee");
    }
}

void MainWindow::onDeleteEmployee() {
    if (selectedEmployeeId == -1) {
        QMessageBox::warning(this, "Error", "Please select an employee to delete");
        return;
    }
    
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirm Delete", 
        "Are you sure you want to delete this employee?", 
        QMessageBox::Yes|QMessageBox::No);
        
    if (reply == QMessageBox::Yes) {
        if (Database::getInstance().deleteEmployee(selectedEmployeeId)) {
            QMessageBox::information(this, "Success", "Employee deleted successfully");
            loadEmployees();
            nameEdit->clear();
            positionEdit->clear();
            salaryEdit->clear();
            selectedEmployeeId = -1;
        } else {
            QMessageBox::warning(this, "Error", "Failed to delete employee");
        }
    }
}

void MainWindow::onRefreshTable() {
    loadEmployees();
}

void MainWindow::onLogout() {
    auto loginWindow = new LoginWindow();
    loginWindow->show();
    this->close();
}

void MainWindow::onRowSelected(int row) {
    selectedEmployeeId = employeeTable->item(row, 0)->text().toInt();
    nameEdit->setText(employeeTable->item(row, 1)->text());
    positionEdit->setText(employeeTable->item(row, 2)->text());
    salaryEdit->setText(employeeTable->item(row, 3)->text());
}
