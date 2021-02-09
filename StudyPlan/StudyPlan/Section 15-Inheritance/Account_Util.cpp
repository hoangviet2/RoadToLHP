#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a  vector of Account objects 
void display_Section_15(const std::vector<Account_Section_15> &accounts) {
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit_Section_15(std::vector<Account_Section_15> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit_Section_15(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw_Section_15(std::vector<Account_Section_15> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw_Section_15(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}


// Helper functions for Savings Account class

// Displays Savings Account objects in a  vector of Savings Account objects 
void display_Section_15(const std::vector<Savings_Account_Section_15> &accounts) {
    std::cout << "\n=== Savings Accounts ====================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit_Section_15(std::vector<Savings_Account_Section_15> &accounts, double amount) {
    std::cout << "\n=== Depositing to Savings Accounts ==========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit_Section_15(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Savings Account object in the vector
void withdraw_Section_15(std::vector<Savings_Account_Section_15> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings Accounts ======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw_Section_15(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

// Helper functions for Checking Account class

// Displays Savings Account objects in a  vector of Savings Account objects
void display_Section_15(const std::vector<Checking_Account_Section_15> &accounts) {
    std::cout << "\n=== Checking Accounts ====================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit_Section_15(std::vector<Checking_Account_Section_15> &accounts, double amount) {
    std::cout << "\n=== Depositing to Checking Accounts ==========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit_Section_15(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Savings Account object in the vector
void withdraw_Section_15(std::vector<Checking_Account_Section_15> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Trust Accounts ======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw_Section_15(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}

// Helper functions for Trust Account class

// Displays Savings Account objects in a  vector of Savings Account objects
void display_Section_15(const std::vector<Trust_Account_Section_15> &accounts) {
    std::cout << "\n=== Savings Accounts ====================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit_Section_15(std::vector<Trust_Account_Section_15> &accounts, double amount) {
    std::cout << "\n=== Depositing to Trust Accounts ==========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit_Section_15(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Trust Account object in the vector
void withdraw_Section_15(std::vector<Trust_Account_Section_15> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Trust Accounts ======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw_Section_15(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}
