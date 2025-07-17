
#ifndef BANK_H
#define BANK_H

#include <vector>
#include <memory>
#include "Account.h"

class Bank {
private:
    std::vector<std::shared_ptr<Account>> accounts;

public:
    void createAccount(const std::string& type, int accNum, const std::string& name, double initialDeposit);
    void deposit(int accNum, double amount);
    void withdraw(int accNum, double amount);
    void displayAccount(int accNum) const;
};

#endif
