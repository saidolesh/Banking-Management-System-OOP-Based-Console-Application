
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(int accNum, const std::string& name, double bal)
    : Account(accNum, name, bal) {}

std::string SavingsAccount::getType() const {
    return "Savings";
}
