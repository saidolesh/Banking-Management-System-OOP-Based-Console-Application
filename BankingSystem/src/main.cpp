
#include "Bank.h"
#include <iostream>

int main() {
    Bank bank;
    int choice, accNum;
    std::string name, type;
    double amount;

    while (true) {
        std::cout << "\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Display Account\n5. Exit\nChoice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter account number, name, type (Savings/Current), initial deposit: ";
                std::cin >> accNum >> name >> type >> amount;
                bank.createAccount(type, accNum, name, amount);
                break;
            case 2:
                std::cout << "Enter account number and deposit amount: ";
                std::cin >> accNum >> amount;
                bank.deposit(accNum, amount);
                break;
            case 3:
                std::cout << "Enter account number and withdrawal amount: ";
                std::cin >> accNum >> amount;
                bank.withdraw(accNum, amount);
                break;
            case 4:
                std::cout << "Enter account number: ";
                std::cin >> accNum;
                bank.displayAccount(accNum);
                break;
            case 5:
                return 0;
            default:
                std::cout << "Invalid choice.\n";
        }
    }
}
