#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a  vector of Account pointer objects
void display_Section_16(const std::vector<Account_Section_16*> &accounts) {
    std::cout << "\n=== Accounts===========================================" << std::endl;
    for (const auto acc: accounts)
        std::cout << *acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit_Section_16(std::vector<Account_Section_16*> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto acc:accounts)  {
        if (acc->deposit_Section_16(amount))
            std::cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << *acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw_Section_16(std::vector<Account_Section_16*> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto acc:accounts)  {
        if (acc->withdraw_Section_16(amount))
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    } 
}
