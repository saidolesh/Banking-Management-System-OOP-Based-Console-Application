
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
protected:
    int accountNumber;
    std::string holderName;
    double balance;

public:
    Account(int accNum, const std::string& name, double bal);
    virtual void deposit(double amount);
    virtual bool withdraw(double amount);
    virtual void display() const;
    virtual std::string getType() const = 0;
    int getAccountNumber() const;
    double getBalance() const;
    virtual ~Account() {}
};

#endif
