
#include "Bank.h"
#include "SavingsAccount.h"
#include "CurrentAccount.h"
#include <iostream>

void Bank::createAccount(const std::string& type, int accNum, const std::string& name, double initialDeposit) {
    if (type == "Savings")
        accounts.push_back(std::make_shared<SavingsAccount>(accNum, name, initialDeposit));
    else if (type == "Current")
        accounts.push_back(std::make_shared<CurrentAccount>(accNum, name, initialDeposit));
}

void Bank::deposit(int accNum, double amount) {
    for (auto& acc : accounts) {
        if (acc->getAccountNumber() == accNum) {
            acc->deposit(amount);
            std::cout << "Deposit successful.\n";
            return;
        }
    }
    std::cout << "Account not found.\n";
}

void Bank::withdraw(int accNum, double amount) {
    for (auto& acc : accounts) {
        if (acc->getAccountNumber() == accNum) {
            if (acc->withdraw(amount))
                std::cout << "Withdrawal successful.\n";
            else
                std::cout << "Insufficient balance.\n";
            return;
        }
    }
    std::cout << "Account not found.\n";
}

void Bank::displayAccount(int accNum) const {
    for (const auto& acc : accounts) {
        if (acc->getAccountNumber() == accNum) {
            acc->display();
            return;
        }
    }
    std::cout << "Account not found.\n";
}
