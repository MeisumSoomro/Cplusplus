#include <iostream>
#include <string>

class Bank {
    char name[100], add[100];
    int balance;
public:
    void openAccount();
    void depositAmount();
    void withdrawAmount();
    void balanceEnquiry();
    void modifyAccount();
    void closeAccount();
    void exit();
};

void Bank::openAccount() {
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your address: ";
    std::cin >> add;
    std::cout << "Enter initial balance: ";
    std::cin >> balance;
    std::cout << "Account opened successfully.\n";
}

void Bank::depositAmount() {
    int deposit;
    std::cout << "Enter amount to deposit: ";
    std::cin >> deposit;
    balance += deposit;
    std::cout << "Amount deposited successfully. New balance: " << balance << "\n";
}

void Bank::withdrawAmount() {
    int withdraw;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> withdraw;
    if (withdraw > balance) {
        std::cout << "Insufficient balance.\n";
    } else {
        balance -= withdraw;
        std::cout << "Amount withdrawn successfully. Remaining balance: " << balance << "\n";
    }
}

void Bank::balanceEnquiry() {
    std::cout << "Current balance: " << balance << "\n";
}

void Bank::modifyAccount() {
    std::cout << "Enter new name: ";
    std::cin >> name;
    std::cout << "Enter new address: ";
    std::cin >> add;
    std::cout << "Account details updated successfully.\n";
}

void Bank::closeAccount() {
    name[0] = '\0';
    add[0] = '\0';
    balance = 0;
    std::cout << "Account closed successfully.\n";
}

void Bank::exit() {
    std::cout << "Exiting the banking system.\n";
    // Perform any necessary cleanup here
}

int main() {
    Bank bank;
    bank.openAccount();
    bank.depositAmount();
    bank.withdrawAmount();
    bank.balanceEnquiry();
    bank.modifyAccount();
    bank.closeAccount();
    bank.exit();

    // Pause the program
    std::cout << "Press Enter to continue...";
    std::cin.get(); // To capture the newline character left by previous input
    std::cin.get(); // To wait for the user to press Enter

    return 0;
}
