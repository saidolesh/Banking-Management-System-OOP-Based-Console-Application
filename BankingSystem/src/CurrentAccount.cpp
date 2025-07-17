
#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(int accNum, const std::string& name, double bal)
    : Account(accNum, name, bal) {}

std::string CurrentAccount::getType() const {
    return "Current";
}
