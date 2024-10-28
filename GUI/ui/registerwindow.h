#pragma once

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

class RegisterWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit RegisterWindow(QWidget *parent = nullptr);

private slots:
    void onRegisterClicked();
    void onBackToLoginClicked();

private:
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QLineEdit *confirmPasswordEdit;
    QPushButton *registerButton;
    QPushButton *backButton;
};
