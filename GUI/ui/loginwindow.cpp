#include "loginwindow.h"
#include "../database/database.h"
#include "mainwindow.h"
#include "registerwindow.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include <QWidget>

LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("Login");
    setFixedSize(300, 200);

    auto centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    
    auto layout = new QVBoxLayout(centralWidget);
    
    usernameEdit = new QLineEdit(this);
    usernameEdit->setPlaceholderText("Username");
    
    passwordEdit = new QLineEdit(this);
    passwordEdit->setPlaceholderText("Password");
    passwordEdit->setEchoMode(QLineEdit::Password);
    
    loginButton = new QPushButton("Login", this);
    registerButton = new QPushButton("Register", this);
    
    layout->addWidget(usernameEdit);
    layout->addWidget(passwordEdit);
    layout->addWidget(loginButton);
    layout->addWidget(registerButton);
    
    connect(loginButton, &QPushButton::clicked, this, &LoginWindow::onLoginClicked);
    connect(registerButton, &QPushButton::clicked, this, &LoginWindow::onRegisterClicked);
}

void LoginWindow::onLoginClicked() {
    QString username = usernameEdit->text();
    QString password = passwordEdit->text();
    
    if (Database::getInstance().validateUser(username, password)) {
        auto mainWindow = new MainWindow();
        mainWindow->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Error", "Invalid username or password");
    }
}

void LoginWindow::onRegisterClicked() {
    auto registerWindow = new RegisterWindow();
    registerWindow->show();
    this->close();
}
