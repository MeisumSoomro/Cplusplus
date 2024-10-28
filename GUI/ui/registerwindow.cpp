#include "registerwindow.h"
#include "loginwindow.h"
#include "../database/database.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include <QWidget>

RegisterWindow::RegisterWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("Register");
    setFixedSize(300, 250);

    auto centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    
    auto layout = new QVBoxLayout(centralWidget);
    
    usernameEdit = new QLineEdit(this);
    usernameEdit->setPlaceholderText("Username");
    
    passwordEdit = new QLineEdit(this);
    passwordEdit->setPlaceholderText("Password");
    passwordEdit->setEchoMode(QLineEdit::Password);
    
    confirmPasswordEdit = new QLineEdit(this);
    confirmPasswordEdit->setPlaceholderText("Confirm Password");
    confirmPasswordEdit->setEchoMode(QLineEdit::Password);
    
    registerButton = new QPushButton("Register", this);
    backButton = new QPushButton("Back to Login", this);
    
    layout->addWidget(usernameEdit);
    layout->addWidget(passwordEdit);
    layout->addWidget(confirmPasswordEdit);
    layout->addWidget(registerButton);
    layout->addWidget(backButton);
    
    connect(registerButton, &QPushButton::clicked, this, &RegisterWindow::onRegisterClicked);
    connect(backButton, &QPushButton::clicked, this, &RegisterWindow::onBackToLoginClicked);
}

void RegisterWindow::onRegisterClicked() {
    QString username = usernameEdit->text();
    QString password = passwordEdit->text();
    QString confirmPassword = confirmPasswordEdit->text();
    
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill all fields");
        return;
    }
    
    if (password != confirmPassword) {
        QMessageBox::warning(this, "Error", "Passwords do not match");
        return;
    }
    
    if (Database::getInstance().addUser(username, password)) {
        QMessageBox::information(this, "Success", "Registration successful!");
        onBackToLoginClicked();
    } else {
        QMessageBox::warning(this, "Error", "Username already exists");
    }
}

void RegisterWindow::onBackToLoginClicked() {
    auto loginWindow = new LoginWindow();
    loginWindow->show();
    this->close();
}
