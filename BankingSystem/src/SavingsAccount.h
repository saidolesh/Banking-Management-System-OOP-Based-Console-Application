
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount(int accNum, const std::string& name, double bal);
    std::string getType() const override;
};

#endif
