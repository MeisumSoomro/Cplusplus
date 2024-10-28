#pragma once

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

class LoginWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit LoginWindow(QWidget *parent = nullptr);

private slots:
    void onLoginClicked();
    void onRegisterClicked();

private:
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QPushButton *registerButton;
};
