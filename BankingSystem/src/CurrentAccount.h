
#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include "Account.h"

class CurrentAccount : public Account {
public:
    CurrentAccount(int accNum, const std::string& name, double bal);
    std::string getType() const override;
};

#endif
