
#include "Account.h"
#include <iostream>

Account::Account(int accNum, const std::string& name, double bal)
    : accountNumber(accNum), holderName(name), balance(bal) {}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;
    }
    return false;
}

void Account::display() const {
    std::cout << "Account Number: " << accountNumber << "\n"
              << "Holder Name: " << holderName << "\n"
              << "Balance: " << balance << "\n";
}

int Account::getAccountNumber() const {
    return accountNumber;
}

double Account::getBalance() const {
    return balance;
}
